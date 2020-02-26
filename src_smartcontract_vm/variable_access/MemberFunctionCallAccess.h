/*
 * MemberFunctionCallAccess.h
 *
 *  Created on: 2019/10/31
 *      Author: iizuka
 */

#ifndef VARIABLE_ACCESS_MEMBERFUNCTIONCALLACCESS_H_
#define VARIABLE_ACCESS_MEMBERFUNCTIONCALLACCESS_H_

#include "variable_access/AbstractVariableInstraction.h"

namespace alinous {

class FunctionCallExpression;

class MemberFunctionCallAccess: public AbstractVariableInstraction {
public:
	MemberFunctionCallAccess(FunctionCallExpression* exp);
	virtual ~MemberFunctionCallAccess();

	virtual void analyze(AnalyzeContext* actx, AbstractVariableInstraction* lastIinst, CodeElement* element);
	virtual AnalyzedType getAnalyzedType() const noexcept;
	virtual AbstractVmInstance* interpret(VirtualMachine* vm, AbstractVmInstance* lastInst);

private:
	FunctionCallExpression* exp;
};

} /* namespace alinous */

#endif /* VARIABLE_ACCESS_MEMBERFUNCTIONCALLACCESS_H_ */
