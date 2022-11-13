#include<iostream>
using namespace std;
class A
{
int a;
	public:
	A()
	{
	cout << "Base class constructor " << endl;
	a=100;
	}
	A(int x)
	{
	cout << "Parametrise constructor  " << endl;
	a=x;	
	}
	~A()
	{
	cout << "Base class distructor  " << endl;
	}
	void print()
	{
	cout << "a-" << a << endl;
	}
};
class B:public A
{
int b;
	public:
	B()
	{
	cout << "Derived class constructor " << endl;
	b=200;
	}
	B(int x,int y):A(x)
	{
	cout << "parametrise derived constructor " << endl;
	b=y;		
	}
	~B()
	{
	cout << "Derived class Distructor " << endl;	
	}
	void print()
	{
	cout << "b-" << b << endl;
	}

};
int main()
{
B b1(123,234);
b1.print();
b1.A::print();
}
