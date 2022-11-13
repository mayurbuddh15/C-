#include<iostream>
using namespace std;
class A
{
public:
	virtual void  print()
	{
		cout << "this is base" << endl;
	}
};
class B:public A
{
public :
	 void  print()
	{
	cout << "this is derived" << endl;
	}
};
int main()
{
A *bptr;
B d1;
bptr=&d1;
bptr->print();
}
