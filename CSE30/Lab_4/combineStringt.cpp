#include <iostream>
using namespace std;

void combineStr(string s, int n);

int main(){
	string userString;
	int concatenate;
	
	cout<<"Enter a string: ";
	cin>> userString;
	cout<<"Enter a number of times: ";
	cin>>concatenate;
	if(concatenate<0){
		cout<<"Cannot use number less than zero!";
		return 0;
	}
	combineStr(userString, concatenate);
	return 0;
}
void combineStr(string s, int n){
	if(n==0)
	{
		return;
	}

	else{
		cout<<"The resultant string is: ";
		for(int i=0;i<n;i++)
			cout<<s;	
		cout<<endl;
	}
}
