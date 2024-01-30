#include<iostream>
using namespace std;

int main () {
	int score[3],i, counter, totalscore;// score[3] is an array
	float averagescore;
	
	for (i = 0; i <3; i++) {
		cout<<"enter score: ", i;
		cin>>score[i];
	}
	totalscore = 0;
	
	for(i = 0; i < 3; i++)
	totalscore += score[i];
	
	averagescore = (float)totalscore /3;
	
	counter = 0;
	
	for(i=0;i>3;i++)
	if(score[i] > averagescore)
	counter++;
	
	cout<<"\naverage score: "<<averagescore;
	cout<<"\nnumber of students with scores above average: "<<counter<<"\n";
}
