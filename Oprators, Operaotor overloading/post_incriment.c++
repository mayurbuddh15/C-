#include<iostream>
using namespace std;
class A
{
int a[5];
 	public:
	A()
	{
		for(int i=0;i<5;i++)
		a[i]=i;
		
	}
	A operator ++(int);
	void print()
	{
		for(int i=0;i<5;i++)
		{
		cout << a[i] << " ";
		cout << endl;
		}
	}
};
A A::operator ++(int x)
{
	cout << "post increment operator " << endl;
	A ret;
	for(int i=0;i<5;i++)
	ret.a[i]=a[i]++;
	return ret;
}
int main()
{
A a,b;
//a.print();
//b.print();
b=a++;
a.print();
b.print();

}
