#include <iostream>
using namespace std;

int main(){
	string array;
	cout<<"Enter the string here to recieve its reverse: ";
	cin>>array;
	cout<<endl;
	//loops from end of character
	for(int i=array.size()-1;i>=0;i--){
		cout<<array[i];
	}
	cout<<endl;

	return 0;
}
