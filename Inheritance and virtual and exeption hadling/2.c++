#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
		public:
		void scan()
		{
			cout << "Enter the value of x-" << endl;		
			cin>> x  ;
		}
		void print()
		{
			cout << "value of x is -" << x << endl;
		}
};
class B:public A
{
	int m;
	public:
	void scan()
	{
		cout << "Enter the value of m- and x" <<endl;	
		cin >> m >> x;
	}
	void print()
	{
		cout << "value of m is -" << m  << endl;
		cout << "value of m is -" << x  << endl;
	} 

};
int main()
{
	A b1;
	/*a1.scan();
	  b1.scan();
	  a1.print();
	  b1.print();
	 */
	//b1.m=123;
//	b1.x=123;
//	b1.print();
	B c1;
	c1.scan();
	c1.print();



}

