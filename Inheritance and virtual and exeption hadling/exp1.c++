#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Enter the a" << endl;
	cin >> a;
	
	label:cout << "Enter the b" << endl;
	cin >> b;
	try
	{
		if(b==0)
		{
			throw "dividing by 0";
		}
		else 
			c=a/b;
	}
	catch(const char *p)
	{
		cout<< p<< endl; 
		goto label;
	}
	cout << "c- " << c << endl;
}
