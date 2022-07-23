#include<iostream>
using namespace std;

class Test
{
	public:
		int age;
		
	Test()
	{
		cout<<"default Constructor...1"<<endl;
	}
		
	 Test(int a)
		{
			age=a;
			cout<<"Age = "<<age<<endl;
		}
	
};

int main()
{
	Test T(39),T1;
	
	return 0;
}
