#include<iostream>
using namespace std;
namespace first
{
	int x=10,y=20;
}
namespace second
{
	int x=234,y=23;
}
void no(void){
	cout << "hello this is outside funtion " << endl;
}
int main()
{
	using namespace first;
	cout << "x= " << x << "y= "<< y << endl;
	no();

}
