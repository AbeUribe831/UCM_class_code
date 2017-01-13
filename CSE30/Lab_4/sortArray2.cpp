#include <iostream>
using namespace std;

void sortArr(bool ascend, int arr[], int size);

int main(){

	bool order;
	int arrSize;
	int input;

	cout<<"Enter array Size here: ";
	cin>>arrSize;
	if(arrSize<=0){
		cout<<"ERROR: you entered an incorrect value for the array size!";
		return 0;
	}
	int arr[arrSize];
	cout<<"Input numbers for array, seperate by space: ";
	//input values into the array
	for(int i=0;i<arrSize;i++)
		cin>>arr[i];
	//choose whether array ascends or descends
	cout<<"sort in ascending(1) or descending(0) order? ";
	cin>>order;
	//call funciton to sort array
	sortArr(order, arr,arrSize);
	for(int j=0;j<arrSize;j++)
		cout<<arr[j]<<" ";
	cout<<endl;
	return 0;
}
void sortArr(bool ascend, int arr[], int size){
	//j is a variable useed to itterate in while loop
	int j;
	int save;
	//run if user wants array values to ascend
	if(ascend==true){
		for(int i=1;i<size;i++){
			save=arr[i];
			j=i;
			//gets saved value and  checks if the previous value is greater than saved value, if so then swap
			while(j>0&&save<arr[j-1]){
				arr[j]=arr[j-1];
				j--;
			}
			arr[j]=save;
		}
	}
	//same as first if but will make valeus descend
	else if(ascend==false){
		for(int i=1;i<size;i++){
			save=arr[i];
			j=i;
			//checks if saved valeu is greater than previous one, if so then switch
			while(j>0&&save>arr[j-1]){
				arr[j]=arr[j-1];
				j--;
			}
			arr[j]=save;
		}
	}
}
