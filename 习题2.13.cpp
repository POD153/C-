#include<iostream>
using namespace std; 
int main()
{
	double x,y;
	int a,b,c;
	cout<<"x��ֵΪ";
	cin>>x;
	cout<<"y��ֵΪ";
	cin>>y;
	a=(x*x+y*y)>1&&1;
	b=x>-2&&x<2;
	c=y>-2&&y<2;
    cout<<a&&b&&c;
	return 0;
}
