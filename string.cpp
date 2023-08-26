#include<iostream>
#include<string.h>
using namespace std;

bool kiemTra(string a, string b)
{
	return (a==b);
}
int main(){
	char a[] ="hello";
	string b="Hello";
	if(a==b)
		cout<<"Bang nek"<<endl;
	cout<<"bang nhau: "<<kiemTra(a,b);
	return 0;
}
