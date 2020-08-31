#include<stdio.h>
#include<math.h>
int main()
{
	long long int n =600851475143,i,max=-1;
	while(n%2==0)
	{
		max = 2;
		n = n/2;
	}
	for(i=3; i<=sqrt(n); i+=2)
	{
		while(n%i==0)
		{	if(i>max)
			max = i;
			n=n/i;}
	}
	if(n>2)
	max = n;
	printf("%d",max);
	return 0;
}
