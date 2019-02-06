/*
 * BreakStatement.h
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#ifndef SC_STATEMENT_CTRL_BREAKSTATEMENT_H_
#define SC_STATEMENT_CTRL_BREAKSTATEMENT_H_

#include "sc_statement/AbstractStatement.h"

namespace alinous {

class BreakStatement: public AbstractStatement {
public:
	BreakStatement();
	virtual ~BreakStatement();
};

} /* namespace alinous */

#endif /* SC_STATEMENT_CTRL_BREAKSTATEMENT_H_ */