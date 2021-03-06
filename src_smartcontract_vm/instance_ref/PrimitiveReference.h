/*
 * PrimitiveReference.h
 *
 *  Created on: 2019/05/25
 *      Author: iizuka
 */

#ifndef INSTANCE_REF_PRIMITIVEREFERENCE_H_
#define INSTANCE_REF_PRIMITIVEREFERENCE_H_

#include "instance_ref/AbstractReference.h"

namespace alinous {

class PrimitiveReference : public AbstractReference {
public:
	explicit PrimitiveReference(uint8_t type);
	virtual ~PrimitiveReference();

	static PrimitiveReference* createBoolReference(VirtualMachine* vm, int8_t value);
	static PrimitiveReference* createByteReference(VirtualMachine* vm, int8_t value);
	static PrimitiveReference* createCharReference(VirtualMachine* vm, int16_t value);
	static PrimitiveReference* createShortReference(VirtualMachine* vm, int16_t value);
	static PrimitiveReference* createIntReference(VirtualMachine* vm, int32_t value);
	static PrimitiveReference* createLongReference(VirtualMachine* vm, int64_t value);

	virtual bool isPrimitive() const noexcept;
	virtual void substitute(AbstractVmInstance* rightValue, VirtualMachine* vm);
	virtual AbstractExtObject* toClassExtObject(const UnicodeString* name, VTableRegistory* table);

	int32_t getIntValue() const noexcept;
	void setIntValue(int32_t value) noexcept;

	int8_t getByteValue() const noexcept;
	void setByteValue(int8_t value) noexcept;
	int16_t getShortValue() const noexcept;
	void setShortValue(int16_t value) noexcept;
	int16_t getCharValue() const noexcept;
	void setCharValue(int16_t value) noexcept;
	int64_t getLongValue() const noexcept;
	void setLongValue(int64_t value) noexcept;
private:
	void* data;
};

} /* namespace alinous */

#endif /* INSTANCE_REF_PRIMITIVEREFERENCE_H_ */
