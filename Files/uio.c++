#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	char ch;
	fstream fin,fout;
	fin.open(argv[1],ios::in);
	fout.open(argv[2],ios::out);	
	
	while((ch=fin.get())!=-1)
	fout << ch;
fin.close();
fout.close();
}
