/*
 * BitReverseExpression.h
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#ifndef SC_EXPRESSION_BIT_BITREVERSEEXPRESSION_H_
#define SC_EXPRESSION_BIT_BITREVERSEEXPRESSION_H_

#include "sc_expression/AbstractExpression.h"

namespace alinous {

class BitReverseExpression : public AbstractExpression {
public:
	BitReverseExpression();
	virtual ~BitReverseExpression();

	void setExpression(AbstractExpression* exp) noexcept;
private:
	AbstractExpression* exp;
};

} /* namespace alinous */

#endif /* SC_EXPRESSION_BIT_BITREVERSEEXPRESSION_H_ */
