#include <iostream>
using namespace std;

string combineStr(string s, int n);

int main(){
	string userString;
	//the string that will be concatenated
	int concatenate;

	cout<<"Enter a string: ";
	cin>> userString;
	cout<<"Enter a number of times: ";
	cin>>concatenate;
	if(concatenate<0){
		cout<<"Cannot use number less than zero!";
		return 0;
	}
	cout<<combineStr(userString, concatenate)<<endl;
	return 0;
}
//This function will copy string s n number of times onto another string and return it
string combineStr(string s, int n){
	string combine;
	if(n<=0)
	{
		return combine;
	}

	else{
		cout<<"The resultant string is: ";

		for(int i=0;i<n;i++)
			combine+=s;
		return combine;
	}
}
