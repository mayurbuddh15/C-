#include<iostream>
namespace first
{
	int a=10,b=20;
}
namespace first
{
	int z=13;
	void fun(void)
	{
		std::cout<<"first namespace function" <<std::endl;
	}
}
namespace second
{
	int a=123,b=234;
	void fun(void){
		std::cout << "second namespace function" << std::endl;
	}
}
int a=123;
void fun(void)
{
	std::cout << "outside function" << std::endl;
}
int main(){
	int a=400;
	std::cout << "a= "<< a << std::endl;
	std::cout << "::a= "<< ::a << std::endl;
	std::cout << "first a= "<< first::a << std::endl;
	std::cout << "second a="<< second::a << std::endl;
	fun();

}
