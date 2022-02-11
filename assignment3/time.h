// Header file for time

#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>

class Time
{
	int hour;
	int minute;
	int second;
	int millisecond;
	
	public:
	
		Time();
		Time(int, int, int, int);
		Time(const Time&);
		
		int getHour() const;
		int getMinute() const;
		int getSecond() const;
		int getMillisecond() const;	

		void setHour(int);
		void setMinute(int);
		void setSecond(int);
		void setMillisecond(int);
		
		void display();
};

#endif
