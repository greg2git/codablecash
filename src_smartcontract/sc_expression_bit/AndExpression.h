/*
 * AndExpression.h
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#ifndef SC_EXPRESSION_BIT_ANDEXPRESSION_H_
#define SC_EXPRESSION_BIT_ANDEXPRESSION_H_

#include "sc_expression/AbstractBinaryExpression.h"
#include "sc_analyze/AnalyzedType.h"

namespace alinous {

class AndExpression : public AbstractBinaryExpression {
public:
	AndExpression();
	virtual ~AndExpression();

	virtual void preAnalyze(AnalyzeContext* actx);
	virtual void analyzeTypeRef(AnalyzeContext* actx);
	virtual void analyze(AnalyzeContext* actx);

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out);
	virtual void fromBinary(ByteBuffer* in);

	virtual AnalyzedType getType(AnalyzeContext* actx);
	virtual AbstractVmInstance* interpret(VirtualMachine* vm);
private:
	AnalyzedType atype;
};

} /* namespace alinous */

#endif /* SC_EXPRESSION_BIT_ANDEXPRESSION_H_ */
