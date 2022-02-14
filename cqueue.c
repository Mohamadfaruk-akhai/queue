#include<stdio.h>
#include "cqueueop.h"
void main()
{
	int n=4;
	int queue[n];
	int x,op,F=0,R=0,b,a;
	do
	{
		printf("1 CQinsert\n2 CQdelete\n3 Quit\n");
		printf("Choose the operation you want to perform\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf("please enter the element you want to add in circular  queue\n");
				scanf("%d",&x);
				a=cqinsert(queue,&F,&R,x,n);
				if(a!=0)
				printf("element are inserted succesfully\n");
				break;
			case 2:  b=cqdelete(queue,&F,&R,n);
				if(b!=0)
				printf("element delete from front are%d\n",b);
				break;
			case 3: 
				break;
			default:
				break;
 		}
	}while(op<3);
	
}
