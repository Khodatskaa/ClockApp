#ifndef Digits_h
#define Digits_h

#include <Windows.h>

struct Digits
{
    static void move_coord(short x, short y)
    {
        HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = { x, y };
        SetConsoleCursorPosition(output, pos);
    }

public:
    static void double_dots_empty(short x, short y);
    static void double_dots(short x, short y);
    static void zero(short x, short y);
    static void one(short x, short y);
    static void two(short x, short y);
    static void three(short x, short y);
    static void four(short x, short y);
    static void five(short x, short y);
    static void six(short x, short y);
    static void seven(short x, short y);
    static void eight(short x, short y);
    static void nine(short x, short y);
    static void letter_A(short x, short y);
    static void letter_M(short x, short y);
    static void letter_P(short x, short y);
};

#endif
