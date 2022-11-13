#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	friend ostream& operator << (ostream &out,A &obj);
};
ostream& operator << (ostream &out,A &obj)
{
	out << "operator  << function " << endl;
	out << "x= " << obj.x << endl;
	out << "y= " << obj.y << endl;
	return out;
}
int main()
{
	A obj(10,20),obj1(11,12),obj2(33,44);
	cout << obj << obj1 << obj2;
}
