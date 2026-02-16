#include <iostream>
#include "Person.h"
using namespace std;

int main () {
	Person p; //new person object

	//call setters
	p.setFName();
	p.setLName();
	p.setStreetAddress();
	p.setCityName();
	p.setZipcode();

	//display with getters
	cout << "\n---Person Info---" << endl;
	cout << "First Name: " << p.getFName() << endl;
	cout << "Last Name: " << p.getLName() << endl;
	cout << "Street Address: " << p.getStreetAddress() << endl;
	cout << "City Name: " << p.getCityName() << endl;
	cout << "Zipcode: " << p.getZipcode() << endl;

	return 0;
}



