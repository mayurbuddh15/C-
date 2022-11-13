#include<iostream>
using namespace std;

namespace SBI{
int accno=123;
void welcome()
{
cout << "welcome to SBI bank" << endl;
}
}
namespace ICICI{
int accno=234;
void welcome()
{
cout << "welcome to ICICI bank" << endl; 
}
}
int main()
{
cout << "SBI::accno=" << SBI::accno << endl;
ICICI::welcome();
}
