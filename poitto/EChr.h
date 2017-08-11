#include "AChr.h"

#ifndef EChr_h
#define EChr_h

class EChr : public AChr
{
  public:
  bool jumpFlag; // true: already jumped, false: not jump
  bool isRight;
  EChr(byte px, byte py, byte pw, byte ph);
  virtual void init();
  virtual void hitX(Chr*);
  virtual void hitY(Chr*);
  virtual void draw();
};

#endif