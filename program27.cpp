#include<iostream>
using namespace std;

void displayword(int a);

int main () {
	int number[3], i;
	cout<<"enter three number(1-3): ";
	
	for(i = 0; i < 3; i++)
	cin>>number[i];
	
	for(i = 0; i <3; i++) 
	displayword(number[i]);
}

void displayword(int a) {
	if (a == 1)
	cout<<"one\n";
	else if (a == 2)
	cout<<"two\n";
	else if (a == 3)
	cout<<"three\n";
	else
	cout<<"?\n";
}
