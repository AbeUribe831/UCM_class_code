#include <iostream>
#include "HTable.h"

using namespace std;

HTable::HTable()
{
	//fix the data table to 23 indecies 
	max_size=23;
	dt=new data[max_size];
	for(int i=0;i<max_size;i++)
	{
		dt[i].key=-1;
		dt[i].value="N/A";
	}
	numel=0;
}
HTable::HTable(int t_size)

{
	//fix the data table to t_size indecies
	max_size=t_size;
	dt=new data[max_size];
	for(int i=0;i<max_size;i++)
	{
		dt[i].key=-1;
		dt[i].value="N/A";
	}
	numel=0;
}
int HTable::hash(int &k)
{
	int index=k%max_size;
	return index;

}
int HTable::rehash(int &k)
{
	int index=(k+1)%max_size;
	return index;

}
int HTable::add(data &d)
{
	//checks if table is full
	if(numel==max_size)
	{
		return -1;
	}
	else
	{
		int index=hash(d.key);
		int i = index;
		//run if no collision
		if(dt[i].key==-1)
		{
			dt[i].key=d.key;
			dt[i].value=d.value;
			numel++;
			return 0;
		}
		//run if collision
		//rehash to find an empty spot in the data table to input
		int otherIndex=rehash(index);
		while(otherIndex<max_size)
		{
			if(dt[otherIndex].key==-1)
			{
				dt[otherIndex].key=d.key;
				dt[otherIndex].value=d.value;
				numel++;
				return 0;
			}
			otherIndex++;
		}
		//run this for loop if it can add a value that is behind the rehashed value
		for(int j=0;j<otherIndex;j++)
		{
			if(dt[j].key==-1)
			{
				dt[j].key=d.key;
				dt[j].value=d.value;
				numel++;
				return 0;
			}
		}
	}
}
int HTable::remove(data &d)
{
	//checks if table is empty
	if(numel==0)
	{
		return -1;
	}
	//if not empty then run through entire loop to find item to delete
	else
	{
		for(int i=0; i<max_size;i++)
		{
			if(dt[i].key==d.key)
			{
				dt[i].key=-1;
				dt[i].value="N/A";
				numel--;
				return 0;
			}
		}
		return -1;
	}

}
void HTable::output()
{

	cout<<"Table if Contents: "<<endl;
	for(int i=0;i<max_size;i++)
	{
		cout<<i<<" -> "<<dt[i].key<<" "<<dt[i].value<<endl;
	}	
	cout<<"There are "<<numel<<" data elements in this table"<<endl;

}
