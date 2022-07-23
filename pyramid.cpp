#include<iostream>
using namespace std;

void some(int x)
{
	int row,col;
	
	for(row=1;row<=x;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(row%2==0)
			{
				cout<<"B ";
				
			}
			else
			{
				cout<<"A ";
			}
		}
		
		cout<<endl;
		
		}
}
int main()
{
	int r,c;
	
	cout<<"Enter the size of rows: ";
	cin>>r;
	
	cout<<"Enter the size of cols: ";
	cin>>c;
	some(r);
	return 0;
}
