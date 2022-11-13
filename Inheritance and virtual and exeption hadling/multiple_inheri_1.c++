#include<iostream>
using namespace std;
class A
{
int a;
public :
	A()
	{
	cout << "class A constructor" << endl;	
	}
	A(int p):a(p)
	{
	cout << "paramerter of a" << endl;	
	}
	~A()
	{
	cout << "class A distructor " << endl;	
	}
};
class B
{
int b;
public :
	B()	
	{
	cout << "class B constructor" << endl;	
	}
	B(int x):b(x)
	{
	cout << "parameter of b" << endl;
	}
		
	~B()
	{
	cout << "class B distructor " << endl;
	}
};
class C
{
int c;
public:
	C()
	{
	cout << "class C constructor " << endl;
	}
	C(int y):c(y)
	{
	cout << "parametsi of c" << endl;	
	}
	~C()
	{
	cout << "class c distructor " << endl;
	}
};
class D :public A,public B,public C
{
int d;
public:
	D()
	{
	cout << "class D constructor " << endl;
	}
	A(int p,int x,int y,int z):A(p),B(x),C(y),d(z)
	{
	cout << "parametrise cons" << endl; 
	}
	~D()
	{
	cout << "class D distructor " << endl;
	}
};
int main()
{
D d1(123,234,345,546);
/*cout << "sizeof A-" << sizeof(A) << endl;
cout << "sizeof A-" << sizeof(B) << endl;
cout << "sizeof A-" << sizeof(C) << endl;
cout << "sizeof A-" << sizeof(D) << endl;
*/
}
