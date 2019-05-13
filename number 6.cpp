#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	int a,b,c;
	c=0;
	
	cout<< "please enter a number: ";
		cin>> a;
	
	while(a)
	{
	
	for(b=0;b<=a;b++)
	{
		c=b+c;
	}

	cout<<"the sum of all numbers from 1 to " <<a<< " is :"<<c<< endl;
	
	cout << "please enter a number: ";
	cin>>a;
	c=0;
	
	if(a<=0)
	cout<<"thankyou!!";
	}

	_getch();
	return 0;
	
}
