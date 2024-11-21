// Display "morning," "afternoon," "evening," or "night" based on an input hour (0-24)

#include<iostream>
using namespace std;
int main(){
	
	int hour;
	cout<<" Enter a time :";
	cin>>hour;
	
	switch (hour){
		case 1: case 2: case 3: case 4: case 5: case 6:
			cout<< hour <<" is morning";
			break;
		case 7: case 8: case 9: case 10: case 11: case 12:
			cout<< hour <<" is afternoon";
		case 13: case 14: case 15: case 16: case 17: case 18:
			cout<< hour <<" is evening";
		case 19: case 20: case 21: case 22: case 23: case 24:
			cout<< hour <<" is night";
	}
	return 0;
}

