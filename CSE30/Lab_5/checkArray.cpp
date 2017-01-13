#include<fstream>
#include<iostream>
using namespace std;

int checkArraySort(string *arr, int arr_size);
void sortType(int sort);

int main(){
	ifstream file_read;
	file_read.open("words_in.txt");
	string line;
	int count=0;
	int sort;

	if(file_read.is_open()){
		//if we are not at the end of the file then read
		while(!file_read.eof()){
			getline(file_read,line);
			count++;
		}
	}file_read.close();
	//array of string
	string *arr = new string[count];

	file_read.open("words_in.txt");
	while(!file_read.eof()){
		for(int j=0;j<count;j++){
			getline(file_read,arr[j]);
		}
	}
	file_read.close();

	sort=checkArraySort(arr, count);
	sortType(sort);
	return 0;
}

int checkArraySort(string *arr, int arr_size){
	bool increasing=false;
	bool decreasing=false;
	//checks if increasing
	for(int i=1;i<arr_size;i++){
		//if decreasing or unsorted, exit for loop
		if(arr[i]<arr[i-1]){
			increasing=false;
			break;
		}
		increasing = true;
	}
	//checks if decreasing
	for(int j=1;j<arr_size;j++){
		//if increasing or unsorted, exit for loop
		if(arr[j]>arr[j-1]){
			decreasing=false;
			break;
		}
		decreasing = true;
	}
	if(increasing)
		return 1;
	if(decreasing)
		return -1;
	if(increasing==false && decreasing==false)
		return 0;
}
//print the behaviour of array
void sortType(int sort){
	if(sort==1)
		cout<<"The array is sorted in ascending order"<<endl;
	else if(sort==0)
		cout<<"The array is not sorted"<<endl;
	else
		cout<<"The array is sorted in descending order"<<endl;
}
