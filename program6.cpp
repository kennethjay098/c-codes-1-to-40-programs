#include<iostream>
using namespace std;

int main () {
	
	int markA,markB,markC, totalsum;
	float averagemark;
	
	cout<<"please enter the mark of the first student:";
	cin>>markA;
	cout<<"please enter the mark of the second student:";
	cin>>markB;
	cout<<"please enter the mark of the third student:";
	cin>>markC;
	totalsum= markA+markB+markC;
	averagemark = (float)totalsum/3;
	cout<<"the average mark of the three student is:"<<averagemark;
}
