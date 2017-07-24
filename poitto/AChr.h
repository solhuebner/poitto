#include "Chr.h"

#ifndef AChr_h
#define AChr_h

class AChr : public Chr
{
  public:
  int vx, vy;
  int ax, ay;
  AChr(byte px, byte py, byte pw, byte ph);
  virtual void init();
  virtual void runX();
  virtual void hitX(Chr*);
  virtual void runY();
  virtual void hitY(Chr*);
  virtual void draw();
};

#endif
