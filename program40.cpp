// program # 40: using a Dynamically Allocated ostringstream object

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main () {
	ostringstream outputString;
	string s1("Output of several data types "),
	s2("to an ostringstream object:"),
	s3("\n        double: "),
	s4("\n        Int: "),
	s5("\nAddress of Int: ");
	double d = 123.4567;
	int i = 22;
	outputString<<s1<<s2<<s3<<d<<s4<<i<<s5<<&i;
	cout<<outputString.str();
	
	
}
