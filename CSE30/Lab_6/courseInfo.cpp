#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;

struct Time{
int hour;
int minute;
int second;
};
//all are public variables that will be used for courses
struct Course{
string name;
int credits;
bool majorRequirement;
double avgGrade;
string days;
Time startTime;
Time endTime;
};

bool getTimeFromUser(Time &time, string input);

int main(){
	ifstream file;
	file.open("in.txt");
	string line;
	getline(file, line);
	int num_courses = atoi(line.c_str());
	bool startPM[num_courses];
	bool endPM[num_courses];
	Course my_courses[num_courses];
	//loop to read each index of my_courses
	for(int i=0;i<num_courses;i++){
		//loop to store values from file into my_courses
		for(int j=0;j<7;j++){
			switch(j){
				case 0:
					getline(file,line);
					my_courses[i].name=line;
					break;
				case 1:
					getline(file,line);
					my_courses[i].credits=atoi(line.c_str());
					break;
				case 2:
					getline(file,line);
					my_courses[i].majorRequirement=atoi(line.c_str());
					break;
				case 3:
					getline(file,line);
					my_courses[i].avgGrade=atof(line.c_str());
					break;
				case 4:
					getline(file, line);
					my_courses[i].days=line;
					break;
				case 5:
					getline(file, line);
					getTimeFromUser(my_courses[i].startTime,line);
					break;
				case 6:
					getline(file, line);
					getTimeFromUser(my_courses[i].endTime,line);
					//print24Hour(my_courses, num_courses,j);
					break;
			}
			
		}
		//converts 24 hour time to AM/PM for both startTime and endTime
		if(my_courses[i].startTime.hour>12){
			startPM[i]=true;
			my_courses[i].startTime.hour=my_courses[i].startTime.hour-12;
		}
		else
			startPM[i]=false;
		if(my_courses[i].endTime.hour>12){
			endPM[i]=true;
			my_courses[i].endTime.hour=my_courses[i].endTime.hour-12;
		}
		else
			endPM[i]=false;
	}
	//print schedule
	cout<<"-------------------\n";
	cout<<"SCHEDULE OF STUDENT\n";
	cout<<"-------------------\n";
	//loop for each class in my_courses
	for(int x=0;x<num_courses;x++){
	cout<<"COURSE "<<x+1<<": "<<my_courses[x].name<<endl;
		//loop for all infromation within my_courses
		for(int u=0;u<5;u++){
			switch (u){
				case 0:
					if((my_courses[x].majorRequirement)==1)
						cout<< "Note: this course is a major requirement!\n";
					else
						cout<<"Note: this coures is not a major requirement...\n";
					break;
				case 1:
					cout<<"Number of Credits: "<<my_courses[x].credits<<endl;
					break;
				case 2:
					cout<<"Days of Lectures: "<<my_courses[x].days<<endl;
					break;
				case 3:
					cout<<"Lecture Time: "<<setfill('0')<<setw(2)<<my_courses[x].startTime.hour<<":";
					cout<<setfill('0')<<setw(2)<<my_courses[x].startTime.minute<<":";
					cout<<setfill('0')<<setw(2)<<my_courses[x].startTime.second;
					if(startPM[x]==false)
						cout<<"AM";
					else
						cout<<"PM";
					cout<<"-"<<setfill('0')<<setw(2)<<my_courses[x].endTime.hour<<":";
					cout<<setfill('0')<<setw(2)<<my_courses[x].endTime.minute<<":";
					cout<<setfill('0')<<setw(2)<<my_courses[x].endTime.second;
					if(startPM[x]==false)
						cout<<"AM";
					else
						cout<<"PM";
					cout<<endl;
					break;
				case 4:
					cout<<"Stat: on average students get "<<my_courses[x].avgGrade<<"% in this course.\n";
					break;
			}
		}cout<<"-------------------\n";

	}

	return 0;
}


//use pass by references to store value of Time variables
bool getTimeFromUser(Time &time, string input){
	string hour;
	string minute;
	string second;
	
	//hold placement of colons and length of line
	int first_colon = input.find(":");
	int second_colon = input.find_last_of(":");
	int str_length = input.size();
	//store each string value for the time
	hour=input.substr(0, first_colon);
	minute=input.substr(first_colon+1,second_colon-1);
	second=input.substr(second_colon+1,str_length-1);
		//converts string value to int and stores value into time object
		time.hour=atoi(hour.c_str());
		time.minute=atoi(minute.c_str());
		time.second=atoi(second.c_str());
		//checks if times are valid
		if(0<=time.hour && time.hour<=23 && 0<=time.minute && time.minute<=59 && 0<=time.second && time.second<= 59)
			return true;
		else
			return false;
}
