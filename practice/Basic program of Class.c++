#include<iostream>
using namespace std;
class family_A
{
	int cash,gold;
	public:
	void set_data(){
	cout << "Enter the case and gold" << endl;
	cin >> cash >> gold;
	}
	void get_data(){
	cout << "value of case-" << cash << endl;
	cout << "value of gold-" << gold << endl;
	}

};
int main()
{
family_A obj;
obj.set_data();
obj.get_data();


}
