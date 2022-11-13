#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
char swap(char &a,char &b)
{
	char temp;
	temp=a;
	a=b;
	b=temp;
}
float swap(float &a,float &b)
{
	char temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x=10,y=20;
	char a='A',b='B';
	float p=123.2,q=234.4;
	swap(x,y);
	cout << "after swaping" << "x= "<< x << "y= " << y << endl;
	swap(a,b);
	cout << "after swaping" << "a= "<< a << "b= "<<  b << endl;
	swap(p,q);
	cout << "after swaping" <<  "ch= "<< p << "ch1= "<< q << endl;
}
