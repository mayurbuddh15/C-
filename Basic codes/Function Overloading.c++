#include<iostream>
using namespace std;
int sum(int a,int b){
cout << "sum(int ,int )" << endl;
return a+b;
}
float sum(float a,float b){
cout << "sum(float ,float)" << endl;
return a+b;
}
int sum(int a,int b,int c){
cout << "sum(int ,int ,int)" << endl;
return a+b+c;
}
float sum(float a,float b,float c)
{
cout << "sum(float, float ,float)" << endl;
return a+b+c;
}
int main()
{
int x=10,y=20,z=30;
float f=22.6;
cout << sum(x,y) << endl;
cout << sum(x,y,z) << endl;
cout << sum(x,y) << endl;
cout << sum(x,y,z) << endl;
}
