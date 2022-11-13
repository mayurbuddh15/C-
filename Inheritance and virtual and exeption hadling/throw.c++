#include<iostream>
using namespace std;
int main()
try
{
	throw 10;
	throw "abc";
	throw 12.32;
}
catch(...)
{
	cout << "catch all" <<
}




}
