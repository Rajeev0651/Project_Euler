#include<stdio.h>
int main()
{
	int l,h,i,j,d=0;
	for(i=1; i<=10000000000; i++)
	{
		for(j=1; j<=20; j++)
		{
			if(i%j==0 && j==20)
			{
				d=i;
				break;
			}
			if(i%j!=0)
			break;
		}
		if(d!=0)
		break;
	}
	printf("%d",d);
	return 0;
}
