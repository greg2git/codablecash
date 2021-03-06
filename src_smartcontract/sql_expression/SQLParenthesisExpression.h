/*
 * SQLParenthesisExpression.h
 *
 *  Created on: 2019/02/16
 *      Author: iizuka
 */

#ifndef SQL_EXPRESSION_SQLPARENTHESISEXPRESSION_H_
#define SQL_EXPRESSION_SQLPARENTHESISEXPRESSION_H_

#include "sql/AbstractSQLExpression.h"

namespace alinous {

class SQLParenthesisExpression : public AbstractSQLExpression {
public:
	SQLParenthesisExpression();
	virtual ~SQLParenthesisExpression();

	void setExpression(AbstractSQLExpression* exp) noexcept;

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out);
	virtual void fromBinary(ByteBuffer* in);
private:
	AbstractSQLExpression* exp;
};

} /* namespace alinous */

#endif /* SQL_EXPRESSION_SQLPARENTHESISEXPRESSION_H_ */
