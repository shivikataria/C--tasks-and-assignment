#include<iostream>
using namespace std;

class Bank
{
	
		
		int atmPin,Balance;
		
	
	public:
		
		int fun(int pin)
		{
			atmPin =pin;
			cout<<atmPin<<endl;
		}
		
		int fun123()
		{
			cout<<"this is function...";
		}
};

int main()
{
	
	Bank B;
	B.fun(5463);
	B.fun123();
	
	return 0;
}
