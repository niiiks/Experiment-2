#include <iostream>
#include <conio.h>

using namespace std;

 int main ()
 
 {
 	int a=0;
 	
 	cout<< "counting... START!! ";
 	
 	do 
 	{
 		cout<< a;
 		cout<< "," ;
 		a++;
 		
 	}while(a<10);
 	
 	do
 	{
 		cout<<a;
 		cout<<"," ;
 		a=a+2;
 	}while(a<=30);
 	
 	_getch();
 	return 0;
 }

