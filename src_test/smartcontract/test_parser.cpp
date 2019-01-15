/*
 * test_parser.cpp
 *
 *  Created on: 2019/01/15
 *      Author: iizuka
 */

#include "test_utils/t_macros.h"

#include "sc/SmartContractParser.h"
#include "sc/CompilationUnit.h"

using namespace alinous;
using namespace codablecash;

TEST_GROUP(TestParserGroup) {
	TEST_SETUP(){
		this->env->setup();
	}
	TEST_TEARDOWN(){
		this->env->teardown();
	}
};


TEST(TestParserGroup, construct){
	const File* projectFolder = this->env->getProjectRoot();
	_ST(File, sourceFile, projectFolder->get(L"src_test/smartcontract/resources/hello.alns"))

	bool exists = sourceFile->exists();
	CHECK(exists);

	SmartContractParser parser(sourceFile);
}

TEST(TestParserGroup, parseTest){
	const File* projectFolder = this->env->getProjectRoot();
	_ST(File, sourceFile, projectFolder->get(L"src_test/smartcontract/resources/hello.alns"))

	SmartContractParser parser(sourceFile);
	CompilationUnit* unit = parser.parse();
	delete unit;
}

TEST(TestParserGroup, parseError01){
	const File* projectFolder = this->env->getProjectRoot();
	_ST(File, sourceFile, projectFolder->get(L"src_test/smartcontract/resources/helloerr1.alns"))

	SmartContractParser parser(sourceFile);
	CompilationUnit* unit = parser.parse();
	if(unit != nullptr){
		delete unit;
	}

	CHECK(parser.hasError())
}
