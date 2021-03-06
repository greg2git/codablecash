/*
 * FunctionArguments.cpp
 *
 *  Created on: 2019/11/03
 *      Author: iizuka
 */

#include "variable_access/FunctionArguments.h"
#include "instance_ref/AbstractReference.h"

namespace alinous {

FunctionArguments::FunctionArguments() {
	this->returnedValue = nullptr;
	this->_this = nullptr;
}

FunctionArguments::~FunctionArguments() {
	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		AbstractReference* ref = this->list.get(i);
		if(!ref->isPrimitive()){
			delete ref;
		}
	}
}

void FunctionArguments::addReference(AbstractReference* ref) noexcept {
	this->list.addElement(ref);
}

void FunctionArguments::setThisPtr(VmClassInstance* _this) noexcept {
	this->_this = _this;
}

VmClassInstance* FunctionArguments::getThisPtr() const noexcept {
	return this->_this;
}

const ArrayList<AbstractReference>* FunctionArguments::getArguments() const noexcept {
	return &this->list;
}

AbstractVmInstance* alinous::FunctionArguments::getReturnedValue() const noexcept {
	return this->returnedValue;
}

void alinous::FunctionArguments::setReturnedValue(AbstractVmInstance* inst) noexcept {
	this->returnedValue = inst;
}


} /* namespace alinous */
