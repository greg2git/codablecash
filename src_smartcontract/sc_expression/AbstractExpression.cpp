/*
 * AbstractExpression.cpp
 *
 *  Created on: 2019/02/05
 *      Author: iizuka
 */

#include "sc_expression/AbstractExpression.h"

#include "variable_access/VariableInstractionHolder.h"

namespace alinous {

AbstractExpression::AbstractExpression(int kind) : CodeElement(kind) {
	this->valInstHolder = nullptr;
}

AbstractExpression::~AbstractExpression() {
	delete this->valInstHolder;
}

AbstractVmInstance* AbstractExpression::interpret(VirtualMachine* vm) {
	return nullptr;
}

VariableInstractionHolder* AbstractExpression::getVariableInstractionHolder() noexcept {
	if(this->valInstHolder == nullptr){
		this->valInstHolder = new VariableInstractionHolder();
	}
	return this->valInstHolder;
}

bool AbstractExpression::isExecutable() {
	return true;
}


} /* namespace alinous */
