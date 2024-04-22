#ifdef CCBERETH_H
#define CCBERETH_H

#include "bereth/incl.h"
#include "bereth/utils.h"

namespace bereth {
  class util {
  public:
    void reconf(int id, const int width, const int height, const char *winname);
  }

  class draw {
  public:

  }

public:
  void initWindow(const char *winname, const int width, const int height, int id, const char *flags[]);
  void closeWindow(int id, void (*closefunc)(void));
}

#endif