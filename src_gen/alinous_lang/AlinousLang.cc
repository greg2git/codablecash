/* AlinousLang.cc */
#include "AlinousLang.h"
#include "TokenMgrError.h"
namespace alinouslang {
  unsigned int jj_la1_0[] = {
0x0,0x0,0x0,};
  unsigned int jj_la1_1[] = {
0x1000000,0x2000000,0x80,};
  unsigned int jj_la1_2[] = {
0x0,0x0,0x0,};
  unsigned int jj_la1_3[] = {
0x0,0x0,0x0,};
  unsigned int jj_la1_4[] = {
0x0,0x0,0x0,};
  unsigned int jj_la1_5[] = {
0x0,0x0,0x0,};
  unsigned int jj_la1_6[] = {
0x0,0x0,0x0,};

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
    jj_consume_token(SEMI_COLON);
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
    if (!hasError) {
    begin = jj_consume_token(L_BRACE);
    }
    if (!hasError) {
block = new ClassDeclareBlock();
                block->setPosition(begin);
    }
    if (!hasError) {
    end = jj_consume_token(R_BRACE);
    }
    if (!hasError) {
block = new ClassDeclareBlock();
                block->setPosition(end);
    }
__ONERROR(block);
                return block;
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
    for (int i = 0; i < 3; i++) jj_la1[i] = -1;
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
      return token;
    }
    token = oldToken;
    jj_kind = kind;
    JJString image = kind >= 0 ? tokenImage[kind] : tokenImage[0];
    errorHandler->handleUnexpectedToken(kind, image.substr(1, image.size() - 2), getToken(1), this);
    hasError = true;
    return token;
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


}
