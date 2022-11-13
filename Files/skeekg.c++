#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("data",ios::in);

	cout <<fin.tellg() << " ";
	cout << (char)fin.get() << endl;

	fin.seekg(9,ios::beg);
	cout<< fin.tellg() << " ";
	cout << (char)fin.get() << endl;

	fin.seekg(0,ios::end);
	cout<< fin.tellg() << " ";
	cout << fin.get() << endl;

	fin.clear();

	fin.seekg(-10,ios::end);
	cout<< fin.tellg() << " ";
	cout << (char)fin.get() << endl;






}
