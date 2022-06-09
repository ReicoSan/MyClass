#pragma once
#include "Header.h"

class Plane {

private:
	static int count;
	
protected:

	string brand;
	string model;
	int age;
	double price;

public:

	Plane();
	Plane(string brand, string model, int age, double price);
	~Plane();

	string getBrand();
	void setBrand(string brand);

	string getModel();
	void setModel(string model);

	int getAge();
	void setAge(int age);

	double getPrice();
	void setPrice(double price);

	static int getCount();

	virtual string getInfo();
};
