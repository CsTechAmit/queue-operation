// queue opration 

#include<stdio.h>
#include<stdlib.h>
int queue[5],f=-1,r=-1;
void rear();
void front ();
void show();
int main()
{
	int ch;
	while(1)
	{
	printf("press 1 for insert an element \n ");
	printf("press 2 for delet an elemnt\n");
	printf("press 3 for display\n");
	printf("press 4 for exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			rear();
			break;
		case 2 :
			front();
			break;
		case 3:
			show();
			break;
		case 4:
			exit(0);		
	}
	return 0;
} 
}
void rear()
{
	int ele;
	if (r==5-1)
	{
		printf("queue is full");
	}
	else 
	{
		if (f==-1)
		{
			f=0;
		}
		printf("enter the element ");
		scanf("%d",&ele);
 		r=r+1;
 		queue[r]=ele;
	}
}
void front()
{
	if (f==-1)
	{
		printf("queue is empty");
	}
	else {
		printf("delet element is %d",queue[f]);
		f=f+1;
		
	}
}
void show()
{
	int i;
	if (f==-1)
	{
		printf("queue is empty");
	}
	else
	{
		
		
		printf("queue elements......... ");
		for(i=f;i<=r;i++)
		{
			printf("%d  ",queue[i]);
		}
}
}
