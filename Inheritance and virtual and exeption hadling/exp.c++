#include<iostream>
using namespace std;
int main()
{
	int n1,n2,res;
L:
	cout<<"enter n1 & n2"<<endl;

	cin>>n1>>n2;
	try{
		if(n2==0)
			throw "dived by zero";
		res=n2/n1;


	}
	catch (const char *s)
	{
		cout<<"exception:"<<s<<endl;
		goto L; 
	}
	cout<<"res="<<res<<endl;



}
