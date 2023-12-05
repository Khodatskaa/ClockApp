#include "Clock.h"
#include "Digits.h"

int main()
{
    Clock* clock = new Clock();
    clock->show();

    delete clock;
    return 0;
}