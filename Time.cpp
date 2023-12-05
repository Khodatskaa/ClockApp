#include "Time.h"

Time::Time()
{
	this->hours = 0;
	this->minutes = 0;
	this->seconds = 0;
}

Time::Time(unsigned short hours, unsigned short minutes, unsigned short seconds)
{
	this->hours = hours;
	this->minutes = minutes;
	this->seconds = seconds;
}

//Getters
unsigned short Time::get_hours()
{
	return this->hours;
}

unsigned short Time::get_minutes()
{
	return this->minutes;
}

unsigned short Time::get_seconds()
{
	return this->seconds;
}

//Setters
void Time::set_hours(unsigned short hours)
{
	this->hours = hours;
}

void Time::set_minutes(unsigned short minutes)
{
	this->minutes = minutes;
}

void Time::set_seconds(unsigned short seconds)
{
	this->seconds = seconds;
}
