/*
 * LongRangeHitStatus.h
 *
 *  Created on: 2018/05/18
 *      Author: iizuka
 */

#ifndef FILESTORE_LONGRANGEHITSTATUS_H_
#define FILESTORE_LONGRANGEHITSTATUS_H_

namespace alinous {

class LongRange;

class LongRangeHitStatus {
public:
	LongRangeHitStatus(const LongRangeHitStatus& base) = delete;
	explicit LongRangeHitStatus(const LongRange* range) noexcept;
	virtual ~LongRangeHitStatus();

	bool lowJoinable() const noexcept;
	bool highJoinable() const noexcept;

	LongRange* getLow() const noexcept;
	LongRange* getHigh() const noexcept;

public:
	LongRange* included;
	LongRange* lower;
	LongRange* higher;

	int includedPos;
	int lowerPos;
	int higherPos;

	const LongRange* current;
};


} /* namespace alinous */

#endif /* FILESTORE_LONGRANGEHITSTATUS_H_ */
