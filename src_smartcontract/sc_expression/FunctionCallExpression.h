/*
 * FunctionCallExpression.h
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#ifndef SC_EXPRESSION_FUNCTIONCALLEXPRESSION_H_
#define SC_EXPRESSION_FUNCTIONCALLEXPRESSION_H_

#include "sc_expression/AbstractExpression.h"
#include "base/ArrayList.h"

namespace alinous {
class UnicodeString;
class VTableMethodEntry;
class StackVariableAccess;
class FunctionArguments;


class FunctionCallExpression : public AbstractExpression {
public:
	FunctionCallExpression();
	virtual ~FunctionCallExpression();

	virtual void preAnalyze(AnalyzeContext* actx);
	virtual void analyzeTypeRef(AnalyzeContext* actx);
	virtual void analyze(AnalyzeContext* actx);

	void setName(AbstractExpression* exp) noexcept;
	void addArgument(AbstractExpression* exp) noexcept;

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out);
	virtual void fromBinary(ByteBuffer* in);

	virtual AnalyzedType getType(AnalyzeContext* actx);

	virtual void init(VirtualMachine* vm);
	virtual AbstractVmInstance* interpret(VirtualMachine* vm);

private:
	AbstractVmInstance* interpretVirtual(VirtualMachine* vm, FunctionArguments* args);
	void interpretArguments(VirtualMachine* vm, FunctionArguments* args);
private:
	AbstractExpression* name;
	ArrayList<AbstractExpression> args;

	UnicodeString* strName;
	VTableMethodEntry* methodEntry;
	const UnicodeString* callSignature;

	StackVariableAccess* thisAccess;
};

} /* namespace alinous */

#endif /* SC_EXPRESSION_FUNCTIONCALLEXPRESSION_H_ */
