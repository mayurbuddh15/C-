#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	if(argc!=3)
	{
	cout << "Usage:./a.out filename" << endl;
	return 0;
	}
	char ch;
//	ifstream fin;
//	ofstream fout;
	fstream fin,fout;
	
	fin.open(argv[1]);
	fout.open(argv[2]);
	
	if(fin.fail())
	{
	cout << "file is not present" << endl;	
	return 0;
	}
while((ch=fin.get())!=-1)
{
fout << ch;
}
fin.close();
fout.close();
}
