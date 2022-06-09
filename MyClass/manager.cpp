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

int calculateTotalPriceOfPlanesInHangar() {
	int totalPrice = 0;
	for (int i = 0; i < hangar.getCount(); i++) {
		totalPrice += hangar.list[i]->getPrice();
	}
	return totalPrice;
	
}
	
