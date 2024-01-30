#include<iostream>
using namespace std;

int main () {
	
	int mark;
	
	do {
		cout<<"Enter grade: ";
		cin>>mark;
		
		if (mark > 49 && mark <=100)
		cout<<"you passed.\n\n";
		else if (mark >= 0 && mark <= 49)
		cout<<"you failed.\n\n";
		else
		cout<<"Wrong input. please try again.\n\n";
	}while(mark < 0 || mark > 100);
}
