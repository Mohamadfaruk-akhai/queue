#include<stdio.h>
#include "Dqueueop.h"
void main()
{
	int n=4;
	int queue[n];
	int x,op,F=0,R=0,b,a,c,d;
	do
	{
		printf("1 DQinsert_rear\n2 DQdelete_front\n3 DQinsert_Front\n 4 DQdelete_Rear\n5 Quit\n");
		printf("Choose the operation you want to perform\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf("please enter the element you want to add in queue\n");
				scanf("%d",&x);
				a= DQinsert_Rear(queue,&F,&R,x,n);
				if(a!=0)
				printf("element are inserted from rear succesfully\n");
				break;
			case 2:  b= DQdelete_Front(queue,&F,&R);
				if(b!=0)
				printf("element deleted from front are%d\n",b);
				break;
			case 3: printf("please enter the element you want to add in queue\n");
				scanf("%d",&x);
				c= DQinsert_Front(queue,&F,&R,x,n);
				if(c!=0)
				printf("element are inserted from Front succesfully\n");
				break;
			case 4:  d= DQdelete_Rear(queue,&F,&R);
				if(d!=0)
				printf("element deleted from Rear are%d\n",d);
				break;
			case 5:
				break;
			default:
				break;
 		}
	}while(op<5);
	
}
