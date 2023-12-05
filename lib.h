#ifndef lib_h
#define lib_h

#include <Windows.h>
#include <iostream>


void setcursor(bool visible, DWORD size); /*"Double Word," and it is a 32 - bit unsigned integer data type*/
void gotoxy(int x, int y);

void show_border(int x, int y);

#endif
