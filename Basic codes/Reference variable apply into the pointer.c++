#include<iostream>
using namespace std;
int main(){
int a=123,y=234;
int *ptr=&a;
int* &rp=ptr;

cout << "a= " << a << "&a= "<< &a << endl;
cout << "*ptr= " <<*ptr << "ptr= "<< ptr << endl;
cout << "*rp= " << *rp << "rp= "<< rp << endl;
*rp=10;
cout << endl << "after modify" << endl;
cout << "a= " << a << "&a= "<< &a << endl;
cout << "*ptr= " <<*ptr << "ptr= "<< ptr << endl;
cout << "*rp= " << *rp << "rp= "<< rp << endl;






}
