#include <iostream>
using namespace std;

int main(){

	int arrSize;
	int tempMax;
	int max;
	cout<<"Enter the size of the array: ";
	cin>>arrSize;

	if(arrSize<1)
		cout<<"ERROR: you entered an incorrect value for the array size!";

	int array[arrSize];
	cout<<"Enter the numbers in the array, separated by a space, and press enter: ";
	for(int i=0;i<arrSize;i++){
		cin>>array[i];
	}

	for(int j=arrSize-1;j>=0;j--){
		tempMax=0;
		max=array[tempMax];
		
		for(int x=1;x<=j;x++){
			if(array[x]>array[tempMax]){
				max=array[x];
				tempMax=x;
			}
		}
	if(tempMax!=j){
		int temp=array[tempMax];
		array[tempMax]=array[j];
		array[j]=temp;
	}

	}
	for(int z=0;z<arrSize;z++)
		cout<<array[z]<<endl;
	return 0;
}
