#include<iostream>
using namespace std;
class A
{
	int a[5];
	public:
	A()
	{
		for(int i=0;i<5;i++)
		{
			a[i]=i;
		}
	}
	A operator -();
	void get()
	{
		int i;
		for(i=0;i<5;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
};
A A::operator -(){
	A ret;
	for(int i=0;i<5;i++)
		ret.a[i]=-a[i];
	return ret;
}


int main()
{
	A a,b;
	a.get();
	b.get();
	b=-a;
	b.get();
}
