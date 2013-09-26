#include "stdafx.h"
#include<iostream>
using namespace std;
int Jie(int a)
{
	if(a==1)
		return 1;
	else return a*Jie(a-1);
}
int main()
{   
	int m,n;
	int c;//C即为组合数
	cout<<"请输入m的值:";
	cin>>m;
	cout<<endl<<"请输入n的值:";
	cin>>n;
	c=Jie(m)/(Jie(n)*Jie(m-n));
	cout<<endl<<"组合数为:"<<c<<endl;
}

