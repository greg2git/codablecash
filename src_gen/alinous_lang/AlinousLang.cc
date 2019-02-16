/* AlinousLang.cc */
#include "AlinousLang.h"
#include "TokenMgrError.h"
namespace alinouslang {
  unsigned int jj_la1_0[] = {
0x0,0x0,0x0,0x0,0x0,0x200000,0x200000,0x0,0x0,0x0,0x0,0x0,0xd340200,0x400000,0xd340200,0x0,0xd140200,0x80000000,0x40000000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xa000000,0x30800000,0x30800000,0x8000000,0x5000000,0x5000000,0x5000000,0x0,0x0,0x0,0x0,0x0,0xd140200,0x140200,0x140200,0x0,0x140000,0x0,0x0,};
  unsigned int jj_la1_1[] = {
0x1000000,0x2000000,0x80,0x0,0x0,0x4,0x800,0x0,0x100,0xe0000000,0xe0000000,0x800,0xf0080004,0x0,0xf0080804,0x10000000,0x80004,0x0,0x0,0x2,0x0,0x1,0x6000,0x6000,0x78000,0x78000,0x200000,0x200000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80000,0x80,0x10,0x100,0x80004,0x4,0x0,0x0,0x0,0x0,0x80,};
  unsigned int jj_la1_2[] = {
0x0,0x0,0x0,0x70000,0x100000,0x0,0x0,0x70000,0x0,0x10000003,0x10000003,0x0,0xb0089463,0x0,0xb0089463,0x20081460,0x80008000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80008000,0x80008000,0x80000000,0x80000000,0x0,0x0,0x0,};
  unsigned int jj_la1_3[] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x1,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x1,0x0,0x0,0x0,};
  unsigned int jj_la1_4[] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x60000,0x0,0x60000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x60000,0x0,};
  unsigned int jj_la1_5[] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8040000,0x0,0x8040000,0x0,0x8040000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8040000,0x8040000,0x40000,0x0,0x0,0x0,0x0,};
  unsigned int jj_la1_6[] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x10,0x0,0x10,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x8,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x0,};

  /** Constructor with user supplied TokenManager. */




CompilationUnit
               * AlinousLang::compilationUnit() {CompilationUnit* unit = new CompilationUnit();
        PackageDeclare* pkg = nullptr;
        ClassDeclare* clazz = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case PACKAGE:{
      if (!hasError) {
      pkg = packageDeclare();
      }
      if (!hasError) {
unit->setPackage(pkg);
      }
      break;
      }
    default:
      jj_la1[0] = jj_gen;
      ;
    }
    }
    if (!hasError) {
    while (!hasError) {
      if (!hasError) {
      clazz = classDeclare();
      }
      if (!hasError) {
unit->setPosition(clazz);
                        unit->addClassDeclare(clazz);
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case CLASS:{
        ;
        break;
        }
      default:
        jj_la1[1] = jj_gen;
        goto end_label_1;
      }
    }
    end_label_1: ;
    }
    if (!hasError) {
    jj_consume_token(0);
    }
return unit;
assert(false);
}


PackageDeclare              * AlinousLang::packageDeclare() {PackageDeclare* pkg = nullptr;
        PackageNameDeclare* name = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(PACKAGE);
    }
    if (!hasError) {
pkg=new PackageDeclare();
                pkg->setPosition(t);
    }
    if (!hasError) {
    name = packageNameDeclare();
    }
    if (!hasError) {
pkg->setName(name);
                pkg->setPosition(name);
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
pkg->setPosition(t);
    }
__ONERROR(pkg);
                return pkg;
assert(false);
}


PackageNameDeclare                  * AlinousLang::packageNameDeclare() {PackageNameDeclare* names = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
names = new PackageNameDeclare();
                names->addSegment(_STR(t));
                names->setPosition(t);
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case DOT:{
        ;
        break;
        }
      default:
        jj_la1[2] = jj_gen;
        goto end_label_2;
      }
      if (!hasError) {
      jj_consume_token(DOT);
      }
      if (!hasError) {
      t = jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
names->addSegment(_STR(t));
                        names->setPosition(t);
      }
    }
    end_label_2: ;
    }
    if (!hasError) {

    }
__ONERROR(names);
                return names;
assert(false);
}


ClassDeclare            * AlinousLang::classDeclare() {ClassDeclare* clazz = nullptr;
        Token* cls = nullptr;
        Token* name = nullptr;
        ClassDeclareBlock* block = nullptr;
    if (!hasError) {
    cls = jj_consume_token(CLASS);
    }
    if (!hasError) {
    name = jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
clazz = new ClassDeclare();
                 clazz->setName(_STR(name));
    }
    if (!hasError) {
    block = classDeclareBlock();
    }
    if (!hasError) {
clazz->setPositions(cls, block);
            clazz->setBlock(block);
    }
__ONERROR(clazz);
                return clazz;
assert(false);
}


ClassDeclareBlock                 * AlinousLang::classDeclareBlock() {ClassDeclareBlock* block = nullptr;
        Token* begin, *end;

        MethodDeclare* method = nullptr;
        MemberVariableDeclare* member = nullptr;

        AccessControlDeclare* ctrl = nullptr;
        bool _static=false;
        AbstractType* type = nullptr;
        Token* t=nullptr;
    if (!hasError) {
    begin = jj_consume_token(L_BRACE);
    }
    if (!hasError) {
block = new ClassDeclareBlock();
                block->setPosition(begin);
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case PRIVATE:
      case PROTECTED:
      case PUBLIC:{
        ;
        break;
        }
      default:
        jj_la1[3] = jj_gen;
        goto end_label_3;
      }
      if (!hasError) {
      ctrl = accessControlDeclare();
      }
      if (!hasError) {

      }
      if (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case STATIC:{
        if (!hasError) {
        t = jj_consume_token(STATIC);
        }
        if (!hasError) {
_static=true;
        }
        break;
        }
      default:
        jj_la1[4] = jj_gen;
        ;
      }
      }
      if (!hasError) {
      type = typeDeclare();
      }
      if (!hasError) {

      }
      if (!hasError) {
      t = jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {

      }
      if (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case L_PARENTHESIS:{
        if (!hasError) {
        method = methodDeclare(ctrl, _static, type, t);
        }
        if (!hasError) {
block->addMethod(method);
        }
        break;
        }
      case SEMI_COLON:{
        if (!hasError) {
        member = memberVariableDeclare(ctrl, _static, type, t);
        }
        if (!hasError) {
block->addVariable(member);
        }
        break;
        }
      default:
        jj_la1[5] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
_static = false;
      }
    }
    end_label_3: ;
    }
    if (!hasError) {
    end = jj_consume_token(R_BRACE);
    }
    if (!hasError) {
block->setPosition(end);
    }
__ONERROR(block);
                return block;
assert(false);
}


MethodDeclare             * AlinousLang::methodDeclare(AccessControlDeclare* ctrl, bool _static, AbstractType* type, Token* identifier) {MethodDeclare* method = new MethodDeclare();

    method->setPosition(ctrl);

        method->setAccessControl(ctrl);
        method->setStatic(_static);
        method->setType(type);
        method->setName(_STR(identifier));

        Token* t = nullptr;
        ArgumentsListDeclare* args = nullptr;
        StatementBlock* block = nullptr;
    if (!hasError) {
    args = argumentsListDeclare();
    }
    if (!hasError) {
method->setArguments(args);
                method->setPosition(args);
    }
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case L_BRACE:{
      if (!hasError) {
      block = statementBlock();
      }
      if (!hasError) {
method->setBlock(block);
                        method->setPosition(block);
      }
      break;
      }
    case SEMI_COLON:{
      if (!hasError) {
      t = jj_consume_token(SEMI_COLON);
      }
      if (!hasError) {
method->setPosition(t);
      }
      break;
      }
    default:
      jj_la1[6] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
    if (!hasError) {

    }
__ONERROR(method);
                return method;
assert(false);
}


MemberVariableDeclare                     * AlinousLang::memberVariableDeclare(AccessControlDeclare* ctrl, bool _static, AbstractType* type, Token* identifier) {MemberVariableDeclare* variable = new MemberVariableDeclare();
        Token* t = nullptr;

        variable->setPosition(ctrl);

        variable->setAccessControl(ctrl);
        variable->setStatic(_static);
        variable->setType(type);
        variable->setName(_STR(identifier));
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
variable->setPosition(t);
    }
__ONERROR(variable);
                return variable;
assert(false);
}


AccessControlDeclare                    * AlinousLang::accessControlDeclare() {Token* t = nullptr;
        AccessControlDeclare* ctrl = new AccessControlDeclare();
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case PUBLIC:{
      if (!hasError) {
      t = jj_consume_token(PUBLIC);
      }
      if (!hasError) {
ctrl->setCtrl(AccessControlDeclare::PUBLIC);
                        ctrl->setPositions(_P(t, t));
      }
      break;
      }
    case PROTECTED:{
      if (!hasError) {
      t = jj_consume_token(PROTECTED);
      }
      if (!hasError) {
ctrl->setCtrl(AccessControlDeclare::PROTECTED);
                        ctrl->setPositions(_P(t, t));
      }
      break;
      }
    case PRIVATE:{
      if (!hasError) {
      t = jj_consume_token(PRIVATE);
      }
      if (!hasError) {
ctrl->setCtrl(AccessControlDeclare::PRIVATE);
                        ctrl->setPositions(_P(t, t));
      }
      break;
      }
    default:
      jj_la1[7] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
__ONERROR(ctrl);
                return ctrl;
assert(false);
}


ArgumentsListDeclare                    * AlinousLang::argumentsListDeclare() {ArgumentsListDeclare* arguments = new ArgumentsListDeclare();
        Token* t = nullptr;
        ArgumentDeclare* arg = nullptr;
    if (!hasError) {
    t = jj_consume_token(L_PARENTHESIS);
    }
    if (!hasError) {
arguments->setPosition(t);
    }
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case CHAR:
    case SHORT:
    case INT:
    case LONG:
    case STRING:
    case VOID:{
      if (!hasError) {
      arg = argumentDeclare();
      }
      if (!hasError) {
arguments->addArgument(arg);
                    arguments->setPosition(arg);
      }
      if (!hasError) {
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case COMMA:{
          ;
          break;
          }
        default:
          jj_la1[8] = jj_gen;
          goto end_label_4;
        }
        if (!hasError) {
        jj_consume_token(COMMA);
        }
        if (!hasError) {
        arg = argumentDeclare();
        }
        if (!hasError) {
arguments->addArgument(arg);
                        arguments->setPosition(arg);
        }
      }
      end_label_4: ;
      }
      break;
      }
    default:
      jj_la1[9] = jj_gen;
      ;
    }
    }
    if (!hasError) {
    t = jj_consume_token(R_PARENTHESIS);
    }
    if (!hasError) {
arguments->setPosition(t);
    }
__ONERROR(arguments);
                return arguments;
assert(false);
}


ArgumentDeclare               * AlinousLang::argumentDeclare() {ArgumentDeclare* arg = new ArgumentDeclare();
        AbstractType* type = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    type = typeDeclare();
    }
    if (!hasError) {
arg->setType(type);
                arg->setPosition(type);
    }
    if (!hasError) {
    t = jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
arg->setName(_STR(t));
                arg->setPosition(t);
    }
__ONERROR(arg);
                return arg;
assert(false);
}


AbstractType            * AlinousLang::typeDeclare() {AbstractType* dec = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case CHAR:{
      if (!hasError) {
      dec = charType();
      }
      break;
      }
    case SHORT:{
      if (!hasError) {
      dec = shortType();
      }
      break;
      }
    case INT:{
      if (!hasError) {
      dec = intType();
      }
      break;
      }
    case LONG:{
      if (!hasError) {
      dec = longType();
      }
      break;
      }
    case STRING:{
      if (!hasError) {
      dec = stringType();
      }
      break;
      }
    case VOID:{
      if (!hasError) {
      dec = voidType();
      }
      break;
      }
    default:
      jj_la1[10] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
    if (!hasError) {

    }
__ONERROR(dec);
                return dec;
assert(false);
}


CharType        * AlinousLang::charType() {CharType* dec = new CharType();
        Token* t=nullptr;
    if (!hasError) {
    t = jj_consume_token(CHAR);
    }
    if (!hasError) {
dec->setPositions(_P(t, t));
    }
__ONERROR(dec);
                return dec;
assert(false);
}


ShortType         * AlinousLang::shortType() {ShortType* dec = new ShortType();
        Token* t=nullptr;
    if (!hasError) {
    t = jj_consume_token(SHORT);
    }
    if (!hasError) {
dec->setPositions(_P(t, t));
    }
__ONERROR(dec);
                return dec;
assert(false);
}


IntType       * AlinousLang::intType() {IntType* dec = new IntType();
        Token* t=nullptr;
    if (!hasError) {
    t = jj_consume_token(INT);
    }
    if (!hasError) {
dec->setPositions(_P(t, t));
    }
__ONERROR(dec);
                return dec;
assert(false);
}


LongType        * AlinousLang::longType() {LongType* dec = new LongType();
        Token* t=nullptr;
    if (!hasError) {
    t = jj_consume_token(LONG);
    }
    if (!hasError) {
dec->setPositions(_P(t, t));
    }
__ONERROR(dec);
                return dec;
assert(false);
}


StringType          * AlinousLang::stringType() {StringType* dec = new StringType();
        Token* t=nullptr;
    if (!hasError) {
    t = jj_consume_token(STRING);
    }
    if (!hasError) {
dec->setPositions(_P(t, t));
    }
__ONERROR(dec);
                return dec;
assert(false);
}


VoidType        * AlinousLang::voidType() {VoidType* dec = new VoidType();
        Token* t=nullptr;
    if (!hasError) {
    t = jj_consume_token(VOID);
    }
    if (!hasError) {
dec->setPositions(_P(t, t));
    }
__ONERROR(dec);
                return dec;
assert(false);
}


AbstractStatement
                 * AlinousLang::statement() {AbstractStatement* stmt = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case L_BRACE:{
      if (!hasError) {
      stmt = statementBlock();
      }
      break;
      }
    default:
      jj_la1[11] = jj_gen;
      if (jj_2_1(2)) {
        if (!hasError) {
        stmt = substitutionStatement();
        }
      } else {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case CHAR:
        case SHORT:
        case INT:
        case LONG:
        case STRING:
        case VOID:{
          if (!hasError) {
          stmt = variableDeclareStatement();
          }
          break;
          }
        case INTEGER_LITERAL:
        case STRING_LITERAL:
        case SQL_STRING_LITERAL:
        case PLUSPLUS:
        case MINUSMINUS:
        case MINUS:
        case L_PARENTHESIS:
        case NOT:
        case NEW:
        case TRUE:
        case FALSE:
        case _NULL:
        case IDENTIFIER:
        case 196:{
          if (!hasError) {
          stmt = expressionStatement();
          }
          break;
          }
        case BREAK:
        case CONTINUE:
        case DO:
        case FOR:
        case IF:
        case RETURN:
        case WHILE:{
          if (!hasError) {
          stmt = ctrlStatement();
          }
          break;
          }
        case SEMI_COLON:{
          if (!hasError) {
          stmt = blankStatement();
          }
          break;
          }
        case CREATE:
        case DROP:{
          if (!hasError) {
          stmt = ddlStatement();
          }
          break;
          }
        default:
          jj_la1[12] = jj_gen;
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
        }
      }
    }
    }
    if (!hasError) {

    }
return stmt;
assert(false);
}


VariableDeclareStatement                        * AlinousLang::variableDeclareStatement() {VariableDeclareStatement* stmt = new VariableDeclareStatement();
        AbstractType* type = nullptr;
        VariableIdentifier* valId = nullptr;
        AbstractExpression* exp = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    type = typeDeclare();
    }
    if (!hasError) {
stmt->setType(type);
                stmt->setPosition(type);
    }
    if (!hasError) {
    valId = variableIdentifier();
    }
    if (!hasError) {
stmt->setVariableId(valId);
                stmt->setPosition(valId);
    }
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case EQUALS:{
      if (!hasError) {
      t = jj_consume_token(EQUALS);
      }
      if (!hasError) {
stmt->setPosition(t);
      }
      if (!hasError) {
      exp = expression();
      }
      if (!hasError) {
stmt->setInitExpression(exp);
                        stmt->setPosition(exp);
      }
      break;
      }
    default:
      jj_la1[13] = jj_gen;
      ;
    }
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


SubstitutionStatement                     * AlinousLang::substitutionStatement() {SubstitutionStatement* stmt = new SubstitutionStatement();
        VariableIdentifier* valId = nullptr;
        AbstractExpression* exp = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    valId = variableIdentifier();
    }
    if (!hasError) {
stmt->setVariableId(valId);
                stmt->setPosition(valId);
    }
    if (!hasError) {
    t = jj_consume_token(EQUALS);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    exp = expression();
    }
    if (!hasError) {
stmt->setExpression(exp);
                stmt->setPosition(exp);
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


BlankStatement              * AlinousLang::blankStatement() {BlankStatement* stmt = new BlankStatement();
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
                stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


StatementBlock              * AlinousLang::statementBlock() {StatementBlock* block = new StatementBlock();
        AbstractStatement* stmt = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(L_BRACE);
    }
    if (!hasError) {
block->setPosition(t);
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case INTEGER_LITERAL:
      case STRING_LITERAL:
      case SQL_STRING_LITERAL:
      case SEMI_COLON:
      case PLUSPLUS:
      case MINUSMINUS:
      case MINUS:
      case L_PARENTHESIS:
      case L_BRACE:
      case NOT:
      case BREAK:
      case CHAR:
      case SHORT:
      case INT:
      case LONG:
      case STRING:
      case CONTINUE:
      case DO:
      case FOR:
      case IF:
      case NEW:
      case RETURN:
      case VOID:
      case WHILE:
      case TRUE:
      case FALSE:
      case CREATE:
      case DROP:
      case _NULL:
      case IDENTIFIER:
      case 196:{
        ;
        break;
        }
      default:
        jj_la1[14] = jj_gen;
        goto end_label_5;
      }
      if (!hasError) {
      stmt = statement();
      }
      if (!hasError) {
block->addStatement(stmt);
                        block->setPosition(stmt);
      }
    }
    end_label_5: ;
    }
    if (!hasError) {
    t = jj_consume_token(R_BRACE);
    }
    if (!hasError) {
block->setPosition(t);
    }
__ONERROR(block);
                return block;
assert(false);
}


ExpressionStatement                   * AlinousLang::expressionStatement() {ExpressionStatement* stmt = new ExpressionStatement();
        Token* t = nullptr;
        AbstractExpression* exp = nullptr;
    if (!hasError) {
    exp = expression();
    }
    if (!hasError) {
stmt->setExpression(exp);
                stmt->setPosition(exp);
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


AbstractStatement
                 * AlinousLang::ctrlStatement() {AbstractStatement* stmt = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case IF:{
      if (!hasError) {
      stmt = ifStatement();
      }
      break;
      }
    case BREAK:{
      if (!hasError) {
      stmt = breakStatement();
      }
      break;
      }
    case CONTINUE:{
      if (!hasError) {
      stmt = continueStatement();
      }
      break;
      }
    case RETURN:{
      if (!hasError) {
      stmt = returnStatement();
      }
      break;
      }
    case WHILE:{
      if (!hasError) {
      stmt = whileStatement();
      }
      break;
      }
    case DO:{
      if (!hasError) {
      stmt = doWhileStatement();
      }
      break;
      }
    case FOR:{
      if (!hasError) {
      stmt = forStatement();
      }
      break;
      }
    default:
      jj_la1[15] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
    if (!hasError) {

    }
return stmt;
assert(false);
}


ForStatement            * AlinousLang::forStatement() {ForStatement* stmt = new ForStatement();
        AbstractExpression* exp = nullptr;
        AbstractStatement* st = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(FOR);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    t = jj_consume_token(L_PARENTHESIS);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    st = statement();
    }
    if (!hasError) {
stmt->setInit(st);
                stmt->setPosition(st);
    }
    if (!hasError) {
    exp = expression();
    }
    if (!hasError) {
stmt->setCondition(exp);
                stmt->setPosition(exp);
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    exp = expression();
    }
    if (!hasError) {
stmt->setPostLoop(exp);
                stmt->setPosition(exp);
    }
    if (!hasError) {
    t = jj_consume_token(R_PARENTHESIS);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    st = statement();
    }
    if (!hasError) {
stmt->setStatement(st);
                stmt->setPosition(st);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


DoWhileStatement                * AlinousLang::doWhileStatement() {DoWhileStatement* stmt = new DoWhileStatement();
        AbstractExpression* exp = nullptr;
        AbstractStatement* st = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(DO);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    st = statement();
    }
    if (!hasError) {
stmt->setStatement(st);
                stmt->setPosition(st);
    }
    if (!hasError) {
    t = jj_consume_token(WHILE);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    t = jj_consume_token(L_PARENTHESIS);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    exp = expression();
    }
    if (!hasError) {
stmt->setExpression(exp);
                stmt->setPosition(exp);
    }
    if (!hasError) {
    t = jj_consume_token(R_PARENTHESIS);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


WhileStatement              * AlinousLang::whileStatement() {WhileStatement* stmt = new WhileStatement();
        AbstractExpression* exp = nullptr;
        AbstractStatement* st = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(WHILE);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    t = jj_consume_token(L_PARENTHESIS);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    exp = expression();
    }
    if (!hasError) {
stmt->setExpression(exp);
                stmt->setPosition(exp);
    }
    if (!hasError) {
    t = jj_consume_token(R_PARENTHESIS);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    st = statement();
    }
    if (!hasError) {
stmt->setStatement(st);
                stmt->setPosition(st);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


ReturnStatement               * AlinousLang::returnStatement() {ReturnStatement* stmt = new ReturnStatement();
        AbstractExpression* exp = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(RETURN);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case INTEGER_LITERAL:
    case STRING_LITERAL:
    case SQL_STRING_LITERAL:
    case PLUSPLUS:
    case MINUSMINUS:
    case MINUS:
    case L_PARENTHESIS:
    case NOT:
    case NEW:
    case TRUE:
    case FALSE:
    case _NULL:
    case IDENTIFIER:
    case 196:{
      if (!hasError) {
      exp = expression();
      }
      if (!hasError) {
stmt->setExpression(exp);
                        stmt->setPosition(exp);
      }
      break;
      }
    default:
      jj_la1[16] = jj_gen;
      ;
    }
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


ContinueStatement                 * AlinousLang::continueStatement() {ContinueStatement* stmt = new ContinueStatement();
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(CONTINUE);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


BreakStatement              * AlinousLang::breakStatement() {BreakStatement* stmt = new BreakStatement();
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(BREAK);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


IfStatement           * AlinousLang::ifStatement() {IfStatement* ifstmt = new IfStatement();
        AbstractExpression* exp;
        AbstractStatement* stmt;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(IF);
    }
    if (!hasError) {
ifstmt->setPosition(t);
    }
    if (!hasError) {
    jj_consume_token(L_PARENTHESIS);
    }
    if (!hasError) {
    exp = expression();
    }
    if (!hasError) {
ifstmt->setExpression(exp);
                ifstmt->setPosition(exp);
    }
    if (!hasError) {
    jj_consume_token(R_PARENTHESIS);
    }
    if (!hasError) {
    stmt = statement();
    }
    if (!hasError) {
ifstmt->setStatement(stmt);
                ifstmt->setPosition(stmt);
    }
__ONERROR(ifstmt);
                return ifstmt;
assert(false);
}


AbstractExpression
                  * AlinousLang::expression() {AbstractExpression* exp = nullptr;
    if (!hasError) {
    if (!hasError) {
    exp = conditionalOrExpression();
    }
    }
    if (!hasError) {

    }
return exp;
assert(false);
}


AbstractExpression                  * AlinousLang::conditionalOrExpression() {Token* t = nullptr;
        ConditionalOrExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = conditionalAndExpression();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case LOGICAL_OR:{
        ;
        break;
        }
      default:
        jj_la1[17] = jj_gen;
        goto end_label_6;
      }
      if (!hasError) {
      t = jj_consume_token(LOGICAL_OR);
      }
      if (!hasError) {
if(exp == nullptr){
                                exp = new ConditionalOrExpression();
                                exp->setPosition(left);
                                exp->addExp(left);
                                left = exp;
                        }

                        exp->setPosition(t);
      }
      if (!hasError) {
      right = conditionalAndExpression();
      }
      if (!hasError) {
exp->addExp(right);
                        exp->setPosition(right);
      }
    }
    end_label_6: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::conditionalAndExpression() {Token* t = nullptr;
        ConditionalAndExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = orExpression();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case LOGICAL_AND:{
        ;
        break;
        }
      default:
        jj_la1[18] = jj_gen;
        goto end_label_7;
      }
      if (!hasError) {
      t = jj_consume_token(LOGICAL_AND);
      }
      if (!hasError) {
if(exp == nullptr){
                                exp = new ConditionalAndExpression();
                                exp->setPosition(left);
                                exp->addExp(left);
                                left = exp;
                        }

                        exp->setPosition(t);
      }
      if (!hasError) {
      right = orExpression();
      }
      if (!hasError) {
exp->addExp(right);
                        exp->setPosition(right);
      }
    }
    end_label_7: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::orExpression() {Token* t = nullptr;
        OrExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = exclusiveOrExpression();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case BIT_OR:{
        ;
        break;
        }
      default:
        jj_la1[19] = jj_gen;
        goto end_label_8;
      }
      if (!hasError) {
      t = jj_consume_token(BIT_OR);
      }
      if (!hasError) {
if(exp == nullptr){
                                exp = new OrExpression();
                                exp->setPosition(left);
                                exp->addExp(left);
                                left = exp;
                        }

                        exp->setPosition(t);
      }
      if (!hasError) {
      right = exclusiveOrExpression();
      }
      if (!hasError) {
exp->addExp(right);
                        exp->setPosition(right);
      }
    }
    end_label_8: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::exclusiveOrExpression() {Token* t = nullptr;
        ExclusiveOrExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = andExpression();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 194:{
        ;
        break;
        }
      default:
        jj_la1[20] = jj_gen;
        goto end_label_9;
      }
      if (!hasError) {
      t = jj_consume_token(194);
      }
      if (!hasError) {
if(exp == nullptr){
                                exp = new ExclusiveOrExpression();
                                exp->setPosition(left);
                                exp->addExp(left);
                                left = exp;
                        }

                        exp->setPosition(t);
      }
      if (!hasError) {
      right = andExpression();
      }
      if (!hasError) {
exp->addExp(right);
                        exp->setPosition(right);
      }
    }
    end_label_9: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::andExpression() {Token* t = nullptr;
        AndExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = equalityExpression();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case BIT_AND:{
        ;
        break;
        }
      default:
        jj_la1[21] = jj_gen;
        goto end_label_10;
      }
      if (!hasError) {
      t = jj_consume_token(BIT_AND);
      }
      if (!hasError) {
if(exp == nullptr){
                                exp = new AndExpression();
                                exp->setPosition(left);
                                exp->addExp(left);
                                left = exp;
                        }

                        exp->setPosition(t);
      }
      if (!hasError) {
      right = equalityExpression();
      }
      if (!hasError) {
exp->addExp(right);
                        exp->setPosition(right);
      }
    }
    end_label_10: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::equalityExpression() {Token* t = nullptr;
        EqualityExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = relationalExpression();
    }
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case CMP_EQUALS:
    case CMP_NOTEQUALS:{
      if (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case CMP_EQUALS:{
        if (!hasError) {
        t = jj_consume_token(CMP_EQUALS);
        }
        if (!hasError) {
exp = new EqualityExpression();
                                exp->setPosition(left);
                                exp->setLeft(left);
                                left = exp;

                                exp->setPosition(t);
                                exp->setOp(EqualityExpression::EQ);
        }
        break;
        }
      case CMP_NOTEQUALS:{
        if (!hasError) {
        t = jj_consume_token(CMP_NOTEQUALS);
        }
        if (!hasError) {
exp = new EqualityExpression();
                                exp->setPosition(left);
                                exp->setLeft(left);
                                left = exp;

                                exp->setPosition(t);
                                exp->setOp(EqualityExpression::NOT_EQ);
        }
        break;
        }
      default:
        jj_la1[22] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
      right = relationalExpression();
      }
      if (!hasError) {
exp->setRight(right);
                        exp->setPosition(right);
      }
      break;
      }
    default:
      jj_la1[23] = jj_gen;
      ;
    }
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::relationalExpression() {Token* t = nullptr;
        RelationalExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = shiftExpression();
    }
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case GT:
    case GEQ:
    case LT:
    case LEQ:{
      if (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case GT:{
        if (!hasError) {
        t = jj_consume_token(GT);
        }
        if (!hasError) {
exp = new RelationalExpression();
                                exp->setPosition(left);
                                exp->setLeft(left);
                                left = exp;


                                exp->setPosition(t);
                                exp->setOp(RelationalExpression::GT);
        }
        break;
        }
      case GEQ:{
        if (!hasError) {
        t = jj_consume_token(GEQ);
        }
        if (!hasError) {
exp = new RelationalExpression();
                                exp->setPosition(left);
                                exp->setLeft(left);
                                left = exp;

                                exp->setPosition(t);
                                exp->setOp(RelationalExpression::GT_EQ);
        }
        break;
        }
      case LT:{
        if (!hasError) {
        t = jj_consume_token(LT);
        }
        if (!hasError) {
exp = new RelationalExpression();
                                exp->setPosition(left);
                                exp->setLeft(left);
                                left = exp;


                                exp->setPosition(t);
                                exp->setOp(RelationalExpression::LT);
        }
        break;
        }
      case LEQ:{
        if (!hasError) {
        t = jj_consume_token(LEQ);
        }
        if (!hasError) {
exp = new RelationalExpression();
                                exp->setPosition(left);
                                exp->setLeft(left);
                                left = exp;

                                exp->setPosition(t);
                                exp->setOp(RelationalExpression::LT_EQ);
        }
        break;
        }
      default:
        jj_la1[24] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
      right = shiftExpression();
      }
      if (!hasError) {
exp->setRight(right);
                        exp->setPosition(right);
      }
      break;
      }
    default:
      jj_la1[25] = jj_gen;
      ;
    }
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::shiftExpression() {Token* t = nullptr;
        ShiftExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = additiveExpression();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case RSIGNEDSHIFT:
      case 195:{
        ;
        break;
        }
      default:
        jj_la1[26] = jj_gen;
        goto end_label_11;
      }
      if (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 195:{
        if (!hasError) {
        t = jj_consume_token(195);
        }
        if (!hasError) {
if(exp == nullptr){
                                        exp = new ShiftExpression();
                                        exp->setPosition(left);
                                        exp->addExp(left);
                                        left = exp;
                                }

                                exp->setPosition(t);
                                exp->addOpe(ShiftExpression::LEFT);
        }
        break;
        }
      case RSIGNEDSHIFT:{
        if (!hasError) {
        t = jj_consume_token(RSIGNEDSHIFT);
        }
        if (!hasError) {
if(exp == nullptr){
                                        exp = new ShiftExpression();
                                        exp->setPosition(left);
                                        exp->addExp(left);
                                        left = exp;
                                }

                                exp->setPosition(t);
                                exp->addOpe(ShiftExpression::RIGHT);
        }
        break;
        }
      default:
        jj_la1[27] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
      right = additiveExpression();
      }
      if (!hasError) {
exp->addExp(right);
                        exp->setPosition(right);
      }
    }
    end_label_11: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::additiveExpression() {Token* t = nullptr;
        AddExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = multiplicativeExpression();
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_2(2)) {
        ;
      } else {
        goto end_label_12;
      }
      if (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case PLUS:{
        if (!hasError) {
        t = jj_consume_token(PLUS);
        }
        if (!hasError) {
if(exp == nullptr){
                                        exp = new AddExpression();
                                        exp->setPosition(left);
                                        exp->addExp(left);
                                        left = exp;
                                }

                                exp->setPosition(t);
                                exp->addOpe(AddExpression::ADD);
        }
        break;
        }
      case MINUS:{
        if (!hasError) {
        t = jj_consume_token(MINUS);
        }
        if (!hasError) {
if(exp == nullptr){
                                        exp = new AddExpression();
                                        exp->setPosition(left);
                                        exp->addExp(left);
                                        left = exp;
                                }

                                exp->setPosition(t);
                                exp->addOpe(AddExpression::SUB);
        }
        break;
        }
      default:
        jj_la1[28] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
      right = multiplicativeExpression();
      }
      if (!hasError) {
exp->addExp(right);
                        exp->setPosition(right);
      }
    }
    end_label_12: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::multiplicativeExpression() {Token* t = nullptr;
        MultiplicativeExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = negateExpression();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case ASTERISK:
      case DIV:
      case MODULO:{
        ;
        break;
        }
      default:
        jj_la1[29] = jj_gen;
        goto end_label_13;
      }
      if (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case ASTERISK:{
        if (!hasError) {
        t = jj_consume_token(ASTERISK);
        }
        if (!hasError) {
if(exp == nullptr){
                                        exp = new MultiplicativeExpression();
                                        exp->setPosition(left);
                                        exp->addExp(left);
                                        left = exp;
                                }
                                exp->addOpe(MultiplicativeExpression::MUL);
                                exp->setPosition(t);
        }
        break;
        }
      case DIV:{
        if (!hasError) {
        t = jj_consume_token(DIV);
        }
        if (!hasError) {
if(exp == nullptr){
                                        exp = new MultiplicativeExpression();
                                        exp->setPosition(left);
                                        exp->addExp(left);
                                        left = exp;
                                }
                                exp->addOpe(MultiplicativeExpression::DIV);
                                exp->setPosition(t);
        }
        break;
        }
      case MODULO:{
        if (!hasError) {
        t = jj_consume_token(MODULO);
        }
        if (!hasError) {
if(exp == nullptr){
                                        exp = new MultiplicativeExpression();
                                        exp->setPosition(left);
                                        exp->addExp(left);
                                        left = exp;
                                }
                                exp->addOpe(MultiplicativeExpression::MOD);
                                exp->setPosition(t);
        }
        break;
        }
      default:
        jj_la1[30] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
      right = negateExpression();
      }
      if (!hasError) {
exp->addExp(right);
                        exp->setPosition(right);
      }
    }
    end_label_13: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::negateExpression() {Token* t = nullptr;
        NegateExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case MINUS:{
      if (!hasError) {
      t = jj_consume_token(MINUS);
      }
      if (!hasError) {
exp = new NegateExpression();
                        exp->setPosition(t);
                        left = exp;
      }
      break;
      }
    default:
      jj_la1[31] = jj_gen;
      ;
    }
    }
    if (!hasError) {
    right = postIncrementExpression();
    }
    if (!hasError) {
if(left==nullptr){
                        left = right;
                }
                else{
                        exp->setExpression(right);
                        exp->setPosition(right);
                }
    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::postIncrementExpression() {Token* t = nullptr;
        PostIncrementExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
    if (!hasError) {
    left = preIncrementExpression();
    }
    if (!hasError) {
    if (jj_2_3(2)) {
      if (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case MINUSMINUS:{
        if (!hasError) {
        t = jj_consume_token(MINUSMINUS);
        }
        if (!hasError) {
exp = new PostIncrementExpression();
                                exp->setExpression(left);
                                exp->setOpe(PostIncrementExpression::MINUS);
                                exp->setPosition(left);
                                exp->setPosition(t);
                                left = exp;
        }
        break;
        }
      case PLUSPLUS:{
        if (!hasError) {
        t = jj_consume_token(PLUSPLUS);
        }
        if (!hasError) {
exp = new PostIncrementExpression();
                                exp->setExpression(left);
                                exp->setOpe(PostIncrementExpression::PLUS);
                                exp->setPosition(left);
                                exp->setPosition(t);
                                left = exp;
        }
        break;
        }
      default:
        jj_la1[32] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
    } else {
      ;
    }
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::preIncrementExpression() {Token* t = nullptr;
        PreIncrementExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case PLUSPLUS:
    case MINUSMINUS:{
      if (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case MINUSMINUS:{
        if (!hasError) {
        t = jj_consume_token(MINUSMINUS);
        }
        if (!hasError) {
exp = new PreIncrementExpression();
                                exp->setOpe(PreIncrementExpression::MINUS);
                                exp->setPosition(t);
                                left = exp;
        }
        break;
        }
      case PLUSPLUS:{
        if (!hasError) {
        t = jj_consume_token(PLUSPLUS);
        }
        if (!hasError) {
exp = new PreIncrementExpression();
                                exp->setOpe(PreIncrementExpression::PLUS);
                                exp->setPosition(t);
                                left = exp;
        }
        break;
        }
      default:
        jj_la1[33] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      break;
      }
    default:
      jj_la1[34] = jj_gen;
      ;
    }
    }
    if (!hasError) {
    right = bitReverseExpression();
    }
    if (!hasError) {
if(left==nullptr){
                        left = right;
                }
                else{
                        exp->setExpression(right);
                        exp->setPosition(right);
                }
    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::bitReverseExpression() {Token* t = nullptr;
        BitReverseExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case 196:{
      if (!hasError) {
      t = jj_consume_token(196);
      }
      if (!hasError) {
exp = new BitReverseExpression();
                        exp->setPosition(t);
                        left = exp;
      }
      break;
      }
    default:
      jj_la1[35] = jj_gen;
      ;
    }
    }
    if (!hasError) {
    right = notExpression();
    }
    if (!hasError) {
if(left==nullptr){
                        left = right;
                }
                else{
                        exp->setExpression(right);
                        exp->setPosition(right);
                }
    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::notExpression() {Token* t = nullptr;
        NotExpression* exp = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case NOT:{
      if (!hasError) {
      t = jj_consume_token(NOT);
      }
      if (!hasError) {
exp = new NotExpression();
                        exp->setPosition(t);
                        left = exp;
      }
      break;
      }
    default:
      jj_la1[36] = jj_gen;
      ;
    }
    }
    if (!hasError) {
    right = castExpression();
    }
    if (!hasError) {
if(left==nullptr){
                        left = right;
                }
                else{
                        exp->setExpression(right);
                        exp->setPosition(right);
                }
    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::castExpression() {Token* t = nullptr;
        CastExpression* exp = nullptr;
        AbstractType* type = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    if (jj_2_4(2)) {
      if (!hasError) {
      t = jj_consume_token(L_PARENTHESIS);
      }
      if (!hasError) {
exp = new CastExpression();
                        exp->setPosition(t);
                        left = exp;
      }
      if (!hasError) {
      type = typeDeclare();
      }
      if (!hasError) {
exp->setType(type);
                        exp->setPosition(type);
      }
      if (!hasError) {
      t = jj_consume_token(R_PARENTHESIS);
      }
      if (!hasError) {
exp->setPosition(t);
      }
    } else {
      ;
    }
    }
    if (!hasError) {
    right = memberReferenceExpression();
    }
    if (!hasError) {
if(left==nullptr){
                        left = right;
                }
                else{
                        exp->setExpression(right);
                        exp->setPosition(right);
                }
    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::memberReferenceExpression() {MemberReferenceExpression* exp = nullptr;
        Token* t = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = arrayReferenceExpression();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case DOT:{
        ;
        break;
        }
      default:
        jj_la1[37] = jj_gen;
        goto end_label_14;
      }
      if (!hasError) {
      jj_consume_token(DOT);
      }
      if (!hasError) {
      right = arrayReferenceExpression();
      }
      if (!hasError) {
if(exp == nullptr){
                                exp = new MemberReferenceExpression();
                                exp->addExp(left);
                                exp->setPosition(left);
                                left = exp;
                        }

                        exp->addExp(right);
                        exp->setPosition(right);
      }
    }
    end_label_14: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::arrayReferenceExpression() {ArrayReferenceExpression* exp = nullptr;
        Token* t = nullptr;
        AbstractExpression* left = nullptr;
        AbstractExpression* right = nullptr;
    if (!hasError) {
    left = functionCallExpression();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case L_BRACKET:{
        ;
        break;
        }
      default:
        jj_la1[38] = jj_gen;
        goto end_label_15;
      }
      if (!hasError) {
      t = jj_consume_token(L_BRACKET);
      }
      if (!hasError) {
if(exp == nullptr){
                                exp = new ArrayReferenceExpression();
                                exp->setExp(left);
                                exp->setPosition(left);
                                left = exp;
                        }
      }
      if (!hasError) {
      right = expression();
      }
      if (!hasError) {
      t = jj_consume_token(R_BRACKET);
      }
      if (!hasError) {
exp->addIndex(right);
                        exp->setPosition(t);
      }
    }
    end_label_15: ;
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


AbstractExpression                  * AlinousLang::functionCallExpression() {FunctionCallExpression* exp = nullptr;
        Token* t = nullptr;
        AbstractExpression* left = nullptr;
    if (!hasError) {
    left = primitive();
    }
    if (!hasError) {
    if (jj_2_5(2)) {
      if (!hasError) {
      t = jj_consume_token(L_PARENTHESIS);
      }
      if (!hasError) {
exp = new FunctionCallExpression();
                        exp->setName(left);
                        exp->setPosition(left);
                        exp->setPosition(t);

                        left = exp;
      }
      if (!hasError) {
      functionCallExpressionArg(exp);
      }
      if (!hasError) {
      t = jj_consume_token(R_PARENTHESIS);
      }
      if (!hasError) {
exp->setPosition(t);
      }
    } else {
      ;
    }
    }
    if (!hasError) {

    }
__ONERROR(left);
                return left;
assert(false);
}


void AlinousLang::functionCallExpressionArg(FunctionCallExpression* exp) {AbstractExpression* arg = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case INTEGER_LITERAL:
    case STRING_LITERAL:
    case SQL_STRING_LITERAL:
    case PLUSPLUS:
    case MINUSMINUS:
    case MINUS:
    case L_PARENTHESIS:
    case NOT:
    case NEW:
    case TRUE:
    case FALSE:
    case _NULL:
    case IDENTIFIER:
    case 196:{
      if (!hasError) {
      arg = expression();
      }
      if (!hasError) {
exp->addArgument(arg);
                        exp->setPosition(arg);
      }
      if (!hasError) {
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case COMMA:{
          ;
          break;
          }
        default:
          jj_la1[39] = jj_gen;
          goto end_label_16;
        }
        if (!hasError) {
        t = jj_consume_token(COMMA);
        }
        if (!hasError) {
exp->setPosition(t);
        }
        if (!hasError) {
        arg = expression();
        }
        if (!hasError) {
exp->addArgument(arg);
                                exp->setPosition(arg);
        }
      }
      end_label_16: ;
      }
      break;
      }
    default:
      jj_la1[40] = jj_gen;
      ;
    }
    }
}


AbstractExpression                  * AlinousLang::primitive() {AbstractExpression* exp = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case L_PARENTHESIS:{
      if (!hasError) {
      exp = parenthesisExpression();
      }
      break;
      }
    case NEW:{
      if (!hasError) {
      exp = allocationExpression();
      }
      break;
      }
    case INTEGER_LITERAL:
    case STRING_LITERAL:
    case SQL_STRING_LITERAL:
    case TRUE:
    case FALSE:
    case _NULL:{
      if (!hasError) {
      exp = literal();
      }
      break;
      }
    case IDENTIFIER:{
      if (!hasError) {
      exp = variableIdentifier();
      }
      break;
      }
    default:
      jj_la1[41] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
    if (!hasError) {

    }
return exp;
assert(false);
}


AllocationExpression                    * AlinousLang::allocationExpression() {AllocationExpression* exp = nullptr;
        PackageNameDeclare* packageName = nullptr;
        AbstractExpression* func = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(NEW);
    }
    if (!hasError) {
exp = new AllocationExpression();
                exp->setPosition(t);
    }
    if (!hasError) {
    if (jj_2_6(2)) {
      if (!hasError) {
      packageName = packageNameDeclare();
      }
      if (!hasError) {
exp->setPackage(packageName);
                        exp->setPosition(packageName);
      }
    } else {
      ;
    }
    }
    if (!hasError) {
    func = functionCallExpression();
    }
    if (!hasError) {
exp->setExpression((FunctionCallExpression*)func);
                exp->setPosition(func);
    }
__ONERROR(exp);
                return exp;
assert(false);
}


ParenthesisExpression                     * AlinousLang::parenthesisExpression() {ParenthesisExpression* exp = new ParenthesisExpression();
        AbstractExpression* e = nullptr;
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(L_PARENTHESIS);
    }
    if (!hasError) {
exp->setPosition(t);
    }
    if (!hasError) {
    e = expression();
    }
    if (!hasError) {
exp->setExp(e);
                exp->setPosition(e);
    }
    if (!hasError) {
    t = jj_consume_token(R_PARENTHESIS);
    }
    if (!hasError) {
exp->setPosition(t);
    }
__ONERROR(exp);
                return exp;
assert(false);
}


VariableIdentifier                  * AlinousLang::variableIdentifier() {VariableIdentifier* valId = new VariableIdentifier();
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
valId->setName(_STR(t));
    }
__ONERROR(valId);
                return valId;
assert(false);
}


AbstractExpression                  * AlinousLang::literal() {AbstractExpression* lit = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case _NULL:{
      if (!hasError) {
      lit = nullLiteral();
      }
      break;
      }
    case TRUE:
    case FALSE:{
      if (!hasError) {
      lit = booleanLiteral();
      }
      break;
      }
    case INTEGER_LITERAL:{
      if (!hasError) {
      lit = numberLiteral();
      }
      break;
      }
    case STRING_LITERAL:
    case SQL_STRING_LITERAL:{
      if (!hasError) {
      lit = literalExpression();
      }
      break;
      }
    default:
      jj_la1[42] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
    if (!hasError) {

    }
return lit;
assert(false);
}


NullLiteral           * AlinousLang::nullLiteral() {NullLiteral* lit = new NullLiteral();
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(_NULL);
    }
    if (!hasError) {
lit->setPositions(t, t);
    }
__ONERROR(lit);
                return lit;
assert(false);
}


NumberLiteral             * AlinousLang::numberLiteral() {NumberLiteral* lit = new NumberLiteral();
        Token* t = nullptr;
    if (!hasError) {
    t = jj_consume_token(INTEGER_LITERAL);
    }
    if (!hasError) {
lit->setValue(_STR(t));
                lit->setPositions(t, t);
    }
__ONERROR(lit);
                return lit;
assert(false);
}


BooleanLiteral              * AlinousLang::booleanLiteral() {BooleanLiteral* lit = new BooleanLiteral();
        Token* t = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case TRUE:{
      if (!hasError) {
      t = jj_consume_token(TRUE);
      }
      if (!hasError) {
lit->setValue(true);
      }
      break;
      }
    case FALSE:{
      if (!hasError) {
      t = jj_consume_token(FALSE);
      }
      if (!hasError) {
lit->setValue(false);
      }
      break;
      }
    default:
      jj_la1[43] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
    if (!hasError) {
lit->setPositions(t, t);
    }
__ONERROR(lit);
                return lit;
assert(false);
}


LiteralExpression                 * AlinousLang::literalExpression() {LiteralExpression* lit = new LiteralExpression();
        Token* t = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case STRING_LITERAL:{
      if (!hasError) {
      t = jj_consume_token(STRING_LITERAL);
      }
      if (!hasError) {
lit->setString(_STR(t), true);
      }
      break;
      }
    case SQL_STRING_LITERAL:{
      if (!hasError) {
      t = jj_consume_token(SQL_STRING_LITERAL);
      }
      if (!hasError) {
lit->setString(_STR(t), false);
      }
      break;
      }
    default:
      jj_la1[44] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
    if (!hasError) {
lit->setPositions(t, t);
    }
__ONERROR(lit);
                return lit;
assert(false);
}


AbstractSQLStatement
                    * AlinousLang::ddlStatement() {AbstractSQLStatement* stmt = nullptr;
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case CREATE:{
      if (!hasError) {
      stmt = createTableStatement();
      }
      break;
      }
    case DROP:{
      if (!hasError) {
      stmt = dropTableStatement();
      }
      break;
      }
    default:
      jj_la1[45] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
    if (!hasError) {

    }
return stmt;
assert(false);
}


CreateTableStatement                    * AlinousLang::createTableStatement() {CreateTableStatement* stmt = new CreateTableStatement();
        Token* t = null;
    if (!hasError) {
    t = jj_consume_token(CREATE);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    t = jj_consume_token(TABLE);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    jj_consume_token(L_PARENTHESIS);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    jj_consume_token(R_PARENTHESIS);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


DropTableStatement                  * AlinousLang::dropTableStatement() {DropTableStatement* stmt = new DropTableStatement();
        Token* t = null;
    if (!hasError) {
    t = jj_consume_token(DROP);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    t = jj_consume_token(TABLE);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
    if (!hasError) {
    t = jj_consume_token(SEMI_COLON);
    }
    if (!hasError) {
stmt->setPosition(t);
    }
__ONERROR(stmt);
                return stmt;
assert(false);
}


TableIdentifier
               * AlinousLang::tableIdentifier() {TableIdentifier* exp = new TableIdentifier();
        Token* t = nullptr;
        Token* t1 = nullptr;
        Token* t2 = nullptr;
    if (!hasError) {
    t1 = jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
exp->setPosition(t1);
    }
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case DOT:{
      if (!hasError) {
      t = jj_consume_token(DOT);
      }
      if (!hasError) {
exp->setPosition(t);
      }
      if (!hasError) {
      t2 = jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
exp->setPosition(t2);
      }
      break;
      }
    default:
      jj_la1[46] = jj_gen;
      ;
    }
    }
    if (!hasError) {
if(t2 != nullptr){
                        exp->setScheme(_STR(t1));
                        exp->setTableName(_STR(t2));
                }
                else{
                        exp->setTableName(_STR(t1));
                }
    }
__ONERROR(exp);
                return exp;
assert(false);
}


  AlinousLang::AlinousLang(TokenManager *tokenManager){
    head = nullptr;
    ReInit(tokenManager);
}
AlinousLang::~AlinousLang()
{
  clear();
}

void AlinousLang::ReInit(TokenManager* tokenManager){
    clear();
    errorHandler = new ErrorHandler();
    hasError = false;
    token_source = tokenManager;
    head = token = new Token();
    token->kind = 0;
    token->next = nullptr;
    jj_lookingAhead = false;
    jj_rescan = false;
    jj_done = false;
    jj_scanpos = jj_lastpos = nullptr;
    jj_gc = 0;
    jj_kind = -1;
    indent = 0;
    trace = false;
    jj_ntk = -1;
    jj_gen = 0;
    for (int i = 0; i < 47; i++) jj_la1[i] = -1;
  }


void AlinousLang::clear(){
  //Since token manager was generate from outside,
  //parser should not take care of deleting
  //if (token_source) delete token_source;
  if (head) {
    Token *next, *t = head;
    while (t) {
      next = t->next;
      delete t;
      t = next;
    }
  }
  if (errorHandler) {
    delete errorHandler, errorHandler = nullptr;
  }
}


Token * AlinousLang::jj_consume_token(int kind)  {
    Token *oldToken;
    if ((oldToken = token)->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    if (token->kind == kind) {
      jj_gen++;
      if (++jj_gc > 100) {
        jj_gc = 0;
        for (int i = 0; i < 6; i++) {
          JJCalls *c = &jj_2_rtns[i];
          while (c != nullptr) {
            if (c->gen < jj_gen) c->first = nullptr;
            c = c->next;
          }
        }
      }
      return token;
    }
    token = oldToken;
    jj_kind = kind;
    JJString image = kind >= 0 ? tokenImage[kind] : tokenImage[0];
    errorHandler->handleUnexpectedToken(kind, image.substr(1, image.size() - 2), getToken(1), this);
    hasError = true;
    return token;
  }


bool  AlinousLang::jj_scan_token(int kind){
    if (jj_scanpos == jj_lastpos) {
      jj_la--;
      if (jj_scanpos->next == nullptr) {
        jj_lastpos = jj_scanpos = jj_scanpos->next = token_source->getNextToken();
      } else {
        jj_lastpos = jj_scanpos = jj_scanpos->next;
      }
    } else {
      jj_scanpos = jj_scanpos->next;
    }
    if (jj_rescan) {
      int i = 0; Token *tok = token;
      while (tok != nullptr && tok != jj_scanpos) { i++; tok = tok->next; }
      if (tok != nullptr) jj_add_error_token(kind, i);
    }
    if (jj_scanpos->kind != kind) return true;
    if (jj_la == 0 && jj_scanpos == jj_lastpos) { return jj_done = true; }
    return false;
  }


/** Get the next Token. */

Token * AlinousLang::getNextToken(){
    if (token->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    jj_gen++;
    return token;
  }

/** Get the specific Token. */

Token * AlinousLang::getToken(int index){
    Token *t = token;
    for (int i = 0; i < index; i++) {
      if (t->next != nullptr) t = t->next;
      else t = t->next = token_source->getNextToken();
    }
    return t;
  }


int AlinousLang::jj_ntk_f(){
    if ((jj_nt=token->next) == nullptr)
      return (jj_ntk = (token->next=token_source->getNextToken())->kind);
    else
      return (jj_ntk = jj_nt->kind);
  }


  void AlinousLang::jj_add_error_token(int kind, int pos)  {
  }


 void  AlinousLang::parseError()   {
      fprintf(stderr, "Parse error at: %d:%d, after token: %s encountered: %s\n", token->beginLine, token->beginColumn, addUnicodeEscapes(token->image).c_str(), addUnicodeEscapes(getToken(1)->image).c_str());
   }


  bool AlinousLang::trace_enabled()  {
    return trace;
  }


  void AlinousLang::enable_tracing()  {
  }

  void AlinousLang::disable_tracing()  {
  }


  void AlinousLang::jj_rescan_token(){
    jj_rescan = true;
    for (int i = 0; i < 6; i++) {
      JJCalls *p = &jj_2_rtns[i];
      do {
        if (p->gen > jj_gen) {
          jj_la = p->arg; jj_lastpos = jj_scanpos = p->first;
          switch (i) {
            case 0: jj_3_1(); break;
            case 1: jj_3_2(); break;
            case 2: jj_3_3(); break;
            case 3: jj_3_4(); break;
            case 4: jj_3_5(); break;
            case 5: jj_3_6(); break;
          }
        }
        p = p->next;
      } while (p != nullptr);
    }
    jj_rescan = false;
  }


  void AlinousLang::jj_save(int index, int xla){
    JJCalls *p = &jj_2_rtns[index];
    while (p->gen > jj_gen) {
      if (p->next == nullptr) { p = p->next = new JJCalls(); break; }
      p = p->next;
    }
    p->gen = jj_gen + xla - jj_la; p->first = token; p->arg = xla;
  }


}
