// Check if character is in upper or lower case

#include<iostream>
using namespace std;
int main(){
	
	char _;
	cout<<"Enter an alphabet : ";
	cin>>_;
	
	if(_=='a' ||_== 'b'||_=='c'||_=='d' ||_=='e'||_=='f'||_=='g'||_=='h'||_=='i'||_=='j'||_=='k'||_=='l'||_=='m'||_=='n'||_=='o'||_=='p'||_=='q'||_=='r'||_=='s'||_=='t'||_=='u'||_=='v'||_=='w'||_=='x'||_=='y'||_=='z' ){
		cout<<"Alphabet is in lower case. "<<endl;
	}
	else {
		cout<<"Alphabet is in upper case. "<<endl;
	}
	
	return 0;
}
