#include "passenger.h"

Passenger::Passenger() : Plane() {
	numberSeats = 0;
	numberFloors = 0;
}

Passenger::Passenger(string brand, string model, int age, double price,
	int numberSeats, int numberFloors) : Plane(brand, model, age, price) {

	this->numberSeats = numberSeats;
	this->numberFloors = numberFloors;
}

Passenger::~Passenger() {
}

int Passenger::getNumberSeats() {
	return numberSeats;
}

void Passenger::setNumberSeats(int numberSeats) {
	this->numberSeats = numberSeats;
}

int Passenger::getNumberFloors() {
	return numberFloors;
}

void Passenger::setNumberFloors(int numberFloors) {
	this->numberFloors = numberFloors;
}

string Passenger::getInfo() {
	return Plane::getInfo()
		+ "; number of seats = " + to_string(numberSeats)
		+ "; number of floors = " + to_string(numberFloors);
}