#include<iostream>
using namespace std;

int main () {
	int number;
	cout<<"enter the number of month:";
	cin>>number;
	if(number >= 1 && number <= 12) {
		if (number == 1)
		cout<<"1 is january - the month of new begenings.\n\n";
		else if(number == 2)
		cout<<"2 is febuary - the month of love.\n\n";
		else if(number == 3)
		cout<<"3 is march - the month of graduation.\n\n";
		else if(number == 4)
		cout<<"4 is april - the month of summer.\n\n";
		else if(number == 5)
		cout<<"5 is may - the month of relaxation.\n\n";
		else if(number == 6)
		cout<<"6 is june - the month of classes.\n\n";
		else if (number == 7)
		cout<<" 7 is july - the month of meeting.\n\n";
		else if(number == 8)
		cout<<"8 is august - the month of hardworking.\n\n";
		else if(number == 9)
		cout<<"9 is september - the month of exams.\n\n";
		else if(number == 10)
		cout<<"10 is october - the month of celebrations.\n\n";
		else if(number == 11)
		cout<<"11 is november - the month of souls.\n\n";
		else if(number == 12)
		cout<<"12 is december - the month of giving.\n\n";
		
	}else
	cout<<"Error: the input is invalid.\n\n";
}
