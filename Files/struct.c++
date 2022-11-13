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
struct st s={123,"hello",123.2};
fstream fin("data1",ios::out);
fin.write((char *)&s,sizeof(s));

fin.close();




}
