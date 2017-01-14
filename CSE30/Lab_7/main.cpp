#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "Time.h"
using namespace std;

bool getTimeFromUser(Time &time);
void print24Hour(Time &time);

int main(){
	bool validStart, validEnd;
    //declare time class objects
    Time start;
	Time end;

	cout<<"Enter the start time for the lecture(format is HH:MM:SS): ";
    validStart=getTimeFromUser(start);
	cout<<"Enter the end time for the lecture(format is HH:MM:SS): ";
    validEnd=getTimeFromUser(end);
    //if both times are valid then print the times
    if(validStart&&validEnd){
        cout<<"The lecture starts at ";
		print24Hour(start);
		cout<< " and ends at ";
		print24Hour(end);
		cout<<endl;
	}
	else
		cout<<"The time entered is invalid!\n";
	return 0;
}

bool getTimeFromUser(Time &time){
	string input;
	string hour;
	string minute;
	string second;
	int hr, min, sec;
	cin>> input;
    //used to find location of the semicolon
	int first_colon = input.find(":");
	int second_colon = input.find_last_of(":");
	int str_length = input.size();
    //store string value of each time
	hour=input.substr(0, first_colon);
	minute=input.substr(first_colon+1,second_colon-first_colon-1);
	second=input.substr(second_colon+1,str_length-1);
    //store integer value of each time
	hr=atoi(hour.c_str());
	min=atoi(minute.c_str());
	sec=atoi(second.c_str());
    //if times are valid,set these times in the time class object
	if(0<=hr && hr<=23 && 0<=min && min<=59 && 0<=sec&&sec<= 59){
		time.setHours(hr);
		time.setMinutes(min);
		time.setSeconds(sec);
		return true;
    }
	else
		return false;
}
void print24Hour(Time &time){
    //calling accessors  instead to print out the time
	cout<<setfill('0')<<setw(2)<<time.getHours()<< ":";
	cout<<setfill('0')<<setw(2)<<time.getMinutes()<<":";
	cout<<setfill('0')<<setw(2)<<time.getSeconds();
}
