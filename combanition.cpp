#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{   
	int m=1,n=1,i=1;
	int A_m=1,A_n=1,A_mn=1,C_mn=1;
	
    cout<<"请输入m的值：";
	cin>>A_m;
	cout<<"请输入n的值：";
	cin>>A_n;
	
	C_mn=A_m/(A_n*A_mn);
	
	for(i=m;i>=1;i--)//计算m的全排列
	{
		A_m*=A_m;
	}
	
	for(i=n;i>=1;i--)//计算n的全排列
	{
		A_n*=A_n;
	}

	for(i=m-n;i>=1;i--)//计算m-n的全排列
	{
		A_mn*=A_mn;
	}
	cout<<"从M个元素中取N个元素的组合个数是："<<C_mn;
}

