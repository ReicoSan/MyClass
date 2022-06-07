#include "hangar.h"

Hangar::Hangar() {
	name = "name";
	size = 0;
	list = NULL;
}

Hangar::Hangar(string name) {
	this->name = name;
	list = NULL;
	size = 0;
}

Hangar::Hangar(string name, Plane** list, int size) {
	this->name = name;
	this->list = list;
	this->size = size;
}

Hangar::~Hangar() {
	if (list != NULL) {
		delete[] list;
	}
}

void Hangar::add(Plane* plane) {
	if (list == NULL) {
		list = new Plane*[1];
		list[0] = plane;
		size = 1;
	}
	else {

		Plane** temp = new Plane*[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = plane;
		size++;
		delete[] list;
		list = temp;
	}
}

void Hangar::remove(int index) {

	if (list == NULL || index < 0 || index >= size) {
		cout << "Wrong index";
	}
	else {

		Plane** temp = new Plane*[size - 1];

		Plane* t = list[index];
		list[index] = list[size - 1];
		list[size - 1] = t;

		size--;

		for (int i = 0; i < size; i++) {
			temp[i] = list[i];
		}

		delete[] list;
		list = temp; 
	}
}

Plane Hangar::get(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return Plane("","", 0, 0);
	}
	else {
		return *list[index];
	}
}

void Hangar::set(int indexD, Plane* newP) {
	if (list == NULL || indexD < 0 || indexD >= size) {
		cout << "Wrong index";
	}
	else {
		list[indexD] = newP;
	}
}

int Hangar::getSize() {
	return size;
}

string Hangar::getName() {
	return name;
}

void Hangar::setName(string name) {
	this->name = name;
}

string Hangar::getInfo() {
	if (list == NULL || size == 0) {
		return "Hangar " + name + " is empty.";
	}

	string msg = "Planes of hangar " + name + ":\n";

	for (int i = 0; i < size; i++) {
		msg += list[i] -> getInfo() + "\n";
	}

	return msg;
}


