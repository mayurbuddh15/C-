#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	if(argc!=3)
	{
	cout << "usahghe" << endl;
	return 0;
	}
ofstream fout(argv[2]);
	ifstream fin("noname");
	char s[20];
		
while(fin>>s)
fout << s; 






}
