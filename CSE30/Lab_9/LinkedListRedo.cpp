#include <iostream>
#include "LinkedList.h"
using namespace std;
LinkedList::LinkedList()
{
	first=NULL;
	last=NULL;
}
LinkedList::~LinkedList()
{
	clear();
}
void LinkedList::insertAtBack(int x)
{
	Node *temp = new Node;
	temp->val=x;
	if(first==NULL)
		first=temp;
	if(last==NULL)
		last=temp;
	else{
		last->next=temp;
		last=temp;
	}
}		
bool LinkedList::removeFromBack()
{
	Node *secondLast=first;
	if(first==NULL)
		return false;
	if(first==last){
		delete first;
		first=NULL;
		last=NULL;
		return true;
	}
		while(secondLast->next!=last){
			secondLast=secondLast->next;
		}
		delete last;
		last=secondLast;
		return true;
}
void LinkedList::print()
{
	if(first!=NULL){
		Node *temp = first;
        while(temp!=last){
			cout<<temp->val<<",";
            temp=temp->next;
        }cout<<temp->val;
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
	if(first==NULL)
		return 0;
	else{
		Node *temp = first;
		int count=0;
		while(temp->next!=NULL){
			count++;
			temp=temp->next;
		}
		return count;
	}
}
void LinkedList::clear()
{
	while(!isEmpty()){
		removeFromBack();
	}
}
void LinkedList::insertAtFront(int valueToInsert)
{
	Node *temp = new Node();
	temp->val=valueToInsert;
	temp->next=NULL;
	if(first==NULL)
		first=temp;
	if(last==NULL)
		last=temp;
	else{
		temp->next=first;
		first=temp;
	}
}
bool LinkedList::removeFromFront()
{
	Node *temp=first;
	if(first==NULL)
		return false;
	if(first==last){
		delete first;
		return true;
	}
	else{
		temp=temp->next;
		delete first;
		first=temp;
		return true;
	}
}
