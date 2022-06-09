#include "plane.h"
#include "passenger.h"
#include "hangar.h"
#include "manager.h"
 
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
	Hangar hangar1("1");
	Hangar hangar2("2");
	
	hangar1.add(p1);
	hangar1.add(p2);
	hangar2.add(p3);
	hangar2.add(p4);
	hangar2.add(p5);

	Manager m1(hangar1);
	Manager m2(hangar2);
	
	/*cout << m1.calculateTotalPriceOfPlanesInHangar() << endl;
	cout << m2.calculateTotalPriceOfPlanesInHangar() << endl;*/ //не работает
	
	system("pause");
	return 0;
}

