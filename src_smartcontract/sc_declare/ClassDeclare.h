/*
 * ClassDeclare.h
 *
 *  Created on: 2019/01/15
 *      Author: iizuka
 */

#ifndef SC_DECLARE_CLASSDECLARE_H_
#define SC_DECLARE_CLASSDECLARE_H_

#include "sc/CodeElement.h"

namespace alinous {

class ClassDeclareBlock;
class UnicodeString;

class ClassDeclare : public CodeElement {
public:
	ClassDeclare();
	virtual ~ClassDeclare();

	void setBlock(ClassDeclareBlock* block) noexcept;
	void setName(UnicodeString* name) noexcept;

private:
	ClassDeclareBlock* block;
	UnicodeString* name;
};

} /* namespace alinous */

#endif /* SC_DECLARE_CLASSDECLARE_H_ */
