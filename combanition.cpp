#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{   
	int m=1,n=1,i=1;
	int A_m=1,A_n=1,A_mn=1,C_mn=1;
	
    cout<<"������m��ֵ��";
	cin>>A_m;
	cout<<"������n��ֵ��";
	cin>>A_n;
	
	C_mn=A_m/(A_n*A_mn);
	
	for(i=m;i>=1;i--)//����m��ȫ����
	{
		A_m*=A_m;
	}
	
	for(i=n;i>=1;i--)//����n��ȫ����
	{
		A_n*=A_n;
	}

	for(i=m-n;i>=1;i--)//����m-n��ȫ����
	{
		A_mn*=A_mn;
	}
	cout<<"��M��Ԫ����ȡN��Ԫ�ص���ϸ����ǣ�"<<C_mn;
}

