#ifdef CORE_H
#define CORE_H

// Core functions

// Flags as list for better managment
// Also because I didn't learn how to parse strings
void initWindow(const char *winname, const int width, const int height, int id, const char *flags[], const char *logopath);
void closeWindow(int id, void (*closefunc)(void));

#endif