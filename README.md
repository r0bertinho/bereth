# bereth
Bereth is a BGFX based c/c++ framework for graphical development.
This framework is given as you see it. Feel free to modify it to your liking, but please consider reaching me a helping hand in the creation of this life project.

## information
The bgfx library is included as such:
"#include <bgfx/bgfx.h>" in the sense of "MinGW\include\bgfx\bgfx.h".
The "bereth.h" file is compatible with C and C++ language, while "ccbereth.h" is compatible only with C++.

## example
##### baseapp.c
```C
#include <stdio.h>
#include <bereth.h>

int main(int argc, char *argv[]) {
  char *wname="Hallo";

  initWindow(wname, 600, 600);
  printf("initialized window \'%s\'\n", wname);

  for (
    char c=(char)(NULL); 
    c==(char)(NULL);
    c=getchar()
  );

  closeWindow();
  printf("closed windown \'%s\'\n", wname);

  return(0);
}
```
