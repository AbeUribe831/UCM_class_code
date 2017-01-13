#include <iostream>
#include "LinkedList.h"

using namespace std;

//constructor
LinkedList::LinkedList()
{
	first=NULL;
	last=NULL;
}
//destructor
LinkedList::~LinkedList()
{
    //cals clear command
	clear();
}
//add new node to back
void LinkedList::insertAtBack(int valueToInsert)
{
    //dummy node
	Node* node = new Node();
    //insert valuetoInsert to val
	node->val = valueToInsert;
    //if node is empty make first point to the new node
	if(first==NULL)
		first=node;
	if(last==NULL)
		last=node;
    //make next point to new node
    else
	{
		last->next=node;
		last=node;	
	}
}
bool LinkedList::removeFromBack()
{
    //dummy node that will travel down to linked list
	Node *secondLast= first;

	if(first==NULL)
		return false;
	if(first==last){
        	delete first;
		first=NULL;
		last=NULL;
        return true;
	}
    //secondLast will iterate until it is pointing to last
	while(secondLast->next!=last){
		secondLast=secondLast->next;
	}
    //once pointed, delete last and make last point to seondLast(the placeholder)
	delete last;
	last=secondLast;
	return true;

	
}
void LinkedList::print()
{
	
	if(first!=NULL){
        //make dummy node that will travel down the linked list
        Node *n = first;
		while(n!= last)
		{
            cout<<(n->val)<<", ";
			n=n->next;
		}
	cout<<n->val;
	}
}
bool LinkedList::isEmpty()
{
	if(first==NULL)
		return true;
	else
        return false;
}
int LinkedList::size()
{
	int count=0;
    //use dummy node to travel down linked list can count nodes
    Node *node= first;
    while(node!=NULL)
	{
            count++;
            node=node->next;

	}
    return count;
}
void LinkedList::clear()
{
       while(!isEmpty())
		removeFromBack();
}
void LinkedList::insertAtFront(int valueToInsert)
{
    Node *node=new Node;
    node->val=valueToInsert;
    node->next=NULL;
    if(last==NULL)
        last=node;
    if(first==NULL)
        first=node;
    else{
        //make node point to first
        node->next=first;
        //first stores all the data of node to become new first
        first=node;
    }
 }
 bool LinkedList::removeFromFront()
 {
     //use to travel to next node
     Node *node=first;
     if(first==NULL)
         return false;
     //make list empty
     if(first==last){
        delete first;
        first=NULL;
        last=NULL;
        return true;
      }
     //will go to second node, delete first then first becomes node
     node=node->next;
     delete first;
     first=node;
     return true;
}
