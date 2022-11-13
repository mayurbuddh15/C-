#include<iostream>
using namespace std;
template<class type1,class type2>
type2  sum(type1 a,type2 b)
{
return a+b;
}
int main()
{
cout << sum(10,20.3) << endl;
cout << sum('0', 'A') << endl;
cout << sum('A','1') << endl;


}
