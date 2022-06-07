#pragma once
#include "plane.h"

class Hangar{

private:
	string name;
	int size;
	Plane** list;

public:
	Hangar();
	Hangar(string name);
	Hangar(string name, Plane** list, int size);
	~Hangar();

	void add(Plane* plane);
	void remove(int index);
	Plane get(int index);
	void set(int indexD, Plane* newP);
	int getSize();
	string getName();
	void setName(string name);
	string getInfo();
};

