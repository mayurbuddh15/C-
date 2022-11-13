#include<iostream>
using namespace std;
class family_H
{
int cash,gold;
public:
	void scan(){
	cout << "Enter the case and gold" << endl;
	cin >> cash >> gold;
}
void print(){
	cout << "value of cash= "<< cash << endl;
	cout << "value of gold= "<< gold << endl;
}
};
int main(){
family_H m1;
m1.scan();
m1.print();


}
