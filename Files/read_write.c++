#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	fstream fout("data1",ios::out);
	int x=123;
	char s[20]="vector";
	float f=123.4;
	fout.write((char *)&x,sizeof(x));
	fout.write(s,sizeof(s));
	fout.write((char *)&f,sizeof(f));

	fout.close();
}
