#include<iostream>
using namespace std;
int i=100;
int main(){
int i=10000;
cout << "i= "<< i << endl;
cout << "::i= "<< ::i << endl;
{
i=123;
cout << "i= "<< i << endl;
cout << "::i= "<< ::i << endl; 

}



}
