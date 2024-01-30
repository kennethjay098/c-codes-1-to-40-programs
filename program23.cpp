#include<iostream>
using namespace std;

void computerarea();



int main () {
	computerarea();
}
void computerarea() {
	float width,height,area;
	cout<<"enter width:";
	cin>>width;
	cout<<"enter height: ";
	cin>>height;
	area = width*height;
	cout<<"Area"<<area;
}
