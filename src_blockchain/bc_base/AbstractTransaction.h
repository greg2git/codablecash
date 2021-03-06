/*
 * AbstractTransaction.h
 *
 *  Created on: 2019/01/03
 *      Author: iizuka
 */

#ifndef BC_BASE_ABSTRACTTRANSACTION_H_
#define BC_BASE_ABSTRACTTRANSACTION_H_

#include "filestore_block/IBlockObject.h"

namespace codablecash {
using namespace alinous;

class TransactionId;
class BalanceUnit;

class AbstractTransaction : public IBlockObject {
public:
	static const constexpr char TYPE_SEND_BALANCE = 1;
	static const constexpr char TYPE_TICKET = 2;

	AbstractTransaction(const AbstractTransaction& inst);
	explicit AbstractTransaction(int type);
	virtual ~AbstractTransaction();

	virtual int binarySize() const = 0;
	virtual void toBinary(ByteBuffer* out) const = 0;
	static AbstractTransaction* fromBinary(ByteBuffer* in);

	virtual AbstractTransaction* clone() const = 0;

	virtual void updateTransactionId() = 0;
	virtual const TransactionId* getTransactionId() const noexcept = 0;
	virtual const BalanceUnit* getFee() const noexcept = 0;

	char getType() const noexcept {
		return type;
	}

protected:
	char type;
};

} /* namespace codablecash */

#endif /* BC_BASE_ABSTRACTTRANSACTION_H_ */
