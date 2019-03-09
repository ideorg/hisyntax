#include "synexception.h"

using namespace syntaxhl;

SynException::SynException(const QString& message, int code, int level):code(code),level(level)
  {
    int len = message.length();
    msgbuf = new char[size_t(len) + 1];
    if (!msgbuf) return;
    strcpy(msgbuf, message.toStdString().c_str());
  }

SynException::~SynException()
{
    delete msgbuf;
}

const char* SynException::what() const noexcept{
   return msgbuf;
}

int SynException::getCode() noexcept {
   return code;
}

int SynException::getLevel() noexcept {
   return code;
}

void SynException::raise() const { throw *this; }

SynException *SynException::clone() const { return new SynException(*this); }
