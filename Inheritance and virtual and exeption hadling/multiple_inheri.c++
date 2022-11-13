#include<iostream>
using namespace std;
class A
{
	int a;
	public:
	A()
	{
		cout << "this is base class constructor" << endl;
		a=123;	
	}	
	A(int m):a(m)
	{
		cout << "this is constructor of base class" << endl;
	}
	~A()
	{
		cout << "this is base class distructor " << endl;
	}
	void print()
	{
		cout << " a - " << a << endl;
	}
};
class B :public A
{
	int b;
	public:
	B()
	{
		cout << "this is derived class constructor " << endl;
		b=234;
	}
	B(int m,int n):A(m),b(n)
	{
		cout << "constructor of derived class-1" << endl;
	}
	~B()
	{
		cout << "this is derived class distructor " << endl;
	}
	void print()
	{	
		A::print();
		cout << "b -" << b << endl;
	}
};
class C :public B
{
	int c;
	public:
	C()
	{
		cout << "this is derived-1 class constructor " << endl;
		c=456;
	}
	C(int m,int n,int o):B(m,n),c(o)
	{
		cout << "constructor derived-2" << endl;
	}

	~C()
	{
		cout << "this is derived-1 class distructor " << endl;
	}
	void print()
	{
		B::print();
		cout << "c -" << c << endl;
	}
};
int main()
{
	C c1(123,234,345);
	c1.print();
}
