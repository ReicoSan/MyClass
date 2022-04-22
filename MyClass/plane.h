#pragma once
#include "Header.h"

class Plane {

private:

	string brand;
	string model;
	int age;
	double price;

public:

	Plane();
	Plane(string brand, string model, int age, double price);
	~Plane();
	string getInfo();
};
