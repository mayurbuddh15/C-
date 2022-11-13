#include<iostream>
using namespace std;
int main(){
int a[5]={10,20,30,40};
int (&r)[5]=a;
for(int i=0;i<5;i++)
cout << r[i] << " ";
cout << endl;

cout <<"a= " << a << "r= " << endl;
cout <<"a+1= "<<&a+1<<"&r+1="<< &r+1 << endl;
}
