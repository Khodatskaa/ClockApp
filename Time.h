#ifndef Time_h
#define Time_h

struct Time
{
private:
    unsigned short hours;
    unsigned short minutes;
    unsigned short seconds;

public:
    Time();
    Time(unsigned short hours, unsigned short minutes, unsigned short seconds);

    unsigned short get_hours();
    unsigned short get_minutes();
    unsigned short get_seconds();

    void set_hours(unsigned short hours);
    void set_minutes(unsigned short minutes);
    void set_seconds(unsigned short seconds);
};

#endif
