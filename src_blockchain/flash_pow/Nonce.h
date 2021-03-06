/*
 * Nonce.h
 *
 *  Created on: 2019/01/25
 *      Author: iizuka
 */

#ifndef FLASH_POW_NONCE_H_
#define FLASH_POW_NONCE_H_
#include <cstdint>

#include "filestore_block/IBlockObject.h"

namespace codablecash {
using namespace alinous;

class Nonce : public IBlockObject {
public:
	Nonce(const Nonce& inst) = default;
	Nonce(uint32_t targetDiff, uint32_t diff);
	virtual ~Nonce();

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out) const;
	static Nonce* fromBinary(ByteBuffer* in);

	uint32_t getDiff() const {
		return diff;
	}

	void setDiff(uint32_t diff) {
		this->diff = diff;
	}

	uint32_t getTargetDiff() const {
		return targetDiff;
	}

	void setTargetDiff(uint32_t targetDiff) {
		this->targetDiff = targetDiff;
	}

private:
	uint32_t targetDiff;
	uint32_t diff;
};

} /* namespace codablecash */

#endif /* FLASH_POW_NONCE_H_ */
