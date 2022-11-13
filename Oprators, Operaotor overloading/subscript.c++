#include<iostream>
using namespace std;
class A
{
	int a[5];
	public:
	A()
	{	
		for(int i=0;i<5;i++)
		a[i]=i+2;
	}
	int  operator[](int asd)
	{
		return a[asd];
	}

};
int main()
{
	A obj;
	for(int i=0;i<5;i++)
	{
	cout << obj[i] << " ";
	cout << endl;
}
}
