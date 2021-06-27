#include<iostream>
#include<string>
using namespace std;

int main() {
	string x;
	int y;
	int k;
	cout<<"Enter a string: ";
	cin>>x;
	cout<<"Enter alphabet number: ";
	cin>>y;
	k=y-1;
	cout<<y<<"th digit is: "<<x[k];
	return 0;
}
