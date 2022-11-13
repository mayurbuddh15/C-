#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	if(argc!=2)
	{
	cout << "Usage:./a.out file name" << endl;
	return 0;
	}
	ifstream fin(argv[1]);
	char s[20];
	
	fin >> s;
	cout << "stirng -" << s << endl;
	fin.close();
}
