//  Verify if a number is even or odd

#include <iostream>
using namespace std;
int main(){
	
	int n;
	
	cout<<" Enter a number : ";
	cin>>n;
	
	if (n%2 == 0){
		cout<<"Number is even. \n";
	}else {
		cout<<"Number is odd \n";
	}
	
	
	return 0;
}
