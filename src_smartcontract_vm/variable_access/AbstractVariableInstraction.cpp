/*
 * AbstractVariableInstraction.cpp
 *
 *  Created on: 2019/10/31
 *      Author: iizuka
 */

#include "variable_access/AbstractVariableInstraction.h"

namespace alinous {

AbstractVariableInstraction::AbstractVariableInstraction() {

}

AbstractVariableInstraction::~AbstractVariableInstraction() {

}

bool AbstractVariableInstraction::hasErrorOnAnalyze() const noexcept {
	return false;
}

} /* namespace alinous */
