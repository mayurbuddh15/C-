#include<iostream>
using namespace std;
int main(){
int x=10;
int &r=x;
cout << "r= " << r << endl;
cout << "x= " << x << endl;
cout << "&r= " << &r << endl;
cout << "&x= "<< &x << endl;
r=20;
cout << "r= " << r << endl;
cout << "x= " << x << endl;




}
