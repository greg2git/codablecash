/*
 * test_function_call.cpp
 *
 *  Created on: 2019/12/09
 *      Author: iizuka
 */

#include "test_utils/t_macros.h"

#include "vm/VirtualMachine.h"
#include "sc/SmartContract.h"
#include "base_io_stream/FileInputStream.h"

#include "../VmTestUtils.h"

using namespace alinous;

TEST_GROUP(TestFunctionCallGroup) {
	TEST_SETUP(){}
	TEST_TEARDOWN(){}
};

TEST(TestFunctionCallGroup, callMainMethod){
	const File* projectFolder = this->env->getProjectRoot();
	VmTestUtils util(L"src_test/smartcontract_vm/method_invoke/resources/func01/", projectFolder);

	util.loadAllFiles();
	util.setMain(L"test.fw", L"SmartContract", L"main");

	bool result = util.analyze();
	CHECK(result)
}
