#pragma once
#include "hangar.h"

class Manager {
	
private:
	Hangar hangar;
	
public: 
	Manager();
	Manager(Hangar hangar);
	~Manager();

	int calculateTotalPriceOfPlanesInHangar();
	int findCheapestModel();
	int findNewestModel();
	void sortPlanesByPrice();
	int calculateTotalPricePassengerOnly();
};

