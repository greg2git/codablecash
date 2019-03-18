/*
 * IntType.cpp
 *
 *  Created on: 2019/01/19
 *      Author: iizuka
 */

#include "sc_declare_types/IntType.h"

namespace alinous {

IntType::IntType()  : AbstractPrimitiveType(CodeElement::TYPE_INT) {

}

IntType::~IntType() {
}

} /* namespace alinous */

int alinous::IntType::binarySize() const {
}

void alinous::IntType::toBinary(ByteBuffer* out) {
}

void alinous::IntType::fromBinary(ByteBuffer* in) {
}
