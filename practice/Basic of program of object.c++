#include<iostream>
using namespace std;
class A
{
int cash,gold;
	void set_data()
	{
	cout << "Enter the cash and gold " << endl;
	cin >> cash >> gold;
	}
	public:
	void get_data()
	{
		set_data();
		cout << "case " << cash << endl;
		cout << "gold" << gold << endl;
	}
};
int main()
{
	A obj1;
obj1.get_data();
}
