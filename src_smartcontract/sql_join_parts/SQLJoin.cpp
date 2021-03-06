/*
 * SQLJoin.cpp
 *
 *  Created on: 2019/02/20
 *      Author: iizuka
 */
#include "sql_join_parts/SQLJoin.h"
#include "sql_join_parts/SQLJoinPart.h"

namespace alinous {

SQLJoin::SQLJoin() : AbstractJoinPart(CodeElement::SQL_EXP_JOIN) {
	this->first = nullptr;
}

SQLJoin::~SQLJoin() {
	this->list.deleteElements();
	delete this->first;
}

void SQLJoin::setFirst(AbstractJoinPart* first) noexcept {
	this->first = first;
}

void SQLJoin::addJoinPart(SQLJoinPart* part) noexcept {
	this->list.addElement(part);
}

int SQLJoin::binarySize() const {
	checkNotNull(this->first);

	int total = sizeof(uint16_t);
	total += this->first->binarySize();

	total += sizeof(uint32_t);
	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		SQLJoinPart* part = this->list.get(i);
		total += part->binarySize();
	}

	return total;
}

void SQLJoin::toBinary(ByteBuffer* out) {
	checkNotNull(this->first);

	out->putShort(CodeElement::SQL_EXP_JOIN);
	this->first->toBinary(out);

	int maxLoop = this->list.size();
	out->putInt(maxLoop);

	for(int i = 0; i != maxLoop; ++i){
		SQLJoinPart* part = this->list.get(i);
		part->toBinary(out);
	}
}

void SQLJoin::fromBinary(ByteBuffer* in) {
	CodeElement* element = createFromBinary(in);
	checkIsJoinPart(element);
	this->first = dynamic_cast<AbstractJoinPart*>(element);

	int maxLoop = in->getInt();
	for(int i = 0; i != maxLoop; ++i){
		element = createFromBinary(in);
		checkKind(element, CodeElement::SQL_EXP_JOIN_PART);
		SQLJoinPart* part = dynamic_cast<SQLJoinPart*>(element);

		this->list.addElement(part);
	}
}

} /* namespace alinous */
