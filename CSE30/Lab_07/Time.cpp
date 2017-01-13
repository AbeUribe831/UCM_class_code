#include "Time.h"
//constructor is called to initialize values
Time::Time()
{
    hours=0;
    minutes=0;
    seconds=0;
}
Time::Time(int hr, int minute, int sec){
    hours=hr;
    minutes=minute;
    seconds=sec;
}
//these set functions are used to change values for hours, minutes, and seconds
void Time::setHours(int hr){
    hours=hr;
}
void Time::setMinutes(int minute){
    minutes=minute;
}
void Time::setSeconds(int sec){
    seconds=sec;
}

Time::~Time()
{
}
