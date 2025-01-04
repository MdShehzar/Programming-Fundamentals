#include<iostream>
using namespace std;
int main(){
	double distanceMiles, distanceKm, distanceMeters, distanceCm, distanceMm, distanceMicrometer;
	
	cout<<"Enter the distance from SHU to your house in miles : ";
	cin>> distanceMiles;
	
	const double milesToKm = 1.60934;
	const double kmTom = 1000.0;
	const double mTocm = 100.0;
	const double cmTomm = 10.0;
	const double mmTomicrometers = 1000.0;
	
	distanceKm = distanceMiles * milesToKm;
	distanceMeters = distanceKm * kmTom;
	distanceCm = distanceMeters * mTocm;
	distanceMm = distanceCm * cmTomm;
	distanceMicrometer = distanceMm * mmTomicrometers;
	
	cout<<"Distance in kilometers is : "<< distanceKm <<" km.\n";
	cout<<"Distance in meters is : "<< distanceMeters <<" m.\n";
	cout<<"Distance in centimeters is : "<< distanceCm <<" cm.\n";
	cout<<"Distance in milli-meters is : "<< distanceMm <<" mm.\n";
	cout<<"Distance in micro-meters is : "<< distanceMicrometer <<" micro meter.\n";
		
	return 0;
}
