/*
 * ArrayReference.h
 *
 *  Created on: 2020/02/15
 *      Author: iizuka
 */

#ifndef INSTANCE_REF_ARRAYREFERENCE_H_
#define INSTANCE_REF_ARRAYREFERENCE_H_

#include "instance_ref/AbstractReference.h"



namespace alinous {

class VirtualMachine;
class VmArrayInstance;
template <typename T, typename C> class ArrayList;

class ArrayReference : public AbstractReference {
public:
	ArrayReference(VirtualMachine* vm);
	virtual ~ArrayReference();

	void initArray(int dim);

private:
	VmArrayInstance* instArray;
};

} /* namespace alinous */

#endif /* INSTANCE_REF_ARRAYREFERENCE_H_ */
