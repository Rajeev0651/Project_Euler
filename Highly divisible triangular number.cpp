#include<bits/stdc++.h>
using namespace std;
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n / i == i) 
                cnt++; 
  
            else  
                cnt = cnt + 2; 
        } 
    } 
    return cnt-1; 
} 
int main()
{
	int x,res=0;
	for(int i=1; ; i++)
	{
		res = countDivisors(i);
	//	cout<<res<<"\n";
		if(res==500)
		{
			res = i;
			break;
		}
	}
	cout<<res;
	return 0;
}
