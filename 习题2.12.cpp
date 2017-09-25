#include<iostream>
using namespace std;
int main(void)
{
	int a=200,b=9;
	a=a^b;
	b=b^a;
	a=a^b;
	cout<<a<<endl;
	cout<<b;
	return 0; 
 } 
