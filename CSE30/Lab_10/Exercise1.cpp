#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	Queue que;
	//use try-catch to check if list is empty before atempting to remove first value
	try{
		que.dequeue();
	}catch(int e)
	{
		cout<<"dequeue() generated an error for being empty\n";
	}
	//input value to que
	for(int i=0;i<10;i++)
		que.enqueue(i);
	cout<<"print:";
	//print values in que
	que.print();
	cout<<endl;
	//print the size of the que
	cout<<endl<<"Size:"<<que.size()<<endl;
	//print the front value
	cout<<"Address of front:"<<que.front();
	cout<<endl;
	cout<<"removed value:";
	//if the list is emtpy return error message
	try{
		que.dequeue();
	}catch(int e)
	{
		cout<<"dequeue() generated an error for being empty";
	}
	//print the size que
	cout<<"\nSize:"<<que.size();
	cout<<endl;
	//print whetherit is empty
	cout<<"Empty:"<<que.isEmpty()<<endl;
	que.print();
	cout<<endl<<"removed value:";
	try{
		que.dequeue();
	}catch(int e)
	{
		cout<<"dequeue() generated an error for being empty";
	}
	cout<<endl;
	que.print();
	cout<<endl<<"Address of front:";
	cout<<" ";
	try{
		cout<<que.front();
	}catch(int e)
	{
		cout<<"front() generated an error for being emptu.";	
	}
	cout<<endl;	
	return 0;
}
