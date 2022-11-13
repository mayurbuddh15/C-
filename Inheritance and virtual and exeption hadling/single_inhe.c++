#include<iostream>
using namespace std;
class A
{
	int a;
	public :
	A()
	{
		cout << "base class constructor " << endl;
		a=123;
	}
	A(int x)
	{
		cout << "Parametrise base constuctor " << endl;
		a=x;
	}
	~A()
	{
		cout << "Base Class distructor " << endl;
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
	B(){
		cout << "Derived class constructor" << endl;
		b=234;	
	}
	B(int x,int y):A(x)
	{
		cout << "Parametrised constructo " << endl;
		b=y;
	}
	~B(){
		cout << "Derived class distructor " << endl;
	}
	void print()
	{
		A::print();
		cout << "b- "<< b <<  endl;
	}
};
int main()
{
	B b1(100,200);
	b1.print();




}
