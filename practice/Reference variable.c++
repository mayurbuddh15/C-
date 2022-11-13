#include<iostream>
using namespace std;
int main()
{
int x=10,y=20;
int *ptr=&x;
int * &rp=ptr;

cout <<  "x=" << x << " "<< "&x" << &x << endl;
cout << "*ptr=" << *ptr << " "<< "ptr=" <<  ptr << endl;
cout << "*rp=" << *rp << " "<< "rp=" <<rp << endl;
cout << "after modify the value " << endl;
*rp=123;
cout <<  "x=" << x << " "<< "&x" << &x << endl;
cout << "*ptr=" << *ptr << " "<< "ptr=" <<  ptr << endl;
cout << "*rp=" << *rp << " "<< "rp=" <<rp << endl;

}
