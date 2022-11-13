#include<iostream>
using namespace std;
int main()
{
int a=100,y=20;
int *ptr=&a;
int &rp=*ptr;

cout << "a= "<< a << endl;
cout << "*ptr= " << *ptr << endl;
cout << "rp= " << rp << endl;

rp=123;
cout << "a= "<< a << endl;
cout << "*ptr= " << *ptr << endl;
cout << "rp= " << rp << endl;
cout << "&a= "<< &a << endl;
cout << "ptr= "<< ptr << endl;
cout << "&rp= "<< &rp << endl;
rp=y;
cout << "a= "<< a << endl;
cout << "*ptr= " << *ptr << endl;
cout << "rp= " << rp << endl;
cout << "ptr= "<< ptr << endl;
cout << "&rp= "<< &rp << endl;



}
