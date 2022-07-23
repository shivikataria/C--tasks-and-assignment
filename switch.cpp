#include<iostream>
using namespace std;

int main()
{
	
	int num1,num2,num3,maxNum,numberX,row,col,choice,s;
	
	cout<<"Enter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
		
				cout<<"Enter Number 1: ";
				cin>>num1;
				cout<<"Enter Number 2: ";
				cin>>num2;
				cout<<"Enter Number 3: ";
				cin>>num3;
				
				maxNum =(num1>num2) ? (num1>num3)?num1:num3 : (num2>num3) ? num2:num3;
 				
				cout<<"Maximum out of three numbers = "<<maxNum;
		break;
		case 2: 
		
				cout<<"Enter any number: "<<endl;
				cin>>numberX;
				
				if(numberX%2==0)
				{
					cout<<"number is EVEN...!";
				}
				else
				{
					cout<<"number is ODD...!";
				}
				
				break;
				
		case 3:
				cout<<"Enter number " ;
				cin>>s;		
				cout<<s;
				
		break;
		
		
		default: 
		cout<<"Invalid Choice entered...!";
	}
	
	return 0;
}
