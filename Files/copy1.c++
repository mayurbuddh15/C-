#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		cout << "Usage:./a.out file name" << endl;
		return 0;
	}
	char ch;
	fstream fin,fout;
	fin.open(argv[1],ios::in);
	fout.open(argv[2],ios::out);
	if(fin.fail()&&fout.fail())
	{
		cout << "file is not present " << endl;
		return 0;
	}
		while((ch=fin.get())!=-1)
			fout<<ch;

	fin.close();
	fout.close();
}
