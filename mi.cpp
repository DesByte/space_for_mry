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
	cout<<"������y��ֵ��";
	cin>>n;
	cout<<"������x��ֵ��";
	cin>>x;

	if(1<=y&&y<=n){
		cout<<x<<"��"<<n<<"�η���"<<mi(x,n);
    }
	return 0;
}

