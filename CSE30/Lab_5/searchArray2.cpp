#include <iostream>
#include <fstream>
using namespace std;

bool checkArraySort(string *arr);
int binarySearchL(string *arr, int size, string value);

int main(){
	ifstream file_read;
	string line;
	int count=0;
	//value user wants to find
	string key;
	//index of key value
	int location;
	bool sorted;
	//get size of the array
	file_read.open("words_in.txt");
	if(file_read.is_open()){
		while(!file_read.eof()){
			getline(file_read,line);
			count++;
		}
	}
	file_read.close();

	string *arr = new string[count];
	file_read.open("words_in.txt");
	while(!file_read.eof()){
		for(int i=0;i<count;i++){
			getline(file_read,arr[i]);
		}
	}
	file_read.close();
	//call checkArraySort
	sorted = checkArraySort(arr);
	if(!sorted){
		cout<<"Array not sorted, end of program"<<endl;
		return 0;
	}
	cout<<"Enter key value you wish to find in the array: ";
	cin>>key;
	location=binarySearchL(arr, count, key);
	if(location==-1)
		cout<<"key value "<<key<<" was not found in the array!"<<endl;
	else
		cout<<"key value "<<key<<" was located in index "<<location<<endl;
	return 0;
}

bool checkArraySort(string *arr){
	for(int i=1;i<sizeof(arr);i++){
		//check if current value at index is greater than previous one
		if(arr[i]<arr[i-1]){
			//only false if not sorted or ascending
			return false;
		}
	}
	return true;
}
int binarySearchL(string *arr, int size, string value){
	int first=0;
	int last=size-1;
	int middle=(first+last)/2;
	//will loop while the last value is greater than the first
	while(first<=last){
		//return index if value is found
		if(arr[middle]==value)
			return middle;
		//will increment middle value if value we are looking at is less than wanted value
		else if(arr[middle]<value){
			first=middle+1;
			middle=(first+last)/2;
		}
		//will decrement middle value if it is larger than wanted value
		else{
			last=middle-1;
			middle=(first+last)/2;
		}

	}
	//return -1 if value is not in loop
	return -1;


}
