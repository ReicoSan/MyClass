#include "plane.h"

Plane::Plane() {
	brand = "no brand";
	model = "no model";
	age = 0;
	price = 0;
}


Plane::Plane(string brand, string model, int age, double price) {
	this->brand = brand;
	this->model = model;
	this->age = age;
	this->price = price;
}

Plane::~Plane() {}

string Plane::getInfo() {
	return "Plane: brand = " + brand
		+ "; model = " + model
		+ "; age = " + to_string(age)
		+ "; price = " + to_string(price);
}