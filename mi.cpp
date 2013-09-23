#include "stdafx.h"
#include<iostream>
using namespace std;

int mi(int x,int n)
{
	if(n==1)
	{
		return x;
	}

	else return x=x*mi(x,n-1);

}
int main()
{
	int n;
	int y=1;
	int x=1;
	cout<<"请输入y的值：";
	cin>>n;
	cout<<"请输入x的值：";
	cin>>x;

	if(1<=y&&y<=n){
		cout<<x<<"的"<<n<<"次方是"<<mi(x,n);
    }
	return 0;
}

