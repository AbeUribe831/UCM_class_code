#include <iostream>
#include <fstream>
using namespace std;

bool checkArraySort(string *array);
int binarySearchR(string *array, int first, int last, string search);

int main(){
	ifstream file_read;
	file_read.open("words_in.txt");
	string line;
	int count=0;
	//value user wants to find
	string key;
	//location of the key value
	int location;
	bool sorted;

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
			//input line in arr[i]
			for(int i=0;i<count;i++){
				getline(file_read,arr[i]);
			}
		}
	file_read.close();
	//calls fuction to check if array is sorted in asceding order
	sorted=checkArraySort(arr);
	if(!sorted){
		cout<<"Array is not sorted in ascending order, end of program"<<endl;
		return 0;
	}
	cout<<"Input value you wish to find in the array: ";
	cin>>key;
	//call binary serach algorithm
	location=binarySearchR(arr,0,count-1, key);
	 if(location==-1)
		cout<<"key value "<<key<<"  was not found in the array"<<endl;
	else
		cout<<"value "<<key<<" was located at index "<<location<<endl;
	return 0;
}

bool checkArraySort(string *array){
	for(int i=1;i<sizeof(array);i++){
		//checks if array is in ascendinding order
		if(array[i]<array[i-1])
			return false;
	}
	//if end of loop is reached then array must be sorted
	return true;
}

int binarySearchR(string *array,int first, int last, string search){
	///if recurssion continues until first is greater than last, search value does not exist
	if(first> last)
		return -1;
	int middle=(first+last)/2;
	//return index if search value is equal to array value
	if(array[middle]==search)
		return middle;
	//if middle value is greater than search value, search goes to right half of the array
	else if(array[middle]<search)
		return binarySearchR(array, middle+1, last,search);
	//if middle value is less than search value, search goes on left half of of the arrray
	else
		return binarySearchR(array,first, middle-1, search);

}
