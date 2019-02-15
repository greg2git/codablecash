/*
 * ConditionalOrExpression.h
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#ifndef SC_EXPRESSION_LOGICAL_CONDITIONALOREXPRESSION_H_
#define SC_EXPRESSION_LOGICAL_CONDITIONALOREXPRESSION_H_

#include "sc_expression/AbstractBinaryExpression.h"

namespace alinous {

class ConditionalOrExpression : public AbstractBinaryExpression {
public:
	ConditionalOrExpression();
	virtual ~ConditionalOrExpression();
};

} /* namespace alinous */

#endif /* SC_EXPRESSION_LOGICAL_CONDITIONALOREXPRESSION_H_ */
