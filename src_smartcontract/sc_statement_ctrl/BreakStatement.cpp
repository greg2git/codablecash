/*
 * BreakStatement.cpp
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#include "sc_statement_ctrl/BreakStatement.h"

namespace alinous {

BreakStatement::BreakStatement() : AbstractStatement(CodeElement::STMT_BREAK) {

}

BreakStatement::~BreakStatement() {
}

void BreakStatement::preAnalyze(AnalyzeContext* actx) {
}

void BreakStatement::analyzeTypeRef(AnalyzeContext* actx) {
}

void BreakStatement::analyze(AnalyzeContext* actx) {
}

void BreakStatement::init(VirtualMachine* vm) {
}

int BreakStatement::binarySize() const {
	int total = sizeof(uint16_t);

	return total;
}

void BreakStatement::toBinary(ByteBuffer* out) {
	out->putShort(CodeElement::STMT_BREAK);
}

void BreakStatement::fromBinary(ByteBuffer* in) {
}

void BreakStatement::interpret(VirtualMachine* vm) {
}

} /* namespace alinous */
