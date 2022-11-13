#include<iostream>
using namespace std;
int main()
{
int **p;
p=new int*[3];//for 3 r

for(int i=0;i<3;i++)
p[i]=new int[4]; // for c


for(int i=0;i<3;i++)
for(int j=0;j<4;j++)
cin >> p[i][j] ;

for(int i=0;i<3;i++)
for(int j=0;j<4;j++)
cout << p[i][j] << endl;

for(int i=0;i<3;i++)
delete []p;

}
