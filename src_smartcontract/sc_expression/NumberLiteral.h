/*
 * NumberLiteral.h
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#ifndef SC_EXPRESSION_NUMBERLITERAL_H_
#define SC_EXPRESSION_NUMBERLITERAL_H_

#include "sc_expression/AbstractExpression.h"

namespace alinous {
class UnicodeString;

class NumberLiteral : public AbstractExpression {
public:
	NumberLiteral();
	virtual ~NumberLiteral();

	void setValue(UnicodeString* str) noexcept;

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out);
	virtual void fromBinary(ByteBuffer* in);
private:
	UnicodeString* str;
};

} /* namespace alinous */

#endif /* SC_EXPRESSION_NUMBERLITERAL_H_ */
