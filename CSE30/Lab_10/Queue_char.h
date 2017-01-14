#ifndef _QUEUE_H
#define _QUEUE_H
#include <string>

#include "LinkedList_char.h"

class Queue_char : public LinkedList_char
{
	public:
		
		Queue_char();
		~Queue_char();
		//add new queue to back of queue
		void enQueue_char(char value);
		//remove front value
		char deQueue_char();
		//return front value 
		char& front();
};
#endif
