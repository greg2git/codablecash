/*
 * MemberFunctionCallAccess.cpp
 *
 *  Created on: 2019/10/31
 *      Author: iizuka
 */

#include "variable_access/MemberFunctionCallAccess.h"

#include "sc_analyze/AnalyzedType.h"


namespace alinous {

MemberFunctionCallAccess::MemberFunctionCallAccess() {
	// TODO Auto-generated constructor stub

}

MemberFunctionCallAccess::~MemberFunctionCallAccess() {
	// TODO Auto-generated destructor stub
}

void MemberFunctionCallAccess::analyze(AnalyzeContext* actx, AbstractVariableInstraction* lastIinst, CodeElement* element) {
	// FIXME analyze
}

AnalyzedType MemberFunctionCallAccess::getAnalyzedType() const noexcept {
	// FIXME analyze
	return AnalyzedType();
}

AbstractVmInstance* MemberFunctionCallAccess::interpret(VirtualMachine* vm, AbstractVmInstance* lastInst) {
	return nullptr; // FIXME interpret
}

} /* namespace alinous */
