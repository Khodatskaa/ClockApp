#include "Config.h"
#include "Color.h"

Config::Config()
{
    this->inner_console_window_size = InnerSize(0, 0);
    this->colors = Color(ColorType::White, ColorType::White, ColorType::Black, ColorType::White);
}

Config::Config(InnerSize inner_console_window_size, Color colors)
{
    this->inner_console_window_size = inner_console_window_size;
    this->colors = colors;
}

InnerSize Config::get_inner_console_window_size()
{
    return this->inner_console_window_size;
}

Color Config::get_colors()
{
    return this->colors;
}

bool Config::get_display_dots() const {
	return this->display_dots;
}