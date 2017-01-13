#include <iostream>
using namespace std;

int main(){
	int arrSize;
	int input;
	int negCounter=0;
	cout<<"Enter the size of a 2D array: ";
	cin>>arrSize;
	//checks max array size
	if(arrSize>10||arrSize<1){
		cout<<"ERROR: your array is too large! Enter 1 to 10.\run";
		return 0;
	}
	else{
		int twoDArr[arrSize][arrSize];
		//nested loop to input each value in twoD array
		for(int i=0;i<arrSize;i++){
			cout<<"Enter the values in the array for row "<<i<<", separated by a space, and press enter: ";
			for(int j=0;j<arrSize;j++){
				cin>>input;
				twoDArr[i][j]=input;
				//count negative numbers in twoD array
				if(twoDArr[i][j]<0){
					negCounter++;
				}
				else{
				}
			}
		}
		cout<<"There are "<<negCounter<<" negative numbers!\n";

		return 0;
	}
}
