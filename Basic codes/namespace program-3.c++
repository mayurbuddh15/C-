#include<iostream>
using namespace std;
namespace first{
	int x=10;
	void fun(void)
	{
		cout << "first namespace function" << endl;
	}
}
namespace second{
	int x=20;
	void fun(void)
	{
		cout << "second namespace function" << endl;
	}
}
int x=30;
void fun(void){
	cout << "fun function " << endl;
}
int main(){
	int x=40;
	cout << "x= "<< x << endl;
	cout << "::x= " << ::x << endl;
	cout << "first x= "<< first::x << endl;
	cout << "second x=" <<second::x << endl;
	fun();
	first::fun();
	second::fun();
}
