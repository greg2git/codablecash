/*
 * SqlMultiplicativeExpression.h
 *
 *  Created on: 2019/02/16
 *      Author: iizuka
 */

#ifndef SQL_EXPRESSION_SQLMULTIPLICATIVEEXPRESSION_H_
#define SQL_EXPRESSION_SQLMULTIPLICATIVEEXPRESSION_H_

#include "sql_expression/AbstractSQLBinaryExpression.h"
#include "base/RawArrayPrimitive.h"
#include <cstdint>

namespace alinous {

class SqlMultiplicativeExpression : public AbstractSQLBinaryExpression {
public:
	static const constexpr uint8_t MUL{1};
	static const constexpr uint8_t DIV{2};
	static const constexpr uint8_t MOD{3};

	SqlMultiplicativeExpression();
	virtual ~SqlMultiplicativeExpression();

	void addOpe(uint8_t ope) noexcept;

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out);
	virtual void fromBinary(ByteBuffer* in);
private:
	RawArrayPrimitive<uint8_t> operations;
};

} /* namespace alinous */

#endif /* SQL_EXPRESSION_SQLMULTIPLICATIVEEXPRESSION_H_ */
