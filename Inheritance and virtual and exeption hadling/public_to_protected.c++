#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	void scan()
	{
	cout <<  "Enter the value of x" << endl;
	cin >> x;
	}
	void print()
	{
	cout << "value of x is -" << x << endl;
	}
};
class B:protected A
{
	int m;
	public:
	void scan()
	{
	cout << "Enter the value of m-" << endl;
	cin >> m >> x;
	}
	void print()	
	{
	cout <<  "value of m is -" << m  << endl;	
	cout <<  "value of x is -" << x  << endl;
	}
};
int main()
{
A a1;
//a1.scan();	//valid 
//a1.x=123;	//valid
//a1.print();	//valid 
B b1;
//b1.x=123;	// invaid protected data can not access by main 
b1.scan();
b1.print();	







}
