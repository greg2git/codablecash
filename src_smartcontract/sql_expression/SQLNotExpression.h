/*
 * SQLNotExpression.h
 *
 *  Created on: 2019/02/16
 *      Author: iizuka
 */

#ifndef SQL_EXPRESSION_SQLNOTEXPRESSION_H_
#define SQL_EXPRESSION_SQLNOTEXPRESSION_H_

#include "sql/AbstractSQLExpression.h"

namespace alinous {

class SQLNotExpression : public AbstractSQLExpression {
public:
	SQLNotExpression();
	virtual ~SQLNotExpression();
};

} /* namespace alinous */

#endif /* SQL_EXPRESSION_SQLNOTEXPRESSION_H_ */