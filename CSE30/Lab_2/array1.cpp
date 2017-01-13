#include <iostream>
using namespace std;

int main(){
	int arrSize=1;
	int input;
	int inputArr[arrSize];
	//this will be used to check the array is increasing
	bool increasingArr;
	cout<<"Enter the size of the array: ";
	cin>>arrSize;
	//Will check if array size is valid
	if(arrSize<=0){
		cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
		return 0;
	}
	else{
		cout<<endl;
		cout<<"Enter the number in the array, separated by a space, and press enter: ";
		//declares the new array size for inputArr[]
		inputArr[arrSize];
		//This loop will store each input in the array
		for(int i=0;i<arrSize;i++){
			cin>>input;
			inputArr[i]=input;
		}
		//will check if value of inputArr is increasing
		//stops at arrSize-1 to avoid making out of array bounds check
		for(int x=0;x<arrSize-1;x++){
			if(inputArr[x]<inputArr[x+1])
				increasingArr=true;
			else{
				increasingArr=false;
				break;
			}
		}
		if(increasingArr==true)
			cout<<"This is an increasing array"<<endl;
		else
			cout<<"This is NOT an increasing array/n"<<endl;
	}
return 0;
}
