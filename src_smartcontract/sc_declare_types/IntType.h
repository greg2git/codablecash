/*
 * IntType.h
 *
 *  Created on: 2019/01/19
 *      Author: iizuka
 */

#ifndef SC_DECLARE_TYPES_INTTYPE_H_
#define SC_DECLARE_TYPES_INTTYPE_H_

#include "sc_declare_types/AbstractPrimitiveType.h"

namespace alinous {

class IntType : public AbstractPrimitiveType {
public:
	IntType();
	virtual ~IntType();
};

} /* namespace alinous */

#endif /* SC_DECLARE_TYPES_INTTYPE_H_ */
