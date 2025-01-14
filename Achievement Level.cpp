// Print levels of achievement based on a score.

#include<iostream>
using namespace std;
int main(){
	
	int score;
	cout<<"Enter your score to check your level of achievement (1 - 100): ";
	cin>>score;
	
	if (score >= 90){
		cout<<" Amazing! your level of acheivement is professional.";
	}
	else if (score >= 75){
		cout<<" Impressive! Your level of acheivement is advance.";
	}
	else if (score >= 50){
		cout<<" Hmm! Your level of acheivement is Intermediate";
	}
	else if (score >=1) {
		cout<<" Your level of acheivement is Beginner";
	}else {
		cout<<" Invalid score. Please enter a score between 1 to 100";
	}
	return 0;
}
