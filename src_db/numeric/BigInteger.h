/*
 * BigInteger.h
 *
 *  Created on: 2019/01/20
 *      Author: iizuka
 */

#ifndef NUMERIC_BIGINTEGER_H_
#define NUMERIC_BIGINTEGER_H_

#include <cstdint>
#include <gmp.h>

namespace alinous {

class UnicodeString;
class ByteBuffer;

class BigInteger {
private:
	explicit BigInteger(const mpz_t mpvalue);
public:
    BigInteger() = delete;
	BigInteger(const BigInteger& inst);
	BigInteger &operator=(const BigInteger &inst);

	explicit BigInteger(const wchar_t* str, int radix);
	explicit BigInteger(int64_t value);
	explicit BigInteger(const UnicodeString* val);
	explicit BigInteger(const UnicodeString& val);
	BigInteger(const UnicodeString* val, int radix);
	BigInteger(const UnicodeString& val, int radix);
	virtual ~BigInteger();

	int bitLength() const;

	int64_t longValue() const;

	BigInteger multiply(const BigInteger& val) const;
	BigInteger& multiplySelf(const BigInteger& val);
	BigInteger subtract(const BigInteger& val) const;
	BigInteger& subtractSelf(const BigInteger& val);
	BigInteger add(const BigInteger& val) const;
	BigInteger divide(const BigInteger& divisor) const;

	BigInteger shiftRight(int n) const;
	BigInteger shiftLeft(int n) const;

	BigInteger pow(uint64_t exp) const;
	BigInteger modPow(const BigInteger& exponent, const BigInteger& m) const;
	BigInteger mod(const BigInteger& m) const;
	BigInteger& modSelf(const BigInteger& m);

	BigInteger abs() const;
	BigInteger negate() const;
	bool testBit(int n) const;

	static BigInteger valueOf(int64_t val);

	bool equals(const BigInteger* x) const;
	int compareTo(const BigInteger& x) const;

	UnicodeString toString(const char* format) const;
    UnicodeString toString(int radix) const;
    UnicodeString toString() const;

    ByteBuffer* toBinary() const;
	static BigInteger* fromBinary(const char* buff, int length);

	static BigInteger ramdom();

private:
	mpz_t value;
};

} /* namespace alinous */

#endif /* NUMERIC_BIGINTEGER_H_ */
