#include<iostream>
#include<fstream>
using namespace std;
struct st
{
	int x;
	char s[20];
	float f;
};
int main()
{
struct st s;
fstream fin("data1",ios::in);
fin.read((char *)&s,sizeof(s));

cout << s.x << " "  << s.s << " "<< s.f << endl;
fin.close();




}
