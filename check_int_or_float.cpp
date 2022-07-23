#include<iostream>
using namespace std;

class test
{
	public:
		
		int ChkNum()
		{
				char num[20];
	
				cout<<"Enter any number: ";
				cin>>num;
				int flag=0,i=0;				
					
				while(num[i++]!='\0')
				{
					if(num[i]=='.')
					{
						flag=1;
						break;	
					}				
				}	
				if(flag)
					{
						cout<<"Float...!";
					}
						
					else
						{
							cout<<"Integer...!";
						}
		}
	
};


int main()
{
	 test obj;
	 obj.ChkNum();
	
	return 0;
} 
