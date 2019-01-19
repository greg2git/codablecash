/*
 * ClassDeclareBlock.h
 *
 *  Created on: 2019/01/15
 *      Author: iizuka
 */

#ifndef SC_DECLARE_CLASSDECLAREBLOCK_H_
#define SC_DECLARE_CLASSDECLAREBLOCK_H_

#include "sc/CodeElement.h"
#include "base/ArrayList.h"

namespace alinous {

class MethodDeclare;
class MemberVariableDeclare;

class ClassDeclareBlock : public CodeElement{
public:
	ClassDeclareBlock();
	virtual ~ClassDeclareBlock();

	void addMethod(MethodDeclare* method) noexcept;
	void addVariable(MemberVariableDeclare* variable) noexcept;
private:
	ArrayList<MethodDeclare> methods;
	ArrayList<MemberVariableDeclare> variables;
};

} /* namespace alinous */

#endif /* SC_DECLARE_CLASSDECLAREBLOCK_H_ */
