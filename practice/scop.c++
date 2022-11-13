#include<iostream>
using namespace std;
int x=123;
int main()
{
int x=234;
cout << "x=" << x << endl;
cout << "x::= " << ::x << endl;
	{
	cout << "In block x " << x << endl;
	int x=30;
	cout << "x= " << x << endl;
	cout << "::x " << ::x << endl;
	}
}
