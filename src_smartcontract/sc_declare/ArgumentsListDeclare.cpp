/*
 * ArgumentsListDeclare.cpp
 *
 *  Created on: 2019/01/19
 *      Author: iizuka
 */

#include "sc_declare/ArgumentsListDeclare.h"
#include "sc_declare/ArgumentDeclare.h"

#include "base/UnicodeString.h"

#include "sc_analyze/AnalyzedType.h"

namespace alinous {

ArgumentsListDeclare::ArgumentsListDeclare() : CodeElement(CodeElement::ARGUMENTS_LIST_DECLARE) {
	this->callSig = nullptr;
	this->typelist = nullptr;
}

ArgumentsListDeclare::~ArgumentsListDeclare() {
	this->list.deleteElements();
	delete this->callSig;

	if(this->typelist != nullptr){
		this->typelist->deleteElements();
		delete this->typelist;
	}
}

void ArgumentsListDeclare::addArgument(ArgumentDeclare* arg) noexcept {
	this->list.addElement(arg);
}

void ArgumentsListDeclare::preAnalyze(AnalyzeContext* actx) {
	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		ArgumentDeclare* arg = this->list.get(i);
		arg->setParent(this);
	}
}

void ArgumentsListDeclare::analyzeTypeRef(AnalyzeContext* actx) {
	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		ArgumentDeclare* arg = this->list.get(i);
		arg->analyzeTypeRef(actx);
	}
}

void ArgumentsListDeclare::analyze(AnalyzeContext* actx) {

}

int ArgumentsListDeclare::getSize() const noexcept {
	return this->list.size();
}

const ArrayList<ArgumentDeclare>* ArgumentsListDeclare::getArguments() const noexcept {
	return &this->list;
}


const UnicodeString* ArgumentsListDeclare::getCallSignature() noexcept {
	if(this->callSig == nullptr){
		this->callSig = new UnicodeString(L"");

		int maxLoop = this->list.size();
		for(int i = 0; i != maxLoop; ++i){
			ArgumentDeclare* arg = this->list.get(i);

			AnalyzedType* atype = arg->getAnalyzedType();
			const UnicodeString* str = atype->getSignatureName();

			this->callSig->append(str);
		}
	}

	return this->callSig;
}

ArrayList<AnalyzedType>* ArgumentsListDeclare::getArgumentsAnalyzedType() noexcept {
	if(this->typelist == nullptr){
		this->typelist = new ArrayList<AnalyzedType>();

		int maxLoop = this->list.size();
		for(int i = 0; i != maxLoop; ++i){
			ArgumentDeclare* arg = this->list.get(i);
			AnalyzedType* atype = arg->getAnalyzedType();

			this->typelist->addElement(new AnalyzedType(*atype));
		}
	}

	return this->typelist;
}


int ArgumentsListDeclare::binarySize() const {
	int total = sizeof(uint16_t);
	total += sizeof(uint32_t);

	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		ArgumentDeclare* arg = this->list.get(i);
		total += arg->binarySize();
	}

	return total;
}

void ArgumentsListDeclare::toBinary(ByteBuffer* out) {
	out->putShort(CodeElement::ARGUMENTS_LIST_DECLARE);

	int maxLoop = this->list.size();
	out->putInt(maxLoop);

	for(int i = 0; i != maxLoop; ++i){
		ArgumentDeclare* arg = this->list.get(i);
		arg->toBinary(out);
	}
}


void ArgumentsListDeclare::fromBinary(ByteBuffer* in) {
	int maxLoop = in->getInt();
	for(int i = 0; i != maxLoop; ++i){
		CodeElement* element = createFromBinary(in);
		checkKind(element, CodeElement::ARGUMENT_DECLARE);

		ArgumentDeclare* arg = dynamic_cast<ArgumentDeclare*>(element);
		this->list.addElement(arg);
	}
}


} /* namespace alinous */
