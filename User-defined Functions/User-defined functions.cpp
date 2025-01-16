// User-defined functions.
// Stand-alone functions - void will be the data type for stand alone function
// when called will only print something

//	Function Definition - Defining function
// 	dataType name(){
// block of code }
		
//// There are two ways to declare and define the function: 
//	1. Declaring and defining Before the main function
//	2. declaring before the main function and defining after the main function

#include<iostream>
using namespace std;

//void sayHello(){			// declaring and defining the function
//	cout<<"Hello";
//}

void sayHello(); 			// declaring the function 

int main(){
	sayHello();	
	
	return 0;
}

void sayHello(){
	cout<<"Hello";
}
