#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	if(argc!=2)
	{
	cout << "Usage:./a.out filename"<< endl;
	return 0;
	}
	ifstream fin(argv[1]);
	
	string s;
	while(fin >> s)
	cout << s << endl;
fin.close();

}
