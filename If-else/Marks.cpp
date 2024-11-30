// Print "Pass" if a student’s grade is above 50; otherwise, print "Fail."

#include <iostream>
using namespace std;
int main(){
	
	int marks;
	
	cout<<" Enter your marks : ";
	cin>>marks;
	
	if (marks >= 50 ){
		cout<<"Congrats, You have passed! \n";
	}
	else {
		cout<<"Failed, work hard next time! \n";
	}
	
	
	return 0;
	
}
