#include<iostream>
#include<fstream>
using namespace std;
int main(int n,char * a[])
{
	fstream fin;
	fin.open(a[1],ios::in);
	char ch;
	int count=0,i;
	
	while((ch=fin.get())!=-1)
	{
		if(ch>='0' && ch <='9')
		count++;
		if(ch>='A' && ch <='Z')
		i++;
	}
	cout << count << endl;
	cout << i << endl;
	fin.close();
}
