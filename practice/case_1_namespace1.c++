#include<iostream>
using namespace std;
namespace sbi
{
int accno=23;
void welcome(){
cout << "hello welcome to sbi" << endl;
}
}
namespace icici
{
int accno=34;
void welcome(){
cout << "hai welcome to icici" << endl;
}
}
int main(){
cout << sbi::accno << endl;
icici::welcome();


}
