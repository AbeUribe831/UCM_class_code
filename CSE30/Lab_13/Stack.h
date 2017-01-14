#ifndef _STACK_H
#define _STACK_H

#include "LinkedList.h"
#include <iostream>
using namespace std;

//template<class T> allows you to use a general data structure
template<class T>
class Stack : public LinkedList<T> 
{
	public:
		Stack();
		~Stack();
		void push(T value);
		T pop();
		T& top();	

};


template <class T>
Stack<T>::Stack():LinkedList<T>()
{
}
template <class T>
Stack<T>::~Stack()
{
}

template <class T>
void Stack<T>::push(T value)
{
	//must inherit insertAtFront(value) fuction from LinkedList<T> before being able to use it 
	LinkedList<T>::insertAtFront(value);
		
}
template <class T>
T Stack<T>::pop()
{
	T store=LinkedList<T>::first->val;
	return store;
}
template <class T>
T& Stack<T>::top()
{
	return LinkedList<T>::first->val;
}
#endif


