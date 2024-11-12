#include<iostream>
#include<conio.h> 			//console input output

using namespace std;

int main()
{	
	p:
	system("cls");
	int choice;
	cout<<"\n\n\t\t\t*** STUDENT MANAGEMENT SYSTEM***";
	cout<<"\n\n 1. Insert Record";
	cout<<"\n\n 2. Search Record";
	cout<<"\n\n 3. Update Record";
	cout<<"\n\n 4. Delete Record";
	cout<<"\n\n 5. Show Record";
	cout<<"\n\n 6. Exit";
	cout<<"\n\n Enter Your Choice -> ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			exit(0);
		default:
			cout<<"\n\n *** Invalid Choice ***";
	}
	getch();
	goto 
	
	return 0;
}	
