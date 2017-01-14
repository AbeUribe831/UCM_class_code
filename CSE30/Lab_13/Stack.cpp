#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

template<class T>
Stack::Stack():LinkedList<T>()
{
}
Stack::~Stack()
{
}
void Stack::push(T value)
{
	insertAtFront(value);
		
}
T stack::pop()
{
	T store=first->val;
	return store;
}
T& Stack::top()
{
	return first->val;
}
