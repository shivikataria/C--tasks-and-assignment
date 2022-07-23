#include<iostream>
using namespace std;

struct Book
{
	char author[20];
	int book_id;	
};

int main()
{
	struct Book B[50];
	
	int x;
	
	for(x=0;x<5;x++)
	{
		cin>>B[x].book_id;
		cin>>B[x].author;
	}
	for(x=0;x<5;x++)
	{
		cout<<"Book Id = "<<B[x].book_id<<" ";
		cout<<"Author Name = "<<B[x].author;
		
		cout<<endl;
	}
	
	return 0;
}
