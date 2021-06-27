/*//print a welcome text in a separate line?
#include<iostream>
using namespace std;

int main() {
	cout<<"WELCOME IN C++ LANGUAGE!";
	return 0;
}
*/
/*//program in C++ to print the sum of two numbers.
#include<iostream>
using namespace std;

int main() {
	int x,y,s;
	cout<<"    !ADDER!\n";
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Enter second number: ";
	cin>>y;
	s=x+y;
	cout<<"sum:    "<<s;
	return 0;
}
*/
/*//Find Size of fundamental data types ?
#include<iostream>
#include<string>
using namespace std;

int main() {
	cout<<"SIZE OF FUNDAMENTAL DATATYPE\n";
	cout<<"size of int: "<<sizeof(int)<<" bytes";
	cout<<"\nsize of string: "<<sizeof(string)<<" bytes";
	cout<<"\nsize of char: "<<sizeof(char)<<" bytes";
	cout<<"\nsize of long: "<<sizeof(long)<<" bytes";
	cout<<"\nsize of long double: "<<sizeof(long double)<<" bytes";
	cout<<"\nsize of long long: "<<sizeof(long long)<<" bytes";
	cout<<"\nsize of bool: "<<sizeof(bool)<<" bytes";
	return 0;
}
*/
/*//check the upper and lower limits of integer?
#include<iostream>
#include<climits>
using namespace std;

int main() {
	cout<<"  check the upper and lower limits of integer\n";
	cout<<"__________________________________________________\n\n";
	cout<<"maximum limit of int data type: "<<INT_MAX<<endl;
	cout<<"minimum limit of int data type: "<<INT_MIN<<endl;
	cout<<"maximum limit of unsigned int data type: "<<UINT_MAX<<endl;
	cout<<"maximum limit of char data type: "<<CHAR_MAX<<endl;
	cout<<"minimum limit of char data type: "<<CHAR_MIN<<endl;
	cout<<"maximum limit of signed char data type: "<<SCHAR_MAX<<endl;
	cout<<"minimum limit of signed char data type: "<<SCHAR_MIN<<endl;
}
*/
/*//Display arithmetic operations with mixed data type ?
#include<iostream>
using namespace std;

int main() {
	float x,y;
	float s;
	char k;
	cout<<"  Display arithmetic operations with mixed data type\n";
	cout<<"________________________________________________________\n";
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Enter second number: ";
	cin>>y;
	s=x'k'y;
	cout<<"sum:   "<<s;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main() {
	int x,y,z;
	cout <<"     HIGHEST NUMBER CHECKER\n";
	cout<<"___________________________________\n";
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Enter second number: ";
	cin>>y;
	cout<<"Enter third number: ";
	cin>>z;
	if(x>=y&&x>=z){
		cout<<"highest number is "<<x;
	}
	else if (y>=x&&y>=z){
		cout<<"highest mumber is "<<y;
	}
	else{
		cout<<"highest number is "<<z;
	}
	return 0;
} 
*/
/*//CALCULATOR
#include<iostream>
using namespace std;

int main () {
	float x,y;
	char k;
	cout<<"   CALCULATOR\n";
	cout<<"________________________________________\n";
	cout<<" Enter first number: ";
	cin>>x;
	cout<<" Enter any operator: ";
	cin>>k;
	cout<<" Enter second number: ";
	cin>>y;
	switch(k){
		case '+':
			cout<<"= sum:   "<<x+y;
			break;
		case '-':
			cout<<"= substract:   "<<x-y;
			break;
		case '*':
			cout<<"= multiply:   "<<x*y;
			break;
		case '/':
			cout<<"= division quotient:   "<<x/y;
			break;
		default:
			cout<<"  Opps! sorry! this operator doesnt exist!";
			break;
	}
	cout<<"\n________________________________________";
}
*/
/*//C++ Program to Calculate Sum of Natural Numbers
#include<iostream>
using namespace std;

int main() {
	int i=1;
	int a;
	int sum=0;
	cout<<"Enter natural number: ";
	cin>>a;
	while (i<=a) {
		sum=sum+i;
		i++;
	}
	cout<<"sum:   "<<sum;
	return 0;
}
*/
/*//C++ Program to Find Factorial
#include<iostream>
using namespace std;

int main() {
	int i=1;
	unsigned int a;
	unsigned long long sum=1;
	cout<<"Enter any integer: ";
	cin>>a;
	while(i<=a){
		sum=(sum*i);
		i++;
	}
	cout<<"factorial of "<<a<<" is: "<<sum;
	return 0;
}
*/
/*//C++ Program to Display Fibonacci Series
#include<iostream>
using namespace std;

int main() {
	int a;
	int b=0;
	int c=1;
	int i=1;
	int nextterm=0;
	cout<<"Enter number: ";
	cin>>a;
	cout<<"fibonacci series: ";
	while(i<=a){
		if(i==1){
			cout<<b<<" ";
		}
		else if(i==2){
			cout<<c<<" ";
		}
		else {
		nextterm=b+c;
		b=c;
		c=nextterm;
		cout<<nextterm<<" ";
	    }
	    i++;
	}
	return 0;
}
*/
/*//reverse of a number
#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	int b;
	cout<<"Enter a number: ";
	cin>>a;
	b=a.length();
	b=b-1;
	while(b>=0){
		cout<<a[b];
		b--;
	}
	
}
*/
/*//reverse of a number by int
#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c,k=0;
	cout<<"Enter a number: ";
	cin>>a;
	c=a;    
	while(c!=0 ){
		b=c%10;
		k=k*10+b;
		c=c/10;
		
	}
	cout<<"reverse of "<<a<<" is: "<<k;
}
*/
/*//power number
#include<iostream>
using namespace std;

int main() {
	int a,b;
	int mul=1;
	cout<<"enter a number: ";
	cin>>a;
	cout<<"enter a power number: ";
	cin>>b;
	while(b>=1){
		mul=mul*a;
		b--;
	}
	cout<<mul;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
	string a,k;
	int b;
	cout<<"Enter any word: ";
	cin>>a;
	b=a.length();
	b=b-1;
	
	while(b>=0) {
		k=a[b];
		b--;
	}
	cout<<k;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	int b;
	string k;
	int i=0;
	cout<<"Enter a string: ";
	cin>>a;
	k=a;
	b=a.length();
	b=b-1;
	while (b>=0){
		k[i]=a[b];
		i++;
		b--;
	}
	
	if(k==a){
		cout<<"it is a palindrome";
	}
	else{
		cout<<"it is not a palindrome";
	}
}
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cars[0] = "Opel";
  cout << cars[1];
  return 0;
}




















