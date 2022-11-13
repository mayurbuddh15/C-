#include<iostream>
using namespace std;
class A
{
	int a=1;
	public:
	A()
	{
		//for(int i=0;i<5;i++)
		a=1;
	}
	A  operator ++();	
	void print()
	{
	cout << a <<endl;

	}
};
A A::operator ++ ()
{
	cout << "pre" << endl;	
	++a;
	return *this;
}
int main()
{
A a,b;
b=++a;
a.print();
b.print();
}
