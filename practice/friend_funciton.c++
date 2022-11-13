#include<iostream>
using namespace std;
class family_h
{
int cash ,gold;
/*public:
void scan(){
cout << "Enter the cash and gold" << endl;
cin >> cash >> gold;
}*/
friend void print(family_h m1);
friend void print(family_h *m1);
friend int main();
};
void print(family_h m1){
cout << m1.cash << " " << m1.gold << endl;
}
void print(family_h *m1){
cout << m1->cash << " " << m1->gold << endl;
}
int main()
{
family_h f1;
f1.cash=10;
f1.gold=20;
cout << f1.cash << " " << f1.gold << endl;
print(f1);
print(&f1);
}
