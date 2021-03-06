/*
 * CreateTableStatement.cpp
 *
 *  Created on: 2019/02/16
 *      Author: iizuka
 */

#include "sql_ddl/CreateTableStatement.h"

namespace alinous {

CreateTableStatement::CreateTableStatement() : AbstractSQLStatement(CodeElement::DDL_CREATE_TABLE) {

}

CreateTableStatement::~CreateTableStatement() {

}

void CreateTableStatement::preAnalyze(AnalyzeContext* actx) {
}

void CreateTableStatement::analyzeTypeRef(AnalyzeContext* actx) {
}


void CreateTableStatement::analyze(AnalyzeContext* actx) {
}

int CreateTableStatement::binarySize() const {
	int total = sizeof(uint16_t);

	return total;
}

void CreateTableStatement::toBinary(ByteBuffer* out) {
	out->putShort(CodeElement::DDL_CREATE_TABLE);
}

void CreateTableStatement::fromBinary(ByteBuffer* in) {
}

void CreateTableStatement::interpret(VirtualMachine* vm) {
	// FIXME SQL statement
}

} /* namespace alinous */
