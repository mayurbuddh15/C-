#include<iostream>
using namespace std;
class h
{
int cash,gold;
void scan(){
cout << "Enter the cash and gold " << endl;
cin >> cash >> gold;
}
public:
void print(){
scan();
cout << "value of case is = " << cash<< endl;
cout << "value of gold is = " << gold<< endl;
}
};
int main(){
h m1;
m1.print();
}
