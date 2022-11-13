#include<iostream>
using namespace std;
namespace first
{
	int x=10,y=20;
}
namespace first 
{
	int z=13;
	void fun(void){
		std::cout<< "first namespace fiuntion" << std::endl;
	}
}
namespace second
{
	int x=15,y=23;
	void fun(void){
		std::cout<< "second namespace funtion" << std::endl;
	}
}
int x=11000;
void fun(void){
	std::cout << "this is simple funtion" << std::endl;
}
int main(){
	int x=40;
	std::cout << "x= " << x << std::endl;
	std::cout << "::x" << ::x << std::endl;
	std::cout << "first::x" << first::x << std::endl;
	std::cout << "second::x" << second::x << std::endl;
}
