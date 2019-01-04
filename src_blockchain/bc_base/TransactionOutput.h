/*
 * TransactionOutput.h
 *
 *  Created on: 2019/01/03
 *      Author: iizuka
 */

#ifndef BC_BASE_TRANSACTIONOUTPUT_H_
#define BC_BASE_TRANSACTIONOUTPUT_H_

#include <inttypes.h>
#include "filestore_block/IBlockObject.h"

namespace codablecash {
using namespace alinous;

class BalanceUnit;
class AbstractAddress;

class TransactionOutput : public IBlockObject {
private:
	TransactionOutput();
public:
	TransactionOutput(const AbstractAddress* address, uint64_t amount);
	virtual ~TransactionOutput();

	BalanceUnit* getBalance() const noexcept;

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out) const;
	static TransactionOutput* fromBinary(ByteBuffer* in);
private:
	BalanceUnit* balance;
	AbstractAddress* address;
};

} /* namespace codablecash */

#endif /* BC_BASE_TRANSACTIONOUTPUT_H_ */