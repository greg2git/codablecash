/*
 * ForStatement.h
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#ifndef SC_STATEMENT_CTRL_FORSTATEMENT_H_
#define SC_STATEMENT_CTRL_FORSTATEMENT_H_

#include "sc_statement/AbstractStatement.h"

namespace alinous {
class AbstractExpression;

class ForStatement: public AbstractStatement {
public:
	ForStatement();
	virtual ~ForStatement();

	virtual void preAnalyze(AnalyzeContext* actx);
	virtual void analyzeTypeRef(AnalyzeContext* actx);
	virtual void analyze(AnalyzeContext* actx);

	void setStatement(AbstractStatement* stmt) noexcept;

	void setInit(AbstractStatement* initStatement) noexcept;
	void setCondition(AbstractExpression* cond) noexcept;
	void setPostLoop(AbstractExpression* postLoop) noexcept;

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out);
	virtual void fromBinary(ByteBuffer* in);

	virtual void init(VirtualMachine* vm);
	virtual void interpret(VirtualMachine* vm);
private:
	AbstractStatement* initStatement;
	AbstractExpression* cond;
	AbstractExpression* postLoop;
	AbstractStatement* stmt;
};

} /* namespace alinous */

#endif /* SC_STATEMENT_CTRL_FORSTATEMENT_H_ */
