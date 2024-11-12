#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	
	cout<<"Enter marks in Programming Fundamentals :";
	cin>>a;
	
	cout<<"Enter marks in Introduction to Communication & Technology :";
	cin>>b;
	
	cout<<"Enter marks in Calculus & Analytical Geometry : ";
	cin>>c;
	
	cout<<"Enter marks in Applied Physics : ";
	cin>>d;
	
	cout<<"Enter marks in Functional English : ";
	cin>>e;
	
	//For Average
	float f= ((a+b+c+d+e)/5);
	cout<<"Your Average is :" <<f<<endl;
	
	//For Grade
	if (f>=90){
		cout<<"Grade is A+";
	}
	else if (f>=80){
		cout<<"Grade is A";
	}
	else if (f>=70){
		cout<<"Grade is B";
	}	
	else if (f>=60){
		cout<<"Grade is C";
	}
	else if (f>=50){
		cout<<"Grade is D";
	}
	else if (f<=49){
		cout<<"You have failed! Study hard next time.";
	}
		
	return 0;
}
