// Keanu Aloua
// December 17, 2021
// This program will be a clocking in and clocking out program
// Will use makefiles and continued use of class building skills

#include <iostream>
#include <string>

#include "time.h"

bool getClockTime(Time& t);
Time calcHoursWorked(const Time& t1, const Time& t2);

int main() 
{
    Time clockIn;
    Time clockOut;
    Time calcWork;

    std::cout << "CLOCK IN/OUT SYSTEM" << std::endl;
    std::cout << "This clock requires you to use military time.\n" << std::endl;

    std::cout << "CLOCK IN: " << std::endl;
    while (getClockTime(clockIn) == false) { 
        std::cout << "Invalid time" << std::endl; 
        std::cout << "CLOCK IN: " << std::endl;
    }

    std::cout << "CLOCK OUT: " << std::endl;
    while (getClockTime(clockOut) == false) { 
        std::cout << "Invalid time" << std::endl; 
        std::cout << "CLOCK OUT: " << std::endl;
    }

    calcWork = calcHoursWorked(clockIn, clockOut);

    calcWork.display();

    return 0;
}

bool getClockTime(Time& t)
{
    int hours, mins, secs;

    std::cout << "Enter your clock time (HH MM SS):";
    std::cin >> hours >> mins >> secs;

    t.setHour(hours);
    t.setMinute(mins);
    t.setSecond(secs);
    t.setMillisecond(0);

    if ( (hours >= 0 && hours <= 23) && (mins <= 59 && mins >= 0) && (secs <= 59 && secs >= 0) ) {
        return true;
    } else {
        return false;
    }
}

Time calcHoursWorked(const Time& t1, const Time& t2)
{
    int hour1, minute1, sec1;
    int hour2, minute2, sec2;
    int finalH, finalM, finalS;

    hour1 = t1.getHour();
    hour2 = t2.getHour();

    minute1 = t1.getMinute();
    minute2 = t2.getMinute();

    sec1 = t1.getSecond();
    sec2 = t2.getSecond();

    if (hour2 < hour1) {
        finalH = 24 - hour1;
        finalH += hour2;
    }
    else {
        finalH = hour2 - hour1;
    }

    if (minute2 < minute1) {
        finalM = 60 - minute1;
        finalM += minute2;
    }
    else {
        finalM = minute2 - minute1;
    }

    if (sec2 < sec1) {
        finalS = 60 - sec1;
        finalS += sec2;
    }
    else {
        finalS = sec2 - sec1;
    }

    Time timeWorked(finalH, finalM, finalS, 0);

    return timeWorked;
}
