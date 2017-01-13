#include <iostream>
#include "Queue_char.h"

using namespace std;

int main()
{
	//initialize que object of Queue_char
	Queue_char que;
	try{
		que.deQueue_char();
	}catch(int e)
	{
		cout<<"deQueue_char() generated an error for being empty\n";
	}
	//use enQueue_char to add characters to the que
	que.enQueue_char('D');

	que.enQueue_char('A');

	cout<<"deQueue_char():";
	//uses try-catch to see if the list is empty before attempting to remove first instance of que
	try{
		que.deQueue_char();
	}catch(int e)
	{
		cout<<"deQueue_char() generated an error for being empty\n";
	}
	//print the size of the que
	cout<<"\nsize:"<<que.size()<<endl;

	que.enQueue_char('D');
	//prints 1 or 0 whether the list is empty or not
	cout<<"isEmpty()"<<que.isEmpty()<<endl<<"front:";
	//checks if the list is emtpy before returning the first value fo the list
	try{
	cout<<que.front();
	}catch(int e)
	{
		cout<<"front() generated an error for beign empty\n";	
	}
		que.enQueue_char('T');
	cout<<"\nfront:";
	try{
	cout<<que.front();
	}catch(int e)
	{
		cout<<"front() generated an error for beign empty\n";	
	}
	cout<<endl;
	return 0;
}
