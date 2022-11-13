#include<iostream>
using namespace std;
class A
{
public:
int a;
	void scan1()
	{
	cout << "Enter the value of a=" << endl;
	cin >> a;
	}
	void print1()
	{
	cout << "value of a is - "<< a << endl; 
	}
};
class B :protected A
{
int m;
public:
	void scan()
	{
	cout << "Enter the value of m  and x- "<< endl;
	cin >> m >> a;
	} 
	void print()	
	{
	cout << "value of m and x is -" << m  << a<< endl;
	}
};
int main()
{
A a1;
//a1.scan();	// valid
a1.a=123;	//invalid 
//a1.print();	// valid 
B b1;
//b1.a=123;	// invalid beacaue protected data cant access in main
//b1.scan();
//b1.print();
//b1.scan1();	// invalid 
//b1.print1();	// invalid 
//b1.m=1234;
b1.scan();
b1.print();
	







}
