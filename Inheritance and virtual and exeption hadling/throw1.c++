#include<iostream>
using namespace stdl;
void asd()
{
try()
	{
	throw "exception";
	}
	catch(const char *p)
	{
	cout << "in fun function" << endl;
	}
	cout << p << endl;
	throw "exception2";
}
int main()
{
	try()
		asd();
	catch(const char *p)
	{
	cout << "in this main funtion" << endl;
	cout << p << endl;
	}

}
