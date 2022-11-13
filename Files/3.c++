#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	if(argc!=2)
	{
	cout << "Usage:/a.out file name " <<endl; 
	return 0;
	}
	//char s[20];
	ifstream fin(argv[1]);
	if(fin.fail())
	{
	cout << "file is not present " << endl;
	return 0;
	}	
string s;
//fin >> s;
//fin.getline(s,20);
getline(fin,s);
cout << "string -" << s << endl;
fin.close();
}
