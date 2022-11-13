#include<iostream>
using namespace std;
class A
{
int a,b;
};
class B: A
{
int m,n;


};
int main()
{
cout << "size-of base size -" << sizeof(A) << endl;
cout << "size-of derived class " << sizeof(B) << endl;
}
