#include <iostream>
#include <string>
#include "Queue_char.h"

using namespace std;

//This file is t he same as Queue.cpp except we are using char values 
Queue_char::Queue_char():LinkedList_char(){}

Queue_char::~Queue_char(){}

void Queue_char::enQueue_char(char value)
{
	insertAtBack(value);
}
char Queue_char::deQueue_char()
{
	char value;
	//checks if the list is empty
	if(first!=NULL)
	{
		value=first->val;
		cout<<" "<<value;
		
	}
	//throw 0 to print error message
	if(!(removeFromFront()))
		throw(0);
}
char& Queue_char::front()
{
	//checks if the list is empty
	if(first!=NULL){
		return first->val;
	}
	//throw 1 to print error message
	else
		throw(1);
}
