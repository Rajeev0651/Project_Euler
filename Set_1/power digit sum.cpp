#include<iostream>
using namespace std;

char arr[3100];
//int ans[10001]={0};
void intial_fill(){
	arr[3099]='\0';
	arr[3098]='2';
	for(int i=0;i<3098;i++){
		arr[i] = '0';
	}
}
void brain_fuck(){
	int sum,carry=0;
	for(int i=3098;i>=0;i--){
		sum = (arr[i]-'0') + (arr[i]-'0');
		sum = sum+carry;
		arr[i] = (sum%10) + 48;
		carry = sum/10;
	}
}
void extract(){
	int index;
	long int sum=0;
	for(int i=0;i<3100;i++){
		if(arr[i] != '0'){
			index = i;
			break;
		}	
	}
	for(int j=index;arr[j]!='\0';j++){
		sum += arr[j]-'0';
	}
	cout << sum<<"\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		intial_fill();
	for(int i=1;i<x;i++){
		brain_fuck();
	}
	for(int i=0;i<3100;i++){
		if(arr[i] !=)
	}
	//extract();
	}
}
