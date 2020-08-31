#include<stdio.h>
int prime(long long int);
int main()
{
	long long int x=10001,i,count=0,pr=-1;
	for(i=2; i<=100000000; i++)
	{
		if(prime(i))
		{
			count++;
		}
		if(count==x){
			pr = i;
			break;
		}
	}
	printf("%lld",pr);
	return 0;
}
int prime(long long int p)
{
	long long int i;
	for(i=2; i<=p/2; i++)
	{
		if(p%i==0)
		return 0;
	}
	return 1;
}
