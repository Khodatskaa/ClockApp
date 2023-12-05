#define _CRT_SECURE_NO_WARNINGS
#include "lib.h"
#include "Config.h"
#include "Clock.h"
#include "Time.h"
#include "Digits.h"
#include <chrono>
#include <Windows.h>
#include <iostream>

using namespace std;

// Function to set cursor visibility and size
void setcursor(bool visible, DWORD size) {
    if (size == 0) {
        size = 12; // default cursor size
    }

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo = { size, visible };
    SetConsoleCursorInfo(console, &cursorInfo);
}

// Function to move cursor to a specific position
void gotoxy(int x, int y) {
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}

// Function to display a border
void show_border(int x, int y) {
    gotoxy(x, y);
    cout << char(201);
    for (size_t i = 0; i < 90; i++) {
        cout << char(205);
    }
    cout << char(187);

    for (size_t i = static_cast<size_t>(y) + 1; i < static_cast<unsigned long long>(y) + 12; i++)
    {
        gotoxy(x, i);
        cout << char(186);

        for (int j = 0; j < 90; j++) {
            gotoxy(x + j + 1, i);
            cout << char(205);
        }

        gotoxy(x + 91, i);
        cout << char(186);
    }

    gotoxy(x, y + 12);
    cout << char(200);
    for (size_t i = 0; i < 90; i++) {
        cout << char(205);
    }
    cout << char(188);
}

// Function to output dots 
int output_dots(bool flag, int x, int y) {
    if (flag) {
        Digits::double_dots(x, y);
    }
    else {
        Digits::double_dots_empty(x, y);
    }
    return x + 7;
}

// Function to output a digit
void output_digit(short number, int x, int y) {
    switch (number) {
    case 0: { Digits::zero(x, y); } break;
    case 1: { Digits::one(x, y); } break;
    case 2: { Digits::two(x, y); } break;
    case 3: { Digits::three(x, y); } break;
    case 4: { Digits::four(x, y); } break;
    case 5: { Digits::five(x, y); } break;
    case 6: { Digits::six(x, y); } break;
    case 7: { Digits::seven(x, y); } break;
    case 8: { Digits::eight(x, y); } break;
    case 9: { Digits::nine(x, y); } break;
    }
}

// Constructor
Clock::Clock() {
    auto now = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(now);
    unsigned short hours = std::localtime(&end_time)->tm_hour;
    unsigned short minutes = std::localtime(&end_time)->tm_min;
    unsigned short seconds = std::localtime(&end_time)->tm_sec;

    is_hours_changed = false;
    is_minutes_changed = false;
    is_seconds_changed = false;

    this->config = Config();
    this->time = new Time(hours, minutes, seconds);
}

Clock::Clock(Config config, Time time) {
    this->config = config;
    this->time = &time;
}

// Getter methods
Config Clock::get_config() {
    return this->config;
}

Time Clock::get_time() {
    return *time;
}

// Setter methods
void Clock::set_config(Config config) {
    this->config = config;
}

void Clock::set_time(Time time) {
    this->time = &time;
}

// Method to update the time
void Clock::update() {
    auto now = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(now);

    unsigned short h = std::localtime(&end_time)->tm_hour;
    unsigned short m = std::localtime(&end_time)->tm_min;
    unsigned short s = std::localtime(&end_time)->tm_sec;
    delete this->time;
    this->time = new Time(h, m, s);
}

void Clock::reset() {
    this->is_hours_changed = false;
    this->is_minutes_changed = false;
    this->is_seconds_changed = false;
}

void Clock::show() {
    setcursor(0, 0); // hide cursor

    do {
        const char* am_pm = (this->time->get_hours() < 12) ? "AM" : "PM";

        short h = this->time->get_hours();
        short m = this->time->get_minutes();
        short s = this->time->get_seconds();

        if (h > 12)
            h -= 12;
        else if (h == 0)
            h = 12;

        int x = 0;  
        int y = 0;  

        show_digits(int(h / 10), x, y);
        show_digits(int(h) % 10, x, y);
        output_dots(this->config.get_display_dots(), x, y);
        show_digits(int(m / 10), x, y);
        show_digits(int(m) % 10, x, y);
        output_dots(this->config.get_display_dots(), x, y);
        show_digits(int(s / 10), x, y);
        show_digits(int(s) % 10, x, y);

        // Display AM/PM
        gotoxy(x, y + 1);
        std::cout << am_pm;


    } while (true);
}

void Clock::show_h() {
    int x = 0;
    int y = 0;
    show_digits(int(time->get_hours() / 10), x, y);
    show_digits(int(time->get_hours()) % 10, x, y);
}

void Clock::show_m() {
    int x = 0;
    int y = 0;
    output_dots(this->config.get_display_dots(), x, y);
    show_digits(int(time->get_minutes() / 10), x, y);
    show_digits(int(time->get_minutes()) % 10, x, y);
}

void Clock::show_s() {
    int x = 0;
    int y = 0;
    output_dots(this->config.get_display_dots(), x, y);
    show_digits(int(time->get_seconds() / 10), x, y);
    show_digits(int(time->get_seconds()) % 10, x, y);
}

inline int Clock::show_digits(short number, int x, int y)
{
    output_digit(number, x, y);
    return x + 7;
}
