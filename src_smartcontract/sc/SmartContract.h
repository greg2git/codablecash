/*
 * SmartContract.h
 *
 *  Created on: 2018/12/31
 *      Author: iizuka
 */

#ifndef SC_SMARTCONTRACT_H_
#define SC_SMARTCONTRACT_H_

#include "base/ArrayList.h"

namespace alinous {

class File;
class CompilationUnit;
class InputStream;
class VirtualMachine;
class AnalyzeContext;
class UnicodeString;
class VmRootReference;
class VmClassInstance;
class ExtClassObject;
class CompileError;

class SmartContract {
public:
	SmartContract();
	virtual ~SmartContract();

	void addCompilationUnit(InputStream* stream, int length);
	void addCompilationUnit(File* file);
	void analyze(VirtualMachine* vm);
	bool hasError() noexcept;

	void setMainMethod(const UnicodeString* mainPackage, const UnicodeString* mainClass, const UnicodeString* mainMethod);

	VmRootReference* getRootReference() const noexcept;
	void clearRootReference(VirtualMachine* vm) noexcept;

	VmClassInstance* createInstance(VirtualMachine* vm);
	void initialize(VirtualMachine* vm);

	AnalyzeContext* getAnalyzeContext() const noexcept;

	const ArrayList<CompileError>* getCompileErrors() const noexcept;

private:
	UnicodeString* mainPackage;
	UnicodeString* mainClass;
	UnicodeString* mainMethod;
	ArrayList<CompilationUnit> progs;
	AnalyzeContext* actx;

	VmRootReference* rootReference;
	bool initialized;

	ArrayList<CompileError> compileErrorList;
};

} /* namespace alinous */

#endif /* SC_SMARTCONTRACT_H_ */
