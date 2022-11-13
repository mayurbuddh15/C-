#include<iostream>
using namespace std;
class A{
	int a[3];
	public:
		A(){}
		void print();
		int operator[] (int);






};
int A::operator [] (int tem);
{
	return a[tem];
}
void get()
{
	for(int i=0;i<3;i++)
	{
		cin >> a[i];
	}
}
	void print()
	{
	for(int i=0;i<3;i++)
	cout << a[i] <<  endl;
	}

int main()
{
	A a,b;
	a.get();
	a.print();
}
