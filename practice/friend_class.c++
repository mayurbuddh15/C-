#include<iostream>
using namespace std;
class A{
	int cash,gold;
	public:
	void scan(){
		cash=10,gold=20;
	}
friend class B;
};
class B{
	public:
		void print(A obj)
		{
			cout << obj.cash << obj.gold << endl;
		}
		void print1(A obj){
			cout << obj.cash << " " << obj.gold << endl;
		}
		void print2(A obj){
			cout << obj.cash << " " << obj.gold << endl;
		}
};
int main(){
	A a1;
	B b1;
	a1.scan();
	b1.print(a1);
	b1.print1(a1);
	b1.print2(a1);
}
