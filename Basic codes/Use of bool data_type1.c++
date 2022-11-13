#include<iostream>
using namespace std;
bool process();
int main()
{
	bool response;
	response=process();
	if(response==true)
		cout << "process is continue..." << endl;
	else
		cout << "process is terminated..." << endl;
}
bool process()
{
	char ans;
	cout << "continue process(y/n)???" << endl;
	cin >> ans;
	if(ans=='y')
		return true;

	else
		return false;
}
