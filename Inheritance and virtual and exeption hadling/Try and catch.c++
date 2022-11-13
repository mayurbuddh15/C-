#include<iostream>
using namespace std;
int abc(int a,int b)
{
	cout << "div funtion " << endl;
	if(b==0)
	{
		throw "div by zero";}
	else 
		return a/b;
}
int main()
{
	int a,b,c;
	cout << "Enter the value of a-" << endl;
	cin >> a;
	label:cout << "Enter the value of b-" << endl;
	cin >> b;

	try{
		c=abc(a,b);}
	catch(const char *p)
	{
		cout << p << endl;
		goto label;
	}

}
