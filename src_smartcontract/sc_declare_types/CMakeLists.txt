

set(__src
	AbstractPrimitiveType.cpp
	AbstractType.cpp
	BoolType.cpp
	ByteType.cpp
	CharType.cpp
	IntType.cpp
	LongType.cpp
	ObjectType.cpp
	ShortType.cpp
	StringType.cpp
	VoidType.cpp
)

handle_sub(codablecashlib "${__src}" smartcontract sc_declare_types)

