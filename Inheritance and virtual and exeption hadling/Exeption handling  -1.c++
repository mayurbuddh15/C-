#include<iostream>
using namespace std;
void asd()
{
int a;
cout << "Enter the option"<< endl;
cin >> a;
	if(a==1)
	throw 10;

	else if(a==2)
	throw 'A';

	else if(a==3)
	throw 123.2f;

	else if(a==4)
	throw 234.4;
	
	else 
	cout << "invalid input" << endl;
}
int main()
{
try{
	asd();
}
catch(int a)
{
cout << "option value is " << a;
}
catch(char a)
{
cout << "option value is" << a;
}
catch(float a)
{
cout << "option vaule is" << a;
}
catch(double a)
{
cout << "option value is "<< a;
}
catch(const char *p)
{
cout << p << endl;
}
}
