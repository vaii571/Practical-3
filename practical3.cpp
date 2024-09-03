#include<iostream>
#define MAXSIZE 3
using namespace std;
int rear=-1,front=-1,queue[MAXSIZE],ele;
void insert()
{
	if(front==(rear+1)%MAXSIZE)
	{
		cout<<"Queue is full";
	}
	else
	{
		rear=(rear+1)%MAXSIZE;
		if(front==-1)
			{
				front=0;
			}
	    	cout<<"Enter an element";
			cin>>ele;
			queue[rear]=ele;
			cout<<"Element "<<ele<<" is inserted at "<<rear;
	}
}
void del()
{
	if((front==-1) || (front>rear))
	{
		cout<<"Queue is empty";
	}
	else
	{
		ele=queue[front];
		front=(front+1)%MAXSIZE;
		cout<<"\n"<<"Element "<<ele<<" is deleted";
		if((rear==(MAXSIZE-1)&&front==0)||(front>rear))
		{
			rear=-1;
			front=-1;
		}
	}
}
void display()
{
	int i;
		if((front==-1) || (rear==-1))
		{
			cout<<"Queue is empty";
		}
		else
		{
			cout<<"\n\t Queue elements are :\t";
			for(i=front;i<=rear;i++)
			{
				cout<<queue[i]<<"\t\n";
			}
		}
}	 	

int main()
{
	int n;
	while(n!=4)
	{
		cout<<"\nChoose the operation\n1.Insert\n2.Delete\n3.Display\n4.Exit\n";
		cin>>n;	
		switch (n)
			{
				case 1:
					insert();
					break;
				case 2:
					del();
					break;
				case 3:
					display();
					break;
			}
	}
	if(n==4)
	{
		cout<<"Exit";
	}
	return 0;
}
