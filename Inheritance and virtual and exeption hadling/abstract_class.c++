#include<iostream>
using namespace std;
class A
{
public :
	virtual void test()=0;
	
	void test_2()
	{
	cout << "test_2 funtion" << endl;
	}
};
class B :public class A
{
public :
	void test_1()
	{
	cout << "test_1 in B" << endl;
	}

};
int main()
{
B obj;
B.test_1();
B.test_2();
}
