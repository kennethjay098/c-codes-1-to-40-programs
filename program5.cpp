#include<iostream>
using namespace std;

int main () {
	int exittime, entrytime, period;
	float charge;
	
	cout<<"please enter your entry time:";
	cin>>entrytime;
	cout<<"please enter your exit time:";
	cin>>exittime;
	
	period = exittime - entrytime;
	if(period > 1)
	charge = (period) + 1;
	else
	charge = 2;
	
	cout<<"The Charge for your packing is:"<<charge;
}
