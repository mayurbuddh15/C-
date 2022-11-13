#include<iostream>
using namespace std;
class son;
class father
{
	char name[20];
	float sal;
	public: 
	void scan(){
		cout << "Enter the father details " << endl;
		cin >> name >> sal;
	}
	void print(){
		cout << name << " " << sal << endl;
	}
		friend void incometax(father,son);
};
class son
{
	char name[20];
	float sal;
	public:
	void scan(){
		cout << "Enter the son detalis " << endl;
		cin >> name >> sal;
	}
	friend void incometax(father,son);
};
/*non member function */
void incometax(father f,son s){
	float total;
	total=f.sal+s.sal;
	if(total < 50000)
		cout << "we will cathc you in next year " << endl;
		else
			cout << "pay 45000  tax" << endl;
}
int main(){
father f;
son s;
f.scan();
s.scan();
incometax(f,s);
}
