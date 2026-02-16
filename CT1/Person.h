
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
	string fName;
	string lName;
	string streetAddress;
	string cityName;
	string zipcode;

public:
	//setter functions
	void setFName();
	void setLName();
	void setStreetAddress();
	void setCityName();
	void setZipcode();

	//getter functions
	string getFName();
	string getLName();
	string getStreetAddress();
	string getCityName();
	string getZipcode();
};

#endif
