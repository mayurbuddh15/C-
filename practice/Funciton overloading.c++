#include<iostream>
using namespace std;
class COMPLEX
{
	int real,img;
	public:
	void scan(int a,int b){
		real=a,img=b;
	}
	void print(){
		if(img<0)
			cout << "complex: "<< real << img << "j" << endl;
		else
			cout << "complex: " << real << " * " << img << "j" ;
		cout << endl;
	}

	void addition(COMPLEX t1,COMPLEX t2){
		cout << "call by object" << endl;
		real=t1.real+t2.real;
		img=t1.img+t2.img;
	}
	void addition(COMPLEX *t1,COMPLEX *t2)
	{
		cout << "call by object add"<< endl;
		real=t1->real +t2->real;
		img=t1->img +t2->img;
	}
	void addition1(COMPLEX &t1,COMPLEX &t2)
	{
		cout << "call by object ref" << endl;
		real=t1.real+t2.real;
		img=t1.img+t2.img;
	}
};
int main(){
COMPLEX c1,c2,c3,c4,c5;

c1.scan(10,20);
c2.scan(10,20);
c1.print();
c2.print();
c3.addition(c1,c2);
//COMPLEX:: addition(&c3,c1,c2)
c3.print();
c4.addition(&c1,&c2);
//COMPLEX:: addition(&c4,&c1,&c2)
c4.print();
c5.addition1(c1,c2);
//COMPLEX::addition(&c5,c1,c2)
c5.print();
}
