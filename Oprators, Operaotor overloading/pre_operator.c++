#include<iostream>
using namespace  std;
class A
{
	int a[5];
	public:
	A()
	{
		for(int i=0;i<5;i++)	
			a[i]=i;
	}
	A operator ++();
	void print()
	{
		for(int i=0;i<5;i++)	
			cout << a[i] << endl;
	}
};
A A::operator++()
{
	cout << "pre-increment operator " << endl;
	for(int i=0;i<5;i++)
		++a[i];
	return *this;
}
int main()
{
	A a,b;
	b=++a;		//a2=a1.operatorZ++()
	a.print();
	b.print();
}
