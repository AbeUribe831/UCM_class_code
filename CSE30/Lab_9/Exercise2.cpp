#include <iostream>
#include "Stack_char.h"

using namespace std;

int main()
{
	//testing push and pull commands
	Stack_char s1;
	cout<<"isEmpty(): "<<s1.isEmpty()<<endl;
	cout<<"push(A) stack contents: ";
	s1.push('A');
	s1.print();
	cout<<"\npush(Y) stack contents: ";
	s1.push('Y');
	s1.print();
	cout<<"\nSize(): "<<s1.size()<<" Stack contents: ";
	s1.print();
	cout<<"\npop(): "<<s1.pop()<<" Stack contents: ";
	s1.print();
	cout<<"\nisEmpty(): "<<s1.isEmpty()<<endl;
	cout<<"push(D)";
	s1.push('D');
	cout<<" Stack contents: ";
	s1.print();
	cout<<"\nTop()"<<s1.top();
	cout<<" Stact contents: ";
	s1.print();
	cout<<"\npush(T)";
	s1.push('T');
	cout<<"Stack contents: ";
	s1.print();
	cout<<"\npop(): ";
	s1.pop();
	cout<<" Stack contents: ";
	s1.print();
	cout<<endl;
	return 0;

}

