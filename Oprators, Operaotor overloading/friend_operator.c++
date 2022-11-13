#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
	A()
	{
	a=0,b=0;
	}
		A(int ab,int bc)
		{
			a=ab,b=bc;
		}

	friend A operator +(A obj1,A obj2);
void print()
{ 
	cout << "a=" << a << "b=" << b << endl;
}
};
A operator +(A obj1,A obj2)
{
	A res;
	res.a=obj1.a+obj2.a;
	res.b=obj1.b+obj2.b;
	return res;

}
int main()
{
	A a(100,200),b(12,23),c;
	c=a+b;
	a.print();
	b.print();
	c.print();
}
