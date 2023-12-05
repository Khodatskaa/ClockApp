#include "Digits.h"
#include "lib.h"
#include <iostream>
#include <Windows.h>


void Digits::double_dots_empty(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << "     " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
}

void Digits::double_dots(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << "     " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << " 080 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << " 080 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << " 080 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << " 080 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     " << std::endl;
}

void Digits::zero(short x, short y) {
	short x_cur = x;
	short y_cur = y;
	Digits::move_coord(x_cur, y_cur);
	std::cout << " .d8888b.  " << std::endl;
	y_cur += 1;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "d88P  Y88b " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "888    888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "888    888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "888    888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "888    888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "Y88b  d88P " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << " \"Y8888P\"  " << std::endl;
}

void Digits::one(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << "    d8888  " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "   d8P888  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "      888  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "      888  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "      888  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "      888  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "      888  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "    8888888" << std::endl;
}

void Digits::two(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << " .d8888b.  " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "d88P  Y88b " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "       888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     .d88P " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << " .od888P\"  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "d88P\"      " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888\"       " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888888888  " << std::endl;
}

void Digits::three(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << " .d8888b.  " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "d88P  Y88b " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     .d88P " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "    8888\"  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     \"Y8b. " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888    888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "Y88b  d88P " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << " \"Y8888P\"  " << std::endl;
}

void Digits::four(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << "    d8888b. " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "   d8P  Y88b" << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888    888" << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888        " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888  88888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888    888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888    888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888888888888" << std::endl;
}

void Digits::five(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << "8888888888 " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888        " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888        " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "8888888b.  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     \"Y88b." << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "       888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "Y88b  d88P " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << " \"Y8888P\"  " << std::endl;
}

void Digits::six(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << " .d8888b.  " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "d88P  Y88b " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888        " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888d888b.  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888P \"Y88b " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888    888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "Y88b  d88P " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << " \"Y8888P\"  " << std::endl;
}

void Digits::seven(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << "8888888888" << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "      d88P" << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "     d88P " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "    d88P  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "   d88P   " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  d88P    " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << " d88P     " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "d88P      " << std::endl;
}

void Digits::eight(short x, short y) {
	short x_cur = x;
	short y_cur = y;
	Digits::move_coord(x_cur, y_cur);
	std::cout << ".d8888b.  " << std::endl;
	y_cur += 1;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "d88P  Y88b " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "888    888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "Y88b. d888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << " \"Y888P888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "     d888P " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "    d8888P  " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "   d88P888  " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "  d88P 888  " << std::endl;
}

void Digits::nine(short x, short y) {
	short x_cur = x;
	short y_cur = y;
	Digits::move_coord(x_cur, y_cur);
	std::cout << ".d8888b.  " << std::endl;
	y_cur += 1;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "d88P  Y88b " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "888    888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "Y88b. d888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << " \"Y888P888 " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "      888P " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "      888  " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "      888  " << std::endl;
	Digits::move_coord(x_cur, y_cur);
	std::cout << "      888  " << std::endl;
}

void Digits::letter_A(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << "    d8888b. " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "   d8P  Y88b" << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888    888" << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888        " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888  88888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888    888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "  888    888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888888888888" << std::endl;
}

void Digits::letter_M(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << "888b     d888 " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "8888b   d8888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "88888b.d88888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888Y88888P888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888 Y888P 888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888  Y8P  888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888   \"   888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888       888 " << std::endl;
}

void Digits::letter_P(short x, short y) {
    short x_cur = x;
    short y_cur = y;
    Digits::move_coord(x_cur, y_cur);
    std::cout << "8888888b.  " << std::endl;
    y_cur += 1;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888   Y88b " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888    888 " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888   d88P " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "8888888P\"  " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888        " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888        " << std::endl;
    Digits::move_coord(x_cur, y_cur);
    y_cur += 1;
    std::cout << "888        " << std::endl;
}
