int enqueue(int Q[],int *F,int *R,int e,int n)
{
	if(*R>=n)
	{
		printf("queue overflow\n");
		return 0;
	}
	else
	{
		*R=*R+1;
		Q[*R]=e;
		if(*F==0)
		*F=*F+1;
		return 1;		
	}
}
int dequeue(int Q[],int *F,int *R)
{
	if(*F==0)
	{
		printf("queue underflow\n");
		return 0;
	}
	else
	{

		 int a=Q[*F];
		if(*F==*R)
		{
			*F=0;
			*R=0;
		}
		else
		*F=*F+1;
		return a;		
	}
}
