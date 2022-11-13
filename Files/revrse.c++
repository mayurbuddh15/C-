#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
void aaa(char *a)
{
	int i=0,j=strlen(a)-1;
	char ch;
	for(i=0;i<j;i++,j--)
	{
		ch=a[i];
		a[i]=a[j];
		a[j]=ch;
	}
}
int main(int n,char *a[])
{
	fstream fin;
	fin.open(a[1],ios::in|ios::out);
	char s[100];
	while(fin.getline(s,100))
	{
		aaa(s);
		fin.seekp(-(strlen(s)+1),ios::cur);
		fin << s << endl;
	}
}
