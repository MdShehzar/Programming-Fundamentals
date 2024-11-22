// Decide if a person is eligible for a senior citizen discount (age >= 65)

#include <iostream>
using namespace std;
int main(){
	
	int age;
	
	cout<<"Enter your age : ";
	cin>>age;
	
	if (age >= 65){
		cout<<"Congrats, you are eligible for senior citizen discount! \n";
	}else {
		cout<<"Sorry, you are not eligile for senior citizen discount. \n";
	}
	
	
	return 0;
}
