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
	int c;//C��Ϊ�����
	cout<<"������m��ֵ:";
	cin>>m;
	cout<<endl<<"������n��ֵ:";
	cin>>n;
	c=Jie(m)/(Jie(n)*Jie(m-n));
	cout<<endl<<"�����Ϊ:"<<c<<endl;
}

