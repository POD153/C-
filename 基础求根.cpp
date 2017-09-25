/*
该程序用于简单的一元二次方程求根
*/
#include<iostream>
#include<cstdlib>
using namespace std;
int sub(int a,int b)
{
	int z;
	z=a-b;
	return z;
}
int sum(int a,int b)
{
	int z;
	z=a+b;
	return z;
}
int fuc1(int a,int b,int c)
{
	int x1;
	x1=(sub(-b,(sub(b*b,4*a*c))^(1/2)))/(2*a);
} 
int fuc2(int a,int b,int c)
{
	int x2;
	x2=(sum(-b,(sub(b*b,4*a*c))^(1/2)))/(2*a);
}
int main()
{
	int a,b,c,x1,x2;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	x1=fuc1(a,b,c);
	x2=fuc2(a,b,c);
	cout<<"x1为"<<x1<<'\n';
	cout<<"x2为"<<x2;
	system("pause");
	return 0;
}
