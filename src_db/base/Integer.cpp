/*
 * Integer.cpp
 *
 *  Created on: 2018/04/15
 *      Author: iizuka
 */

//#include "debug/debugMacros.h"

#include "base/Integer.h"

#include "base/exceptions.h"
#include "base/UnicodeString.h"
#include "base/Character.h"

namespace alinous {

constexpr const int Integer::MAX_VALUE;
constexpr const int Integer::MIN_VALUE;
constexpr const int Integer::SIZE;
constexpr const int Integer::MIN_RADIX;
constexpr const int Integer::MAX_RADIX;

Integer::Integer(int value) : value(value) {
}

Integer::~Integer() {
}

int Integer::numberOfLeadingZeros(int i) {
    i |= i >> 1;
    i |= i >> 2;
    i |= i >> 4;
    i |= i >> 8;
    i |= i >> 16;
    return bitCount(~i);
}

int Integer::bitCount(int i) {
    i -= ((i >> 1) & 0x55555555);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    i = (((i >> 4) + i) & 0x0F0F0F0F);
    i += (i >> 8);
    i += (i >> 16);
    return (i & 0x0000003F);
}

int Integer::parseInt(UnicodeString* string)
{
	return parseInt(string, 10);
}
int Integer::parseInt(UnicodeString* string, int radix)
{
	if(string == nullptr || radix < Integer::MIN_RADIX || radix > Integer::MAX_RADIX)
	{
		throw new NumberFormatException(__FILE__, __LINE__);
	}
	int length = string->length();int i = 0;
	if(length == 0)
	{
		throw new NumberFormatException(string->towString(), __FILE__, __LINE__);
	}
	bool negative = string->charAt(i) == L'-';
	if(negative && ++i == length)
	{
		throw new NumberFormatException(string->towString(), __FILE__, __LINE__);
	}
	return parse(string, i, radix, negative);
}

int Integer::parse(UnicodeString* string, int offset, int radix, bool negative)
{
	int max = Integer::MIN_VALUE / radix;
	int result = 0;int length = string->length();
	while(offset < length)
	{
		int digit = Character::digit(string->charAt(offset++), radix);
		if(digit == -1)
		{
			throw new NumberFormatException(string->towString(), __FILE__, __LINE__);
		}
		if(max > result)
		{
			throw new NumberFormatException(string->towString(), __FILE__, __LINE__);
		}
		result = result * radix - digit;
	}
	if(!negative)
	{
		result = -1 * result;
		if(result < 0)
		{
			throw new NumberFormatException(string->towString(), __FILE__, __LINE__);
		}
	}
	return result;
}

int Integer::hashCode() const noexcept
{
	return value;
}

int Integer::compareTo(const Integer* object) const noexcept {
	return value > object->value ? 1 : (value < object->value ? -1 : 0);
}

int Integer::ValueCompare::operator() (const Integer* const _this, const  Integer* const object) const throw()
{
	return _this->compareTo(object);
}

} /* namespace alinous */

