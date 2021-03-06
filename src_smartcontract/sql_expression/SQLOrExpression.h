/*
 * SQLOrExpression.h
 *
 *  Created on: 2019/02/16
 *      Author: iizuka
 */

#ifndef SQL_EXPRESSION_SQLOREXPRESSION_H_
#define SQL_EXPRESSION_SQLOREXPRESSION_H_

#include "sql_expression/AbstractSQLBinaryExpression.h"

namespace alinous {

class SQLOrExpression : public AbstractSQLBinaryExpression {
public:
	SQLOrExpression();
	virtual ~SQLOrExpression();

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out);
	virtual void fromBinary(ByteBuffer* in);
};

} /* namespace alinous */

#endif /* SQL_EXPRESSION_SQLOREXPRESSION_H_ */
