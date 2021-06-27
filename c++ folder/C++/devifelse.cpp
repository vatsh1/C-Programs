/*
#include<iostream>
using namespace std;

int main() {
	int x;
	cout <<"     VOTER ELIGIBILITY CHECKER\n";
	cout<<"(-_-) your age: ";
	cin>>x;
	if(x>18){
		cout<<"   = congrats! you are eligible for voting";
	}
	else if (x==18){
		cout<<"   = congo! you are exact 18, you can apply for voter ID!";
	}
	else{
		cout<<"   = sorry! you are bellow 18, you cant vote";
	}
	return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
	int x;
	string y;
	cout<<"your age: ";
	cin>>x;
	y=(x>=18)? "you are eligible for voting" : "you cant vote";
	cout<<y;
}
*/
#include<iostream>
using namespace std;

int main() {
	int i=1;
	int a;
	int sum=1;
	cout<<"Enter any integer: ";
	cin>>a;
	while(i<=a){
		sum=sum*i;
		i++;
	}
	cout<<"factorial of "<<a<<" is: "<<sum;
	return 0;
}




















