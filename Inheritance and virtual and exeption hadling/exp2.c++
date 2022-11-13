#include<iostream>
using namespace std;
int abc(int a,int b)
{
if(b==0)
	throw "devide by 0";
else
	return a/b;
}
int main()
{
int a,b,c;
cout << "Enter the value of a" << endl;
cin >> a;
l:cout << "Enter the value of b" << endl;
cin >> b;
try{
	c=abc(a,b);}

catch(const char *p)
{
cout << p << endl;
goto l;
}
cout << "value of c is-" << c << endl;
}
