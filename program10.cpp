#include<iostream>
using namespace std;

int main () {
	float price, discount, discountrate, total;
	cout<<"buying price: ";
	cin>>price;
	cout<<"discount rate inpercent: ";
	cin>>discount;
	discountrate = discount / 100;
	total = price - (price*discountrate);
	cout<<"for buying price php "<<price<<"discount rate "<<discountrate<<"\n";
	cout<<"the total price is php "<<total;
	
}
