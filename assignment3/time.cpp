// Keanu Aloua
// Source file for time.h

#include "time.h"

Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
    millisecond = 0;
}

Time::Time(int newHour, int newMinute, int newSecond, int newMillisecond)
{
    setHour(newHour);
    setMinute(newMinute);
    setSecond(newSecond);
    setMillisecond(newMillisecond);
}

Time::Time(const Time& rhs)
{
    setHour(rhs.hour);
    setMinute(rhs.minute);
    setSecond(rhs.second);
    setMillisecond(rhs.millisecond);
}

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{   
    return second;
}

int Time::getMillisecond() const
{
    return millisecond;
}	

void Time::setHour(int newHour)
{
    hour = newHour;
}

void Time::setMinute(int newMinute)
{
    minute = newMinute;
}

void Time::setSecond(int newSecond)
{
    second = newSecond;
}

void Time::setMillisecond(int newMillisecond)
{
    millisecond = newMillisecond;
}

void Time::display()
{
    std::cout << std::endl;

    std::cout << "TIME WORKED" << std::endl;
    std::cout << hour << ":" << minute << ":" << second << "." << millisecond << std::endl;
}
