#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char ** argv)
{
	if(argc!=2)
	{
	cout << "Usage:./a.out  filename" << endl;
	return 0;
	}
	ifstream fin(argv[1]);
	if(fin.fail())
	{
	cout << "file is not present" << endl;
	}
	char ch;
	while((ch=fin.get())!=-1)
	cout << ch << endl;
	fin.close();

}
