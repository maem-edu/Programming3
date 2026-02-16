#include "Person.h"
#include <iostream>
using namespace std;

//setter implementations
void Person::setFName() {
	cout << "Enter first name: ";
	cin >> fName;
}

void Person::setLName() {
	cout << "Enter last name: ";
	cin >> lName;
}

void Person::setStreetAddress() {
	cout << "Enter street address: ";
	cin.ignore(); //clears leftover newline
	getline(cin, streetAddress); //for addresses with spaces
}

void Person::setCityName() {
	cout << "Enter city name: ";
	getline(cin, cityName);
}

void Person::setZipcode() {
	cout << "Enter zipcode: ";
	cin >> zipcode;
}

//getter implementations
string Person::getFName() {
	return fName;
}

string Person::getLName() {
	return lName;
}

string Person::getStreetAddress() {
	return streetAddress;
}

string Person::getCityName() {
	return cityName;
}

string Person::getZipcode() {
	return zipcode;
}
