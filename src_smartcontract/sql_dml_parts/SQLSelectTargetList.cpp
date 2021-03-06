/*
 * SQLSelectTargetList.cpp
 *
 *  Created on: 2019/02/23
 *      Author: iizuka
 */

#include "sql_dml_parts/SQLSelectTargetList.h"
#include "sql_dml_parts/SQLSelectTarget.h"

namespace alinous {

SQLSelectTargetList::SQLSelectTargetList() : AbstractSQLPart(CodeElement::SQL_PART_SELECT_TARGET_LIST) {
}

SQLSelectTargetList::~SQLSelectTargetList() {
	this->list.deleteElements();
}

void SQLSelectTargetList::addTarget(SQLSelectTarget* target) noexcept {
	this->list.addElement(target);
}

int SQLSelectTargetList::binarySize() const {
	int total = sizeof(uint16_t);

	total += sizeof(uint32_t);
	int maxLoop = this->list.size();
	for(int i = 0; i != maxLoop; ++i){
		SQLSelectTarget* target = this->list.get(i);
		total += target->binarySize();
	}

	return total;
}

void SQLSelectTargetList::toBinary(ByteBuffer* out) {
	out->putShort(CodeElement::SQL_PART_SELECT_TARGET_LIST);

	int maxLoop = this->list.size();
	out->putInt(maxLoop);

	for(int i = 0; i != maxLoop; ++i){
		SQLSelectTarget* target = this->list.get(i);
		target->toBinary(out);
	}
}

void SQLSelectTargetList::fromBinary(ByteBuffer* in) {
	int maxLoop = in->getInt();
	for(int i = 0; i != maxLoop; ++i){
		CodeElement* element = createFromBinary(in);
		checkKind(element, CodeElement::SQL_PART_SELECT_TARGET);
		SQLSelectTarget* target = dynamic_cast<SQLSelectTarget*>(element);

		this->list.addElement(target);
	}
}

} /* namespace alinous */
