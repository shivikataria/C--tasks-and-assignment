#include<iostream>
using namespace std;

template<class check>
 
int  getvalue(check a,check b)


{
	check t;
	t=a;
	a=b;
	b=t;
	return 0;
	
}

int main()
{
	int x,y;
	x=23,y=67;
	
	
	getvalue(x,y);
	
	cout << x << " " << y << endl;
    return 0;
}






