#include<iostream>
using namespace std;
void swap(int &,int &);
int main(){
int a=10,b=20;
cout << "a= "<< a << "b= "<< b << endl;
swap(a,b);
cout << "a= "<< a << "b= "<< b << endl;
}
void swap(int &a,int &b){
int temp;temp=a;a=b;b=temp;




}
