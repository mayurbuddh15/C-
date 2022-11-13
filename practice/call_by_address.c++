#include<iostream>
using namespace std;
void swap(int *,int *);
int main(){
int x=10,y=20;
cout << "x= " << x << "y= " << y ;
swap(x,y);
cout << "x= " << x << "y= "<< y;
}
void swap(int *a,int *b){
int temp;
temp=*a;*a=*b;*b=temp;


}
