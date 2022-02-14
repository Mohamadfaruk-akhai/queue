int DQinsert_Rear(int Q[],int *F,int *R,int e,int n)
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
int DQdelete_Front(int Q[],int *F,int *R)
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
int DQinsert_Front(int Q[],int *F,int *R,int e,int n)
{
	if(*F==0)
	{
		printf("empty\n");
		return 0;
	}
	else if(*F==1)
	{
		printf("queue Overflow\n");
		return 0;
	}
	else
	{
		*F=*F-1;
		Q[*F]=e;
		return 1;		
	}
}
int DQdelete_Rear(int Q[],int *F,int *R)
{
	if(*R==0)
	{
		printf("queue underflow\n");
		return 0;
	}

	else
	{
		int a=Q[*R];
		if(*R==*F)
		{
		*R=0;
		*F=0;
		}
		else
		*R=*R-1;
		return a;		
	}
}
