#include <iostream>
using namespace std;

int main(){

	int arrSize;
	int search;
	int checks=1;
	bool found;
	cout<<"Enter the size of the array:";
	cin>>arrSize;
	//checks if arrSize is negative
	if(arrSize<1){
		cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
		return 0;
	}
	//run loop to input numbers in the array
	int array[arrSize];
	cout<<"Enter numbers in the array, separated by a space, and press enter: ";
	for(int i=0;i<arrSize;i++)
		cin>>array[i];
	cout<<"Enter a number to search for in the array: "<<endl;
	cin>>search;
	//search for desired value in the array 
	for(int x=0;x<arrSize;x++){
		if(array[x]==search){
			cout<<"Found value "<<array[x]<<" at index "<<x<<", which took "<< checks<<" checks."<<endl;
			found=true;
			break;
		}
		//if not found in this loop, it will iterate check by 1
		else if(array[x]!=search && x<arrSize-1)
			checks++;
		else{
			cout<<"The value "<<search<<" was not found in the array!"<<endl;
			found=false;
		}
	}
	//print either  best scenario, worst scenario, or neither.
	if(checks==1&&found==true)
		cout<<"We ran into the best case scenario!"<<endl;
	else if(checks==arrSize&&found==true)
		cout<<"We ran into the worst case scenario!"<<endl;


	return 0;
}
