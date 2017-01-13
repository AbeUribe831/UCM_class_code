#ifndef TIME_H
#define TIME_H


class Time
{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time();
        Time(int hr, int minute, int sec);
        ~Time();
        int getHours(){return hours;}
        int getMinutes(){return minutes;}
        int getSeconds(){return seconds;}
        void setHours(int hr);
        void setMinutes(int minute);
        void setSeconds(int sec);

};

#endif // TIME_H
