#include<iostream>
using namespace std;
class A
{
public:
int a;
	A()
	{
	cout << "this is class A constructor " << endl;
	}
	A(int x):a(x)
	{
	cout << "constructor " << endl;
	}
	~A()
	{
	cout << "this is class A distructor " << endl;
	}
};
class B:virtual public A
{
public:
int b;
	B()
	{
	cout << "this is class B constructor " << endl;
	}
	B(int x,int y):A(x),b(y)
	{
	cout << "constructor "<< endl;
	}
	~B()
	{
	cout << "this is class B distructor " << endl;
	}
};
class C:virtual public A
{
public:
int c;
	C()
	{
	cout << "this is class C constructor" << endl;
	}
	C(int x,int y):A(x),c(y)
	{
	cout << "constructor "<< endl;
	}
	~C()
	{
	cout << "this is class C distructor " << endl;
	}
};
class D:public B,public C
{
int d;
public:
	D()
	{
	cout << "this is class D constructor" << endl;
	}
	D(int w,int x,int y,int z,int p):B(w,x),C(y,z),d(p)
	{
	cout << "constructor " << endl;
	}
	~D()
	{
	cout << "this is class D distructor" << endl;
	}
void print()
{
	cout << a << endl;
//	cout << "a- " << B::a << endl;
	cout << "b- " << b << endl;	
//	cout << "a- " << C::a << endl;
	cout << "c- " << c << endl;
	cout << "d- " << d << endl;

}
};
int main()
{
D d1(123,234,345,456,567);
d1.print();
/*cout << "sizeof A- " << sizeof(A) << endl;
cout << "sizeof B- " << sizeof(B) << endl;
cout << "sizeof C- " << sizeof(C) << endl;
cout << "sizeof D- " << sizeof(D) << endl;
 */
 }











