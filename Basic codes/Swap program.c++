#include<iostream>
using namespace std;
int main(){
int x=10,y=20;
swap(x,y);
cout << "x=" << x << "y=" << y << endl;
}
void swap(int &p,int &q){
cout << "swap funtion " << endl;
int temp;
temp=p;
p=q;
q=temp;
}
