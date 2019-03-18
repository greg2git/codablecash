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

} /* namespace alinous */

int alinous::BreakStatement::binarySize() const {
}

void alinous::BreakStatement::toBinary(ByteBuffer* out) {
}

void alinous::BreakStatement::fromBinary(ByteBuffer* in) {
}
