/*--------------------------------------------------------------
li0102.cpp �ó����������������ĺ�
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
	cout<<"a��b�ĺ�Ϊ��"<<c<<'\n'; 
	return 0;
 }
