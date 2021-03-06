/*
 * BooleanLiteral.cpp
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#include "sc_expression/BooleanLiteral.h"
#include "sc_analyze/AnalyzedType.h"

namespace alinous {

BooleanLiteral::BooleanLiteral() : AbstractExpression(CodeElement::EXP_BOOLEAN_LITERAL) {
	this->value = false;
}

BooleanLiteral::~BooleanLiteral() {
}

void BooleanLiteral::preAnalyze(AnalyzeContext* actx) {

}

void BooleanLiteral::analyzeTypeRef(AnalyzeContext* actx) {
}

void BooleanLiteral::analyze(AnalyzeContext* actx) {

}

void BooleanLiteral::setValue(bool v) noexcept {
	this->value = v;
}

int BooleanLiteral::binarySize() const {
	int total = sizeof(uint16_t);
	total += sizeof(uint8_t);

	return total;
}

void BooleanLiteral::toBinary(ByteBuffer* out) {
	out->putShort(CodeElement::EXP_BOOLEAN_LITERAL);
	out->put(this->value ? 1 : 0);
}

void BooleanLiteral::fromBinary(ByteBuffer* in) {
	char val = in->get();
	this->value = (val == 1);
}

AnalyzedType BooleanLiteral::getType(AnalyzeContext* actx) {
	return AnalyzedType(AnalyzedType::TYPE_BOOL);
}

void BooleanLiteral::init(VirtualMachine* vm) {
	// FIXME register const
}

AbstractVmInstance* BooleanLiteral::interpret(VirtualMachine* vm) {
	return nullptr; // FIXME expression::interpret()
}

} /* namespace alinous */
