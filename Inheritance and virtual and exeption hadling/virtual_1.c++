#include<iostream>
using namespace std;
class A
{
int x;
public:
	virtual void test1()
	{
	cout << "test 1 in A" << endl;
	}
	virtual void test2()
	{
	cout << "test 2 in A" << endl;
	}
	void test3()
	{
	cout << "test 3 in A" << endl;
	}
};
class B:public A
{
public:
	void test2()
	{
	cout << "test in B" << endl;
	}
	void test3()
	{
	cout << "test in B" << endl;
	}
};
class C:public A
{
public:
	
	void test1()
	{
	cout << "test in c" << endl;
	}
	void test3()
	{
	cout << "test in c" << endl;
	}
};
int main()
{
A *ptr;
C a1;
ptr=&a1;
ptr->test1();
ptr->test2();
ptr->test3();
}
