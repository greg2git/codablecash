/*
 * SQLBooleanLiteral.cpp
 *
 *  Created on: 2019/02/16
 *      Author: iizuka
 */

#include "sql_expression/SQLBooleanLiteral.h"

namespace alinous {

SQLBooleanLiteral::SQLBooleanLiteral() : AbstractSQLExpression(CodeElement::SQL_EXP_BOOL_LITERAL) {
	this->value = false;
}

SQLBooleanLiteral::~SQLBooleanLiteral() {
}

void SQLBooleanLiteral::setValue(bool value) noexcept {
	this->value = value;
}

int SQLBooleanLiteral::binarySize() const {
	int total = sizeof(uint16_t);
	total += sizeof(uint8_t);

	return total;
}

void SQLBooleanLiteral::toBinary(ByteBuffer* out) {
	out->putShort(CodeElement::SQL_EXP_BOOL_LITERAL);
	out->put(this->value ? 1 : 0);
}

void SQLBooleanLiteral::fromBinary(ByteBuffer* in) {
	uint8_t bl = in->get();
	this->value = (bl == 1);
}

} /* namespace alinous */
