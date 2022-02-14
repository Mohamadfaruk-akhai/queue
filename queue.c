#include<stdio.h>
#include "queueop.h"
void main()
{
	int n=4;
	int queue[n];
	int x,op,F=0,R=0,b,a;
	do
	{
		printf("1 Enqueue\n2 Dequeue\n3 Quit\n");
		printf("Choose the operation you want to perform\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf("please enter the element you want to add in queue\n");
				scanf("%d",&x);
				a=enqueue(queue,&F,&R,x,n);
				if(a!=0)
				printf("element are enqueued succesfully\n");
				break;
			case 2:  b=dequeue(queue,&F,&R);
				if(b!=0)
				printf("element dequeued from front are%d\n",b);
				break;
			case 3: 
				break;
			default:
				break;
 		}
	}while(op<3);
	
}
