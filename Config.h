#ifndef Config_h
#define Config_h

#include "InnerSize.h"
#include "Color.h"

struct Config
{
private:
    InnerSize inner_console_window_size;
    Color colors;

public:
    Config();
    Config(InnerSize inner_console_window_size, Color colors);

    InnerSize get_inner_console_window_size();
    Color get_colors();
    bool get_display_dots() const;
    bool display_dots;

};

#endif
