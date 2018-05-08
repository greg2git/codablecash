/*
 * TestGroup.cpp
 *
 *  Created on: 2018/05/06
 *      Author: iizuka
 */

#include "debug/TestGroup.h"
#include "debug/TestExecutor.h"
#include "debug/TestCase.h"
#include "base/UnicodeString.h"
#include "base/HashMap.h"

namespace alinous {

TestGroup::TestGroup(const wchar_t* groupName, const char* file, int line) noexcept {
	this->groupName = new UnicodeString(groupName);
	this->tests = new HashMap<UnicodeString, TestCase>();

	TestExecutor::get()->addGroup(this->groupName, this);
}

TestGroup::~TestGroup() noexcept {
	delete this->groupName;
	delete this->tests;
}

void TestGroup::addTestCase(UnicodeString* name, TestCase* testCase) noexcept {
	this->tests->put(name, testCase);
}

void TestGroup::execute() {
}

} /* namespace alinous */
