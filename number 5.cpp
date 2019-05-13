#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	int a,b,c;
	
	
	cout<< "fibonacci numbers: ";
	
	while (c<=10)
	{
		cout<<a;
		cout<<"," ;
		cout<<b; 
		
		if (c<10)
		cout<< "," ;
		
		a= b+a;
		b= b+a;
		c++;
	}
	
	_getch();
	return 0;
	
}
