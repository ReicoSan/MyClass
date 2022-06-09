#include "manager.h"

Manager::Manager() {
	Hangar hangar();
}

Manager::Manager(Hangar hangar) {
	this->hangar = hangar;
}

Manager::~Manager() {
	hangar.~Hangar();
}

int Manager::calculateTotalPriceOfPlanesInHangar() {
	int totalPrice = 0;
	for (int i = 0; i < hangar.getCount(); i++) {
		Plane p1 = hangar.get(i);
		totalPrice += p1.getPrice();
	}
	return totalPrice;
	
}
	
