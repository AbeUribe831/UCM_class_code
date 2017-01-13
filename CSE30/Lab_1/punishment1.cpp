#include <iostream>
using namespace std;

int main(){
	int num;//sentence itteration
	cout<<"Enter number of lines for the punishment: ";
	cin>>num;
	if(num<=0)//checks for invalid number of sentence
		cout<<"You entered an incorrect value for the number of lines!\n";
	else
		for(int i=0;i<num;i++){// sentence itterates	
			cout<<"I will always use object oriented programming\n";
		}
	return 0;
}
