#include<iostream>
using namespace std;
bool process();
int main(){
bool res;
res=process();
if(res==true)
cout << "congratulation this process is continue" << endl;
else 
cout << "sorry sir this process is not running so far" << endl;
}
bool process(){
char ans;
cout << "press your answer if continue then Y and terminated then N " << endl;
cin >> ans;
else if(ans=='Y')
return true;
else
return false;
}
