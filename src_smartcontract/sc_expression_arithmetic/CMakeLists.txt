

set(__src
	AddExpression.cpp
	MultiplicativeExpression.cpp
	NegateExpression.cpp
	PostIncrementExpression.cpp
	PreIncrementExpression.cpp
)

handle_sub(codablecashlib "${__src}" smartcontract sc_expression_arithmetic)

