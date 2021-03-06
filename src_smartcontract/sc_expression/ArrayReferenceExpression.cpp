/*
 * ArrayReferenceExpression.cpp
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#include "sc_expression/ArrayReferenceExpression.h"
#include "sc_analyze/AnalyzedType.h"

namespace alinous {

ArrayReferenceExpression::ArrayReferenceExpression() : AbstractExpression(CodeElement::EXP_ARRAY_REF) {
	this->exp = nullptr;
}

ArrayReferenceExpression::~ArrayReferenceExpression() {
	delete this->exp;
	this->list.deleteElements();
}

void ArrayReferenceExpression::preAnalyze(AnalyzeContext* actx) {
	this->exp->setParent(this);
	this->exp->preAnalyze(actx);

	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		AbstractExpression* ex = this->list.get(i);
		ex->setParent(this);
		ex->preAnalyze(actx);
	}
}

void ArrayReferenceExpression::analyzeTypeRef(AnalyzeContext* actx) {
	// FIXME expression : analyze type
}

void ArrayReferenceExpression::analyze(AnalyzeContext* actx) {
	this->exp->analyze(actx);

	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		AbstractExpression* ex = this->list.get(i);
		ex->analyze(actx);
	}
}

void ArrayReferenceExpression::setExp(AbstractExpression* exp) noexcept {
	this->exp = exp;
}

void ArrayReferenceExpression::addIndex(AbstractExpression* exp) noexcept {
	this->list.addElement(exp);
}

int ArrayReferenceExpression::binarySize() const {
	checkNotNull(this->exp);

	int total = sizeof(uint16_t);
	total += this->exp->binarySize();

	total+= sizeof(uint32_t);
	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		AbstractExpression* ex = this->list.get(i);
		total += ex->binarySize();
	}

	return total;
}

void ArrayReferenceExpression::toBinary(ByteBuffer* out) {
	checkNotNull(this->exp);
	out->putShort(CodeElement::EXP_ARRAY_REF);

	this->exp->toBinary(out);

	int maxLoop = this->list.size();
	out->putInt(maxLoop);

	for(int i = 0; i != maxLoop; ++i){
		AbstractExpression* ex = this->list.get(i);
		ex->toBinary(out);
	}
}

void ArrayReferenceExpression::fromBinary(ByteBuffer* in) {
	CodeElement* element = createFromBinary(in);
	checkIsExp(element);
	this->exp = dynamic_cast<AbstractExpression*>(element);

	int maxLoop = in->getInt();
	for(int i = 0; i != maxLoop; ++i){
		element = createFromBinary(in);
		checkIsExp(element);

		AbstractExpression* ex = dynamic_cast<AbstractExpression*>(element);
		this->list.addElement(ex);
	}
}

AnalyzedType ArrayReferenceExpression::getType(AnalyzeContext* actx) {
	// FIXME analyze array ref type
	return AnalyzedType();
}

void ArrayReferenceExpression::init(VirtualMachine* vm) {
	this->exp->init(vm);

	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		AbstractExpression* ex = this->list.get(i);
		ex->init(vm);
	}
}

AbstractVmInstance* ArrayReferenceExpression::interpret(VirtualMachine* vm) {
	return nullptr; // FIXME expression::interpret()
}

} /* namespace alinous */
