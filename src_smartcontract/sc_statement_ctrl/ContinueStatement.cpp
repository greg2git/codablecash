/*
 * ContinueStatement.cpp
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#include "sc_statement_ctrl/ContinueStatement.h"

namespace alinous {

ContinueStatement::ContinueStatement() : AbstractStatement(CodeElement::STMT_CONTINUE) {

}

ContinueStatement::~ContinueStatement() {
}

} /* namespace alinous */

int alinous::ContinueStatement::binarySize() const {
}

void alinous::ContinueStatement::toBinary(ByteBuffer* out) {
}

void alinous::ContinueStatement::fromBinary(ByteBuffer* in) {
}
