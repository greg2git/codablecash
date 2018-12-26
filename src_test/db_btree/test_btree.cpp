/*
 * test_btree.cpp
 *
 *  Created on: 2018/12/18
 *      Author: iizuka
 */

#include "test_utils/t_macros.h"

#include "btree/Btree.h"
#include "btree/BtreeConfig.h"
#include "btree/TreeNode.h"
#include "btree/DataNode.h"
#include "btree/exceptions.h"

#include "btreekey/BTreeKeyFactory.h"
#include "btreekey/ULongKey.h"
#include "TempValue.h"

#include "random_access_file/DiskCacheManager.h"

#include "base/StackRelease.h"
#include "base/RawBitSet.h"

#include "base_io/ByteBuffer.h"

#include <stdlib.h>


using namespace alinous;

TEST_GROUP(TestBTreeGroup) {
	TEST_SETUP() {}
	TEST_TEARDOWN() {}
};

TEST(TestBTreeGroup, casterror01){
	uint64_t fpos = 256;

	TreeNode* node = new TreeNode(false, 4, new ULongKey(1), true);
	node->setFpos(fpos);

	Exception* ex = nullptr;
	try{
		AbstractTreeNode::toDataNode(node);
	}
	catch(Exception* e){
		ex = e;
	}
	CHECK(ex != nullptr)
	delete ex;

	delete node;
}

TEST(TestBTreeGroup, casterror02){
	uint64_t fpos = 256;

	DataNode* node = new DataNode(1, new ULongKey(1));
	node->setFpos(fpos);

	Exception* ex = nullptr;
	try{
		AbstractTreeNode::toTreeNode(node);
	}
	catch(Exception* e){
		ex = e;
	}
	CHECK(ex != nullptr)
	delete ex;

	delete node;
}

TEST(TestBTreeGroup, constract){
	File projectFolder = this->env->testCaseDir();
	_ST(File, baseDir, projectFolder.get(L"store"))
	_ST(UnicodeString, baseDirStr, baseDir->getAbsolutePath())

	DiskCacheManager cacheManager;
	UnicodeString name(L"file01");
	BTreeKeyFactory factory;

	Btree btree(baseDir, &name, &cacheManager, &factory);

	BtreeConfig config;
	btree.create(&config);
}

TEST(TestBTreeGroup, open){
	File projectFolder = this->env->testCaseDir();
	_ST(File, baseDir, projectFolder.get(L"store"))
	_ST(UnicodeString, baseDirStr, baseDir->getAbsolutePath())

	DiskCacheManager cacheManager;
	UnicodeString name(L"file01");
	BTreeKeyFactory factory;

	Btree btree(baseDir, &name, &cacheManager, &factory);

	BtreeConfig config;
	btree.create(&config);

	BtreeOpenConfig opconf;
	btree.open(&opconf);

	{
		ULongKey key(10);
		TempValue value;

		btree.insert(&key, &value);
	}

	btree.close();

}