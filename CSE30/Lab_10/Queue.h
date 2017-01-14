#ifndef _QUEUE_H
#define _QUEUE_H
//inherit LinkedList file
#include "LinkedList.h"

//the class Queue is derived from LinkedList class
class Queue : public LinkedList
{
	public:
		Queue();
		~Queue();
		void enqueue(int value);
		int dequeue();
		int& front();
};
#endif
