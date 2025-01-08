#include<iostream>
using namespace std;
int main(){
	int currentReading, previousReading, totalUnits, costPerUnit, grossBill, finalBill;
	cout<<"Enter your current reading : ";
	cin>> currentReading;
	cout<<"Enter your previous reading : ";
	cin>> previousReading;
	totalUnits = currentReading - previousReading;
	
	if (totalUnits<0){
		cout<<"Invalid entry. Current Reading cannot be less than the previous reading.";
		return 0;
	} if (totalUnits<=300){
		costPerUnit = 4;
		grossBill = costPerUnit * totalUnits;
		finalBill = grossBill - (grossBill * .03); // TO Apply subsidy of 3%
	} else if (totalUnits<=400){
		costPerUnit = 6;
		grossBill = costPerUnit * totalUnits;
		finalBill = grossBill;
 	} else {
 		costPerUnit = 7;
		grossBill = costPerUnit * totalUnits;
		finalBill = grossBill + (grossBill * .04); // TO Apply surcharge of 4%
	 }
	cout<<" Total Units: "<< totalUnits <<" units.\n";
	cout<<" Cost per Unit : Rs. "<< costPerUnit <<" \n";
	cout<<" Gross Bill : Rs. "<< grossBill <<"\n";
	cout<<" Final Bill : Rs. "<< finalBill <<" \n";
	
	 
}
