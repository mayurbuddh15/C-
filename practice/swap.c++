#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
int i=100,j=200;
swap(i,j);
cout <<  "i= " << i << "j= " << j << endl;
}
void swap(int &p,int &q)
{
cout << "swap funciton " << endl;
int temp;
temp=p;
p=q;
q=temp;
}
