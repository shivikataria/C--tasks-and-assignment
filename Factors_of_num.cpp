#include<iostream>
using namespace std;

class FactorOfaNum
{
	public:
		
		int number;
		
		FactorOfaNum(int v)
		{
			int i;
			number =v;
			cout<<number<<endl<<"Factors of entered number are: \n";//14
			
			for(i=1;i<=number/2;i++)
			{
				if(number%i==0)
				{
					cout<<i<<endl;
				}
			}
			
		}
		
	
};
int main()
{
	int n;
	cout<<"Enter any number:";
	cin>>n;
	FactorOfaNum obj(n);
	
	
	
	return 0;
}
