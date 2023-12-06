#include "Config.h"
#include "Color.h"

Config::Config()
    : inner_console_window_size(InnerSize(0, 0)),
    colors(Color(ColorType::White, ColorType::White, ColorType::Black, ColorType::White)),
    display_dots(false)  
{
}

Config::Config(InnerSize inner_console_window_size, Color colors)
    : inner_console_window_size(inner_console_window_size),
    colors(colors),
    display_dots(false)  
{
}

InnerSize Config::get_inner_console_window_size()
{
    return this->inner_console_window_size;
}

Color Config::get_colors()
{
    return this->colors;
}

bool Config::get_display_dots() const
{
    return this->display_dots;
}
