#include<iostream>
using namespace std;
namespace one{
int i=123;
void no(){
cout << "this is block no one" << endl;
}
}
namespace two
{
int i=234;
void no(){
cout << "this is block no two " << endl;
}
}
int i=345;
void no(){
cout << "this block is outer block of the main" << endl;
}
int main()
{
int i=400;
cout << "i=" << i << endl << "block no one= " << one::i <<endl << "this is block no two= " << two::i<<endl <<"this is simple outside bloc" <<::i << endl;


}
