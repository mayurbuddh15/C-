#include<iostream>
using namespace std;
int a=1111;
int main()
{
int a=123;
cout << "a= " << a << endl;
cout << "::a= "<< ::a << endl;
{
cout <<"in this box a= " << a << endl;
int a=234;
cout <<"a= "<<a << endl;
cout <<"::a= "<<::a << endl;

}



}
