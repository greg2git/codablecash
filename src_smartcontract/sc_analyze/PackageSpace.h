/*
 * PackageSpace.h
 *
 *  Created on: 2019/06/01
 *      Author: iizuka
 */

#ifndef SC_ANALYZE_PACKAGESPACE_H_
#define SC_ANALYZE_PACKAGESPACE_H_

#include "base/HashMap.h"

namespace alinous {

class UnicodeString;
class ClassDeclare;
class AnalyzedClass;
class AnalyzeContext;

class PackageSpace {
public:
	PackageSpace(const UnicodeString* name);
	virtual ~PackageSpace();

	void addClassDeclare(ClassDeclare* clazz) noexcept;
	AnalyzedClass* getClass(const UnicodeString* name) noexcept;

	void analyzeClassInheritance(AnalyzeContext* actx) noexcept;

private:
	void doAnalyzeClassInheritance(AnalyzedClass* cls) noexcept;
private:
	UnicodeString* name;
	HashMap<UnicodeString, AnalyzedClass>* classes;
};

} /* namespace alinous */

#endif /* SC_ANALYZE_PACKAGESPACE_H_ */
