#include<iostream>
using namespace std;
class A
{
public:
int a;
	A()
	{
		a=234;
		cout << "value of a is -" << a << endl;
	}
	void print()
	{
	cout << "Basse class "<< endl;
	}	
};
class B:public A
{
public:
int b;
	B()
	{
		 b=123;
		cout << "vale of b -" << b << endl;
		
	}
	void print()
	{
	cout << "Derived class " << endl;
	}
};
int main()
{
B b1;
cout << b1.b << endl;
cout << b1.A::a << endl;
b1.print();
b1.A::print();

}
