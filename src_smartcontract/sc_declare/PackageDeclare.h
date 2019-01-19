/*
 * PackageDeclare.h
 *
 *  Created on: 2019/01/16
 *      Author: iizuka
 */

#ifndef SC_DECLARE_PACKAGEDECLARE_H_
#define SC_DECLARE_PACKAGEDECLARE_H_

#include "sc/CodeElement.h"

namespace alinous {

class PackageNameDeclare;

class PackageDeclare : public CodeElement {
public:
	PackageDeclare();
	virtual ~PackageDeclare();

	void setName(PackageNameDeclare* name);

private:
	PackageNameDeclare* name;
};

} /* namespace alinous */

#endif /* SC_DECLARE_PACKAGEDECLARE_H_ */
