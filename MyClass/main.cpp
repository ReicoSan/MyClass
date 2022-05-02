#include "plane.h"
#include "passenger.h"

int main()
{
	string brand;
	string model;
	int age;
	double price;
	int numberSeats;
	int numberFloors;

	Passenger passenger1;

	cout << "Input brand of plane - " << endl;
	cin >> brand;
	passenger1.setBrand(brand);

	cout << "Input age of plane - " << endl;
	cin >> age;
	passenger1.setAge(age);

	cout << "Input model of plane - " << endl;
	cin >> model;
	passenger1.setModel(model);

	cout << "Input price of plane - " << endl;
	cin >> price;
	passenger1.setPrice(price);

	cout << "Input number of seats - " << endl;
	cin >> numberSeats;
	passenger1.setNumberSeats(numberSeats);

	cout << "Input number of floors - " << endl;
	cin >> numberFloors;
	passenger1.setNumberFloors(numberFloors);

	cout << passenger1.getInfo() << endl;

	system("pause");
	return 0;
}

