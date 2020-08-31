#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,res;
	for(int i=1; i<=1000; i++)
	{
		for(int j=1; j<=1000; j++)
		{
			for(int k=1; k<=1000; k++)
			{
				if(pow(j,2)+pow(k,2)==pow(i,2) && (i+j+k)==1000)
					{
						res = i*j*k;
						cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<res;
						return 0;
					}
			}
		}
	}
	cout<<"null";
	return 0;
}
