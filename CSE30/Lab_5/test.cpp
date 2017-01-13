#include <iostream>
using namespace std;

int operation(int a[], int& b, int c){
	int r;
	r=*a -b;
	b=*(a+1)+2;
	c=b-2;
	return (r);

}
int main(){
	int i[2], j=2, k=3;
	cin>>i[0];
	i[1]=(*i)++;
	cout<<operation(i,j,k)+j-k<<endl;
	return 0;
}
