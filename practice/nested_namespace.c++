#include<iostream>
using namespace std;
namespace first{
	int x=10;
namespace second{
		int x=100;
namespace third{
		int x=1000;	
}
	}
}
int main(){
cout << first::x << endl;
cout << first::second::x << endl;
cout << first::second::third::x << endl;


}
