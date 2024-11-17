// Determine if a person is eligible to vote (age >= 18)

#include <iostream>
using namespace std;
int main(){
	
	int age;
	
	cout<<" Enter your age : ";
	cin>>age;
	
	if (age >= 18){
		cout<<"Congrats, you are eligible to vote! \n";
	}else {
		cout<<"Sorry, you are not eligile to vote. \n";
	}
	
	
	return 0;
}
