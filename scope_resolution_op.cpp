#include<iostream>
using namespace std;

class X 
{
	public:
		int a,b;
		
		int fun(int x)
		{
			a=x;
			cout<<a;
		}
	
};

int main()
{
	X obj;
	cin>>obj.X::b;
	cout<<obj.X::b;
	obj.X::fun(12);
}
