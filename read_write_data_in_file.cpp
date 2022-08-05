#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file1;
	file1.open("C:/Users/91735/Desktop/shivi.txt");
	string data;
	cout<<"Enter your name : ";
	cin>>data;
	file1<<data;
	file1.close();
	
	ifstream file2;
	file2.open("C:/Users/91735/Desktop/shivi.txt",ios::in); 
	file2>>data;
	cout<<data;
	file2.close();

	
}
