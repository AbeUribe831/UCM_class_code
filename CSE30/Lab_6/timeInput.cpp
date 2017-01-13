#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct Time{
int hour;
int minute;
int seconds;
};

bool getTimeFromUser(Time &time);
void print24Hour(Time &time);

int main(){
	//will be used to check if times are valid
	bool validStart, validEnd;
	//store the star and end times	
	Time start;
	Time end;
	//call getTimeFromUser for both start and end time
	cout<<"Enter the start time for the lecture(format is HH:MM:SS): ";
		validStart=getTimeFromUser(start);
	cout<<"Enter the end time for the lecture(format is HH:MM:SS): ";
		validEnd=getTimeFromUser(end);
	//checks if both times are valid
	if(validStart&&validEnd){
		cout<<"The lecture starts at ";
		print24Hour(start);
		cout<< " and ends at ";
		print24Hour(end);
		cout<<endl;
	}
	//prints error message if not valid
	else
		cout<<"The time entered is invalid!\n";
	return 0;
}
//gets input of user and converts it to integers
bool getTimeFromUser(Time &time){
	string input;
	string hour;
	string minute;
	string second;
	//user inputs time
	cin>>input;
	//findslocation of colon and keeps track of length
	int first_colon = input.find(":");
	int second_colon = input.find_last_of(":");
	int str_length = input.size();
	//stores the string values of hour, minute and second
	hour=input.substr(0, first_colon);
	minute=input.substr(first_colon+1,second_colon-first_colon-1);
	second=input.substr(second_colon+1,str_length-1);
	//use .c_str() to convert from string to char, use atoi() to convert from char to int
	time.hour=atoi(hour.c_str());
	time.minute=atoi(minute.c_str());
	time.seconds=atoi(second.c_str());
	checks if times are valid
	if(0<=time.hour && time.hour<=23 && 0<=time.minute && time.minute<=59 && 0<=time.seconds && time.seconds<= 59)
		return true;
	else
		return false;
}
//prints time
void print24Hour(Time &time){
	//use setfill/setw to fill gaps before inserting each time
	cout<<setfill('0')<<setw(2)<<time.hour<< ":";
	cout<<setfill('0')<<setw(2)<<time.minute<<":";
	cout<<setfill('0')<<setw(2)<<time.seconds;
}
