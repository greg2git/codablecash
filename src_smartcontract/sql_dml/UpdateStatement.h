/*
 * UpdateStatement.h
 *
 *  Created on: 2019/02/16
 *      Author: iizuka
 */

#ifndef SQL_DML_UPDATESTATEMENT_H_
#define SQL_DML_UPDATESTATEMENT_H_

#include "sql/AbstractSQLStatement.h"

namespace alinous {
class TableIdentifier;
class SQLSet;
class SQLWhere;

class UpdateStatement : public AbstractSQLStatement {
public:
	UpdateStatement();
	virtual ~UpdateStatement();

	void setTable(TableIdentifier* tableId) noexcept;
	void setSet(SQLSet* set) noexcept;
	void setWhere(SQLWhere* where) noexcept;

	virtual int binarySize() const;
	virtual void toBinary(ByteBuffer* out);
	virtual void fromBinary(ByteBuffer* in);
private:
	TableIdentifier* tableId;
	SQLSet* set;
	SQLWhere* where;
};

} /* namespace alinous */

#endif /* SQL_DML_UPDATESTATEMENT_H_ */
