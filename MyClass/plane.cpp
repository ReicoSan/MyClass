#include "plane.h"

int Plane::count = 0;

Plane::Plane() {
	brand = "no brand";
	model = "no model";
	age = 0;
	price = 0;
	count++;
}


Plane::Plane(string brand, string model, int age, double price) {
	this->brand = brand;
	this->model = model;
	this->age = age;
	this->price = price;
	count++;
}

Plane::~Plane() {
	count--;
}

string Plane::getBrand() {
	return brand;
}

void Plane::setBrand(string brand) {
	this->brand = brand;
}

string Plane::getModel() {
	return model;
}

void Plane::setModel(string model) {
	this->model = model;
}

int Plane::getAge() {
	return age;
}

void Plane::setAge(int age) {
	this->age = age;
}

double Plane::getPrice() {
	return price;
}

void Plane::setPrice(double price) {
	this->price = price;
}

int Plane::getCount() {
	return count;
}

string Plane::getInfo() {
	return "Plane: brand = " + brand
		+ "; model = " + model
		+ "; age = " + to_string(age)
		+ "; price = " + to_string(price);
}