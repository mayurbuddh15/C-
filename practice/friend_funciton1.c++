#include<iostream>
using namespace std;
class family_H
{
	int cash,gold;
	public:
	friend void print(family_H);
	friend void print(family_H *);
	friend int main();
};
void print(family_H obj)
{
	cout << obj.cash << " " << obj.gold<< endl;
}
void print(family_H *obj){
	cout << obj->cash << " " << obj->gold<< endl;
}
int main()
{
	family_H f1;
	f1.cash=10;
	f1.gold=20;
	print(f1);
	print(&f1);
}
