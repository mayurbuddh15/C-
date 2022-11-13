#include<iostream>
using namespace std;
int main(){
	int **ptr,r,c,k=10;
	cout << "Enter the row and coloums" << endl;
	cin >> r >> c;

	ptr=new int *[r];
	for(int i=0;i<r;i++)
		ptr[i]=new int[c];

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			ptr[i][j]=k++;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			cout << ptr[i][j] << endl;}
	for(int i=0;i<r;i++)
		delete [] ptr[i];
	delete[] ptr;



}
