#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream fin("data1",ios::in);
int a=123;
char s[20]="vector";
float f;
fin.read((char *)&a,4);
fin.read(s,sizeof(s));
fin.read((char *)&f,4);
cout  << a << " " << s << f << endl;






}
