#include<iostream>
using namespace std;

class armstrongNum
{
	public:
		
		int chkNum()
		{
			int number,rem,result=0,n;
			
			cout<<"Enter any number: ";
			cin>>number;
			n=number;
			
			while(n>0)
			{
				rem =n%10;  
			
				result = result + rem*rem*rem;
				n = n/10;
			}
		
			
			if(number==result)
			{
				cout<<"armstrong num..!";
			}
			else
			{
				cout<<"not an armstrong num..!";
			}
			
		}
		

};

int main()
{
	
	armstrongNum s;
	s.chkNum();
	
	return 0;
}
