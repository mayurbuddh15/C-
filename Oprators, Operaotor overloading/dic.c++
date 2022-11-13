#include<iostream>
using namespace std;
class A
{
	int a=123;
	public:
	A()
	{
		a=123;
	}

	A operator --(int);
	void print()
	{
		cout << a << endl;
	}
};
A A::operator --(int x)
{
	cout << "post" << endl;
	A ret; 
	ret.a=a--;
	return ret;
}
int main()
{
	A a,b;
	b=a--;
	a.print();
	b.print();
}
