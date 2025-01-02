//// User-defined functions in C++
//
//returnType functionName (parameter1, parameter2,........){
// function body }
 			// returnType is void, function name is greet, 
			// empty parantheses does not have any parameters, function body is written inside {}				
//void greet(){ 
//	cout<<"Hello World!";
//}

/* #include<iostream>
using namespace std;
void greet(){
	cout<<"Hello World!";
}
int main(){
	
	greet();
	return 0;
}*/

/* #include<iostream>
using namespace std;
void printNum(int num){
	cout<<num;
}

int main(){
	int n=6;
	printNum(n);
	
	return 0;
} */

/* #include<iostream>
using namespace std;
void displayNum(int n1, float n2){
	cout<<"The int number is : " <<n1;
	cout<<"\nThe float number is : " <<n2;
}

int main(){
	int num1 = 26;
	float num2 = 25.9;
	displayNum (num1, num2);
	
	return 0;
} */

/* #include<iostream>
using namespace std;

int add(int a, int b);

 int main(){
	int a=5, b=6;
	
	cout<<"The sum of a and b is : "<< add(a,b);
	
	return 0;
}

int add(int a, int b){
	return a+b;
} */

/* #include<iostream>
using namespace std;

int add(int n1, int n2){
	return (n1+n2);
}

int main(){
	int sum;
	
	sum = add (100, 78);
	
	cout<<"100 + 78 = "<< sum;
	
	return 0;
} */

/* #include<iostream>
using namespace std;

int sum (int n1, int n2){
	return n1+n2;
}

int main(){
	int a=6, b=7;
	
	int plus = sum(a,b); 
	cout<<"Sum of a and b is: "<<plus;
	
	return 0;
} */
	// Program to print (a) Name and 10 times Pakistan (b) Father's name and 20 times Pak

/* #include<iostream>
using namespace std;
void print(){
	int i;
	for(i=1; i<=10; i++){
		cout<<i<<" Pakistan\n";
	}
}

int main(){
	string name="Shehzar";
	cout<<name<<endl;
	print();

// Below is an example of void abc(void) - no arguments passed and no return value
	return 0;
} */
/*
#include<iostream>
using namespace std;
void print(){
	for(int i=1; i<=10; i++){
		cout<<"Pak"<<endl;
	}
}
int main(){
	string name="Shehzar";
	cout<<name<<endl;
	print();
	
	string fName="Sharif";
	cout<<fName<<endl;
	print(); print();
}
*/

// Below is an example of no argument passed but a return value
/*
#include<iostream>
using namespace std;

string get_username(){
	string name;
	cout<<"Enter your username: ";
	cin>> name;
	
	return name;
}

int main(){
	string username = get_username();
	cout<<"Hello, "<< username;
	
} */

// Below is an example of argument passed but no return value

/* #include<iostream>
using namespace std;
void sayHello(string name);

int main(){
	string name;
	cout<<"Enter your name: ";
	cin>>name;
	sayHello(name);
	
	return 0;
}

void sayHello(string name){
	cout<<"Hello "<< name;
} */ 

// Below is an example of argument passed and return value too

/* #include<iostream>
using namespace std;

bool prime(int n);

int main(){
	int num;
	cout<<"Enter number: ";
	cin>> num;
	
	if (prime(num)==true){
		cout<<"Number is prime.";
	} else{
		cout<<"Number is not prime";
	}
	return 0;
}

bool prime(int n){
	if (n==0 || n==1){
		return false;
	} 
	for (int i=2; i<=n/2; ++i){
		return false;
	} 
	return true;
} */
