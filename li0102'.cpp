/*--------------------------------------------------------------
li0102.cpp 该程序用于求两个数的和
----------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int sum(int x,int y)
{
	int z;
	z=x+y; 
	return z; 
 } 
 int main(void)
 {
 	int a,b,c;
 	cout<<"a=";
	cin>>a;
	cout<<"b=";
 	cin>>b;
	c=sum(a,b);
	cout<<"a与b的和为："<<c<<'\n'; 
	return 0;
 }
