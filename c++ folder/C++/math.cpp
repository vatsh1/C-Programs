#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a,b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"highest number is: "<<max(a,b)<<" \n";
	cout<<"lowest number is: "<<min(a,b);
	cout<<"\nsquare root of "<<a<<" is: "<<sqrt(a);
	return 0;
}
