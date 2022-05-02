#pragma once
#include "plane.h"

class Passenger : public Plane {

private:

	int numberSeats;
	int numberFloors;

public:

	Passenger();
	Passenger(string brand, string model, int age, double price,
		int numberSeats, int numberFloors);
	~Passenger();

	int getNumberSeats();
	void setNumberSeats(int numberSeats);

	int getNumberFloors();
	void setNumberFloors(int numberFloors);

	string getInfo();
};