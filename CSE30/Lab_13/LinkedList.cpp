#include <iostream>
#include "LinkedList.h"

using namespace std;

//constructor
template<class T>
LinkedList<T>::LinkedList()
{
	first=NULL;
	last=NULL;
}
//destructor
template<class T>
LinkedList<T>::~LinkedList()
{
    //cals clear command
	clear();
}
//add new node to back
template<class T>
void LinkedList<T>::insertAtBack(T valueToInsert)
{
    //dummy node
	Node<T>* node = new Node<T>();
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
template<class T>
bool LinkedList<T>::removeFromBack()
{
    //dummy node that will travel down to linked list
	Node<T> *secondLast= first;

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
template<class T>
void LinkedList<T>::print()
{
	
	if(first!=NULL){
        //make dummy node that will travel down the linked list
        Node<T>* n = first;
		while(n!= last)
		{
            cout<<(n->val)<<", ";
			n=n->next;
		}
	cout<<n->val;
	}
}
template<class T>
bool LinkedList<T>::isEmpty()
{
	if(first==NULL)
		return true;
	else
        return false;
}
template<class T>
int LinkedList<T>::size()
{
	int count=0;
    //use dummy node to travel down linked list can count nodes
    Node<T>* node= first;
    while(node!=NULL)
	{
            count++;
            node=node->next;

	}
    return count;
}
template<class T>
void LinkedList<T>::clear()
{
       while(!isEmpty())
		removeFromBack();
}
template<class T>
void LinkedList<T>::insertAtFront(T valueToInsert)
{
    Node<T>* node=new Node<T>();
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
template<class T>
bool LinkedList<T>::removeFromFront()
 {
     //use to travel to next node
     Node<T>* node=first;
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
