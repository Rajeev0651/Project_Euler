#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A[20][20],mul,MAX=-1;
	for(int i=0; i<20; i++)
		for(int j=0; j<20; j++)
			cin>>A[i][j];
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<17; j++)
		{
			mul = max(MAX, A[i][j]*A[i][j+1]*A[i][j+2]*A[i][j+3]);		
		}	
	}
	for(int j=0; j<20; j++)
	{
		for(int i=0; i<17; i++)
		{
			mul = max(mul, A[i][j]*A[i][j+1]*A[i][j+2]*A[i][j+3]);		
		}	
	}
	for(int i=0; i<17; i++)
	{
		for(int j=0; j<20; j++)
		{
			mul = max(mul, A[i][j]*A[i+1][j+1]*A[i+2][j+2]*A[i+3][j+3]);		
		}	
	}
	for(int i=0; i<17; i++)
	{
		for(int j=19; j>=0; j--)
		{
			mul = max(mul, A[i][j]*A[i+1][j-1]*A[i+2][j-2]*A[i+3][j-3]);		
		}	
	}
	cout<<mul;
	return 0;		
}
