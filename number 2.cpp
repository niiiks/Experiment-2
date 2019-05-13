#include <iostream>
#include <conio.h>
#include <iomanip> 
using namespace std;

int main ()
{
float a,b;
cout << fixed <<showpoint << setprecision(2);

cout<< "enter amount of gallons consumed: " ;
cin>> a;
cout << "your total monthly bill is(including water demand fee): " << (a*1.10)+35 << endl; 

cout<< "enter unpaid balance (if none input 0): " ;
cin>> b;


if (b>0) 
cout<< "your total balance is (including late charge fee): " << b+20 << endl;
else if (b=0)
cout<< "your total unpaid balance is (including late charge fee): "<< 0 << endl;
else if(b<0)
cout<< "invalid input" << endl;


if (b>0)
cout<< "your overall total bill is: " << (a*1.10)+b+20+35 << endl; 
if (b==0)
cout<<  "your overall total bill is: "<< (a*1.10)+ b+35 << endl;

_getch();
return 0;

}
