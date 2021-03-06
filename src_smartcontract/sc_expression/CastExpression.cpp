/*
 * CastExpression.cpp
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#include "sc_expression/CastExpression.h"
#include "sc_declare_types/AbstractType.h"
#include "sc_analyze/AnalyzedType.h"

namespace alinous {

CastExpression::CastExpression() : AbstractExpression(CodeElement::EXP_CAST) {
	this->exp = nullptr;
	this->type = nullptr;
}

CastExpression::~CastExpression() {
	delete this->exp;
	delete this->type;
}

void CastExpression::preAnalyze(AnalyzeContext* actx) {
	this->type->setParent(this);
	this->exp->setParent(this);
	this->exp->preAnalyze(actx);
}

void CastExpression::analyzeTypeRef(AnalyzeContext* actx) {
	// FIXME expression : analyze type
}

void CastExpression::analyze(AnalyzeContext* actx) {
	this->exp->analyze(actx);
}

void CastExpression::setType(AbstractType* type) noexcept {
	this->type = type;
}

void CastExpression::setExpression(AbstractExpression* exp) noexcept {
	this->exp = exp;
}

int CastExpression::binarySize() const {
	checkNotNull(this->exp);
	checkNotNull(this->type);

	int total = sizeof(uint16_t);
	total += this->exp->binarySize();
	total += this->type->binarySize();

	return total;
}

void CastExpression::toBinary(ByteBuffer* out) {
	checkNotNull(this->exp);
	checkNotNull(this->type);

	out->putShort(CodeElement::EXP_CAST);
	this->exp->toBinary(out);
	this->type->toBinary(out);
}

void CastExpression::fromBinary(ByteBuffer* in) {
	CodeElement* element = createFromBinary(in);
	checkIsExp(element);
	this->exp = dynamic_cast<AbstractExpression*>(element);

	element = createFromBinary(in);
	checkIsType(element);
	this->type = dynamic_cast<AbstractType*>(element);
}

AnalyzedType CastExpression::getType(AnalyzeContext* actx) {
	// FIXME analyze cast expression type
	return AnalyzedType();
}

void CastExpression::init(VirtualMachine* vm) {
	this->exp->init(vm);
}

AbstractVmInstance* CastExpression::interpret(VirtualMachine* vm) {
	return nullptr; // FIXME expression::interpret()
}

} /* namespace alinous */
