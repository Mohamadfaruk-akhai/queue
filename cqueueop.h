int cqinsert(int Q[],int *F,int *R,int e,int n)
{
	if(*R==n)
		*R=1;
	else
		*R=*R+1;
	if(*F==*R)
	{
		printf("circular queue overflow\n");
		return 0;
	}
	else
	{
	Q[*R] = e;
	if(*F==0)
	*F=1;
	return 1;
	}		

}
int cqdelete(int Q[],int *F,int *R,int n)
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
			return a;
		}
		
		if(*F==n)
			*F=1;
		else
			*F=*F+1;
			return a;	
	}
}
