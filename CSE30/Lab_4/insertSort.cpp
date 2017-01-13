#include <iostream>
using namespace std;

int main(){
	
	int arrSize;
	int input;	
	int save;
	int j;	
	cout<<"Enter array Size here: ";
	cin>>arrSize;
	int arr[arrSize];
	cout<<"Intput numbers for array, seperate by space: ";
	for(int i=0;i<arrSize;i++)
		cin>>arr[i];
	for(int i=1;i<arrSize;i++){
		save=arr[i];
		j=i;
		while(j>0&&save<arr[j-1]){
			arr[j]=arr[j-1];
			j=j-1;
		}
		arr[j]=save;
	}
	for(int x=0;x<arrSize;x++)
		cout<<arr[x]<<", ";
	return 0;
}
