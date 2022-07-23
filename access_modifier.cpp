#include<iostream>
using namespace std;

class A 
{
	private:
		int value;
	public:	
		int fun(int x)
		{
			value=x;
			cout<<value<<endl;
		}
	
};

int main()
{
	int a;
	cout<<"Enter the num : ";
	cin>>a;
	A obj;
	
	obj.fun(a);
}
