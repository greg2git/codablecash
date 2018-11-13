/*
 * BlockFileBody.h
 *
 *  Created on: 2018/10/26
 *      Author: iizuka
 */

#ifndef FILESTORE_BLOCK_BLOCKFILEBODY_H_
#define FILESTORE_BLOCK_BLOCKFILEBODY_H_

#include <inttypes.h>

namespace alinous {

class RandomAccessFile;

class BlockFileBody {
public:
	BlockFileBody(const BlockFileBody& base) = delete;
	explicit BlockFileBody(RandomAccessFile* file) noexcept;
	virtual ~BlockFileBody() noexcept;

	void createStore(bool del) noexcept(false);

private:
	RandomAccessFile* file;
};

} /* namespace alinous */

#endif /* FILESTORE_BLOCK_BLOCKFILEBODY_H_ */