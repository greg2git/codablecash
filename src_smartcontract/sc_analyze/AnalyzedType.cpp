/*
 * AnalyzedType.cpp
 *
 *  Created on: 2019/06/11
 *      Author: iizuka
 */

#include "sc_analyze/AnalyzedType.h"
#include "sc_analyze/AnalyzedClass.h"

#include "base/UnicodeString.h"

namespace alinous {

const UnicodeString AnalyzedType::SIG_BOOL(L"Z");
const UnicodeString AnalyzedType::SIG_BYTE(L"B");
const UnicodeString AnalyzedType::SIG_CHAR(L"C");
const UnicodeString AnalyzedType::SIG_SHORT(L"S");
const UnicodeString AnalyzedType::SIG_INT(L"I");
const UnicodeString AnalyzedType::SIG_LONG(L"J");
const UnicodeString AnalyzedType::SIG_STRING(L"LString;");



AnalyzedType::AnalyzedType(uint8_t type) {
	this->type = type;
	this->aclazz = nullptr;
	this->str = nullptr;
	this->dim = 0;
}

AnalyzedType::AnalyzedType(AnalyzedClass* clazz) {
	this->type = TYPE_OBJECT;
	this->aclazz = clazz;
	this->str = nullptr;
	this->dim = 0;
}

AnalyzedType::AnalyzedType(const AnalyzedType& obj) {
	this->type = obj.type;
	this->aclazz = obj.aclazz;
	this->str = nullptr;
	this->dim = obj.dim;
}

AnalyzedType::AnalyzedType() {
	this->type = TYPE_NULL;
	this->aclazz = nullptr;
	this->str = nullptr;
	this->dim = 0;
}

AnalyzedType::~AnalyzedType() {
	this->aclazz = nullptr;
	delete this->str;
}

AnalyzedClass* AnalyzedType::getAnalyzedClass() const noexcept {
	return this->aclazz;
}

uint8_t AnalyzedType::getType() const noexcept {
	return this->type;
}

void AnalyzedType::setDim(int dim) noexcept {
	this->dim = dim;
}

int AnalyzedType::getDim() const noexcept {
	return this->dim;
}

const UnicodeString* AnalyzedType::stringName() noexcept {
	if(this->str == nullptr){
		makeStringName();
	}
	return this->str;
}

void AnalyzedType::makeStringName() noexcept{
	switch(this->type){
	case TYPE_BOOL:
		this->str = new UnicodeString(L"boolean");
		break;
	case TYPE_BYTE:
		this->str = new UnicodeString(L"byte");
		break;
	case TYPE_CHAR:
		this->str = new UnicodeString(L"char");
		break;
	case TYPE_SHORT:
		this->str = new UnicodeString(L"short");
		break;
	case TYPE_INT:
		this->str = new UnicodeString(L"int");
		break;
	case TYPE_LONG:
		this->str = new UnicodeString(L"long");
		break;
	case TYPE_STRING:
		this->str = new UnicodeString(L"String");
		break;
	case TYPE_VOID:
		this->str = new UnicodeString(L"void");
		break;
	case TYPE_OBJECT:
		makeObjectString();
		break;
	default:
		this->str = new UnicodeString(L"null");
		break;
	}

}

const UnicodeString* AnalyzedType::getSignatureName() noexcept {
	const UnicodeString* ret = nullptr;

	switch(this->type){
	case TYPE_BOOL:
		ret = &AnalyzedType::SIG_BOOL;
		break;
	case TYPE_BYTE:
		ret = &AnalyzedType::SIG_BYTE;
		break;
	case TYPE_CHAR:
		ret = &AnalyzedType::SIG_CHAR;
		break;
	case TYPE_SHORT:
		ret = &AnalyzedType::SIG_SHORT;
		break;
	case TYPE_INT:
		ret = &AnalyzedType::SIG_INT;
		break;
	case TYPE_LONG:
		ret = &AnalyzedType::SIG_LONG;
		break;
	case TYPE_STRING:
		ret = &AnalyzedType::SIG_STRING;
		break;
	case TYPE_OBJECT:
	default:
		ret = this->aclazz->getSignatureName();
		break;
	}

	return ret;
}

bool AnalyzedType::isArray() const noexcept {
	return this->dim > 0;
}

void AnalyzedType::makeObjectString() noexcept {
	if(this->aclazz == nullptr){
		this->str = new UnicodeString(L"null");
		return;
	}

	const UnicodeString* name = this->aclazz->toString();
	this->str = new UnicodeString(name);
}

bool AnalyzedType::equals(AnalyzedType* other) const noexcept {
	if(this->type != other->type){
		return false;
	}
	if(this->type == TYPE_OBJECT){
		// object type
		return this->aclazz->equals(other->aclazz);
	}

	return true;
}


} /* namespace alinous */
