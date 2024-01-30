#include<iostream>
using namespace std;

float computearea(float width, float height);
void logtoconsolearea(float area);

int main() {
	float rectwidth, rectheight, rectarea;
	cout<<"Enter width and height: ";
	cin>>rectwidth>>rectheight;
	rectarea= computearea(rectwidth, rectheight);
	logtoconsolearea(rectarea);
}

float computearea(float width, float height) {
	return width*height;
}
void logtoconsolearea(float area) {
	cout<<"rectangle area" <<area;
}
