#include<stdio.h>
long long int pal(long long int);
int main()
{
	long long int x,i,product=0,z;
	for(x=999; x>=100; x--){
	for(i=x; i>=100; i--)
	{	
		z =pal(i*x); 
		if(z)
		{
			if(z>=product)
			product = z;
		}
	}}
	printf("%lld",product);
}
long long int pal(long long int a)
{
	long long int b,r,n=0,c;
	c = a;
	while(c)
	{
		r = c%10;
		n = n*10+r;
		c = c/10;
	}
	if(n==a)
	return a;
	return 0;
}
