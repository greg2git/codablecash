

set(__src
	ConditionalAndExpression.cpp
	ConditionalOrExpression.cpp
	EqualityExpression.cpp
	NotExpression.cpp
	RelationalExpression.cpp
)

handle_sub(codablecashlib "${__src}" smartcontract sc_expression_logical)

