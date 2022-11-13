#include<iostream>
using namespace std;
class A
{
//int a,b;




};
class B: protected A
{
//int m,n;

};
int main()
{
cout << "sizeof class A is  " << sizeof(A) << endl;
cout << "sizeof class B is "  << sizeof(B) << endl;


}
