#include<fstream>
using namespace std;

int main(){
	ifstream file_read;
	file_read.open("words_in.txt");
	string line;
	int count=0;
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
		//insert each  into array
		for(int j=0;j<count;j++){
			getline(file_read,arr[j]);
		}
	}file_read.close();
	//initialize 
	ofstream file_out;
	file_out.open("words_out.txt");
	//write each index of array into a new file
	for(int i=0;i<count;i++){
		file_out<<arr[i]<<endl;
	}
	file_out.close();
return 0;
}
