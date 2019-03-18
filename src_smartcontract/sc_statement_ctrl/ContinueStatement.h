/*
 * ContinueStatement.h
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#ifndef SC_STATEMENT_CTRL_CONTINUESTATEMENT_H_
#define SC_STATEMENT_CTRL_CONTINUESTATEMENT_H_

#include "sc_statement/AbstractStatement.h"

namespace alinous {

class ContinueStatement: public AbstractStatement {
public:
	ContinueStatement();
	virtual ~ContinueStatement();

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out);
	virtual void fromBinary(ByteBuffer* in);
};

} /* namespace alinous */

#endif /* SC_STATEMENT_CTRL_CONTINUESTATEMENT_H_ */
