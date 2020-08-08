#include <iostream>

using namespace std;

class Apple
{
public:
	string name;
	string origin;
	double price;

	Apple() {
		name = "Red Delicious";
		origin = "Peru, Iowa, U.S.";
		price = 1.99;
	}
	Apple(string aName, string aOrigin, double aPrice) {
		name = aName;
		origin = aOrigin;
		price = aPrice;
	}

	void toString() {
		cout << "Facts about " << name << " apple,\nOrigin: " << origin << "\nPrice: " << price << endl;
	}

	void setName(string aName)
	{
		name = aName;
	}

};


class Gala : public Apple
{
public:
	Gala() {
		name = "Gala";
		origin = "New Zealand";
		price = 2.49;
	}
};

class  PinkLady : public Apple
{
public:
	PinkLady() {
		name = "Pink Lady";
		origin = "Australia";
		price = 2.99;
	}

	void setPrice(double aPrice)
	{
		price = aPrice;
	}
};

class  GrannySmith : public Apple
{
public:
	GrannySmith() {
		name = "Granny Smith";
		origin = "Australia";
		price = 1.99;
	}

	void setName(string aName) {
		name = aName;
		cout << "\nWARNING: Name was changed\n" << endl;
	}
};