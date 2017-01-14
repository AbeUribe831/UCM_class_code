#include <iostream>
#include <string>
#include "Stack_char.h"

using namespace std;

Stack_char::Stack_char():LinkedList_char(){}

Stack_char::~Stack_char(){}

void Stack_char::push(char value){
	//calls LinkedList fuction to add new stack
	insertAtFront(value);
		
}
char Stack_char::pop(){
	//store value before removing with linked list fuction
	char store=first->val;
	removeFromFront();
	return store;
}
char& Stack_char::top(){
	// the & symbol will return the address of value we are refurring to
	return first->val;
}
