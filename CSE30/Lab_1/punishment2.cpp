#include <iostream>
using namespace std;

int main(){
        int num;
	int typo;
        string sentence;

        cout<<"Enter number of lines for the punishment: ";
        cin>>num;
	cout<<"Enter line you wish to see a typo: ";
	cin>>typo;
	
        if(num<=0)
                cout<<"You entered an incorrect value for the number of lines!\n";
        else if(typo<0||typo>num)
		cout<<"You entered an incorret value for the line typo!\n";	
	else{
		//sentence itteration
                for(int i=0;i<num;i++){
			//Typo check 
			if(typo==i+1)
				cout<<"Eye vill always juice AWPject Ori3nt3d Progummings\n"; 
                       else
				cout<<"I will always use object oriented programming\n";
		}
	}
        return 0;
}

