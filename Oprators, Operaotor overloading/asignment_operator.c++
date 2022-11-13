#include<iostream>
using namespace std;
class A
{
	int a[3];
	public:
	A(){
		cout << "deflult constructor " << endl;
		for(int i=0;i<3;i++)
			a[i]=0;
	}
	void print();
	A(int x,int y,int z);
	void operator =(A);


};
void A::print()
{
	for(int i=0;i<3;i++)
		cout << a[i] << " ";
	cout << endl;
}
A::A(int x,int y,int z)
{
	a[0]=x,a[1]=y,a[2]=z;
} 
void A::operator=(A temp)
{
	cout << "operator overload " << endl;
	for(int i=0;i<3;i++)
	a[i]=temp.a[i];
}
int main()
{
	A a(10,20,30),b;
	a.print();
	b.print();
	b=a;
	a.print();
	b.print();
}
