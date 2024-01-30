#include<iostream>
using namespace std;

void add();
void sub();
void mul();
void div();
void mod();

int num1,num2;
float ans;

	int main () {
		int ch;
		
		do {
			cout<<"\n\t\t <<< program of operations >>>";
			cout<<"\n\n1.\tAddition\n2.\tSubtraction\n3.\tMultiplication\n4.\tDivision\n5.\tmodulus\n6.\tExit\n";
			cout<<"Enter your choice:";
			cin>>ch;
			
			switch (ch) {
				case 1:
				add();
				break;
				case 2:
				sub();
				break;
				case 3:
				mul();
				break;
				case 4:
				div();
				break;
				case 5:
				mod();
				break;
				case 6:
				return 0;
				default:
				cout<<"\n\n invalid input. please try again.\n";
			}
		}while(ch!=6);
	}
	
	void add() {
		cout<<"\n enter two numbers to add: ";
		cin>> num1>>num2;
		ans = num1+num2;
		cout<<"\n sum"<<num1<<"\n";
	}
	void sub() {
		cout<<"\n enter two numbers to sub: ";
		cin>>num1>>num2;
		ans = num1-num2;
		cout<<"\n sub"<<ans<<"\n";
	}
	void mul() {
		cout<<"enter two number to mul: ";
		cin>>num1>>num2;
		ans = num1*num2;
		cout<<"\n mul"<<ans<<"\n";
	}
	void div() {
		cout<<"enter two numbers to divide: ";
		cin>>num1>>num2;
		ans = (float) num1/num2;
		cout<<"\n quatient"<<ans<<"\n";
	}
	void mod () {
		cout<<"enter two numbers for modulus: ";
		cin>>num1>>num2;
		ans = num1%num2;
		cout<<"\nremainder is "<<ans<<"\n";
	}
