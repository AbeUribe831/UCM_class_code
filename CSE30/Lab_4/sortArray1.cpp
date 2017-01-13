#include <iostream>
using namespace std;

void sortArr(bool ascend, int arr[], int size);

int main(){

	int arrSize;
	int tempMax;
	int max;
	int order;
	cout<<"Enter the size of the array: ";
	cin>>arrSize;
	//check if array size is valid
	if(arrSize<1){
		cout<<"ERROR: you entered an incorrect value for the array size!";
		return 0;
	}
	int array[arrSize];
	cout<<"Enter the numbers in the array, separated by a space, and press enter: ";
	for(int i=0;i<arrSize;i++){
		cin>>array[i];
	}
	//choose whether array ascends or descends
	cout<<"Sort in ascending(1) or descending(0) order? ";
	cin>>order;
	//call sortArr
	sortArr(order, array, arrSize);
	for(int i=0;i<arrSize;i++)
		cout<<array[i]<<" ";
	cout<<endl;
	return 0;
}
void sortArr(bool ascend, int arr[], int size){
	int tempMax;
	int maxIndex;
	int tempMin;
	int minIndex;
	arr[size];
	//run ascending selection sort
	if(ascend==true){
		//start index from end of array.
		for(int i=size-1;i>0;i--)
		{
			maxIndex=0;
			tempMax=arr[maxIndex];
 
			for(int j=0;j<=i;j++)
			{
				//checks if current value is greater than max
				if(arr[j]>tempMax)
				{
					tempMax=arr[j];
					maxIndex=j;
				}
			}
			//perform swap if there is a new max value
			if(maxIndex!=i)
			{
				int temp=arr[maxIndex];
				arr[maxIndex]=arr[i];
				arr[i]=tempMax;	
			}		
		}
	
	}
	//run user wants arrray to descend
	else if(ascend==false){
		//start index at the end 
		for(int i=size-1;i>0;i--){
			minIndex=0;
			tempMin=arr[minIndex];
			for(int j=0;j<=i;j++){
				//check if there is a new min value
				if(arr[j]<tempMin){
					tempMin=arr[j];
					minIndex=j;
				}
			}
			//if there is a new min value the perform swap
			if(minIndex!=i){
				int temp=arr[minIndex];
				arr[minIndex]=arr[i];
				arr[i]=temp;
			}


		}

	}


}
