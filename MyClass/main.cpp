#include "plane.h"
#include "passenger.h"
#include "hangar.h"

int main()
{
	string brand;
	string model;
	int age;
	double price;

	Plane* p1 = new Plane("bwv", "s1", 12, 1000);
	Plane* p2 = new Plane("bwv", "s2", 12, 1000);
	Passenger* p3 = new Passenger("bwv", "s3", 12, 1000, 12, 12);
	Plane* p4 = new Plane("bwv", "s4", 12, 1000);
	Plane* p5 = new Plane("bwv", "s5", 12, 1000);
	Hangar hangar("Victory");

	hangar.add(p1);
	hangar.add(p2);
	hangar.add(p3);
	hangar.add(p4);

	cout << "The size of hangar is - " << hangar.getSize() << endl;

	cout << hangar.getInfo() << endl;

	hangar.remove(1);

	cout << hangar.getInfo() << endl;

	hangar.set(0, p5);

	cout << hangar.getInfo() << endl;

	cout << "Count of all planes - " << p1->getCount() << endl;

	system("pause");
	return 0;
}

