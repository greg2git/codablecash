/*
 * AbstractFlashBlock.h
 *
 *  Created on: 2019/01/23
 *      Author: iizuka
 */

#ifndef FLASH_ABSTRACTFLASHBLOCK_H_
#define FLASH_ABSTRACTFLASHBLOCK_H_
#include <cstdint>

#include "base/ArrayList.h"

namespace codablecash {
using namespace alinous;

class AbstractTransaction;

class MinerSignature;
class AbstractFlashBlockHeader;

class AbstractFlashBlock {
public:
	static const constexpr uint8_t BLK_TICKET{0x01};
	static const constexpr uint8_t BLK_POW{0x02};

	AbstractFlashBlock(uint8_t type);
	virtual ~AbstractFlashBlock();


protected:
	uint8_t type;
	AbstractFlashBlockHeader* header;
	ArrayList<AbstractTransaction> list;
};

} /* namespace codablecash */

#endif /* FLASH_ABSTRACTFLASHBLOCK_H_ */
