#include<stdio.h>
int main()
{
	int x,i,sq=0,sqs=0,sum=0;
	for(i=1; i<=100; i++)
	{
		sqs = sqs + i*i;
		sq = sq + i;
	}
	sq = sq*sq;
	printf("%d",sq-sqs);
	return 0;
}
