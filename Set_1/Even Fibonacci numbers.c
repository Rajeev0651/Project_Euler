#include<stdio.h>
int main()
{
	int sum=0,pre=0,aft=1,add=0;
	while(1)
	{	
		sum = pre + aft;
		if(sum%2==0)
		add = add+sum;
		pre = aft;
		aft = sum;
		if(aft>4000000)
		break;
	}
	printf("%d",add);
	return 0;
}
