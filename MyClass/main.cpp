#include "plane.h"

int main()
{
	string brand;
	string model;
	int age;
	double price;

	Plane plane1;

	cout << "Input brand of plane - " << endl;
	cin >> brand;
	plane1.setBrand(brand);

	cout << "Input age of plane - " << endl;
	cin >> age;
	plane1.setAge(age);

	cout << "Input model of plane - " << endl;
	cin >> model;
	plane1.setModel(model);

	cout << "Input price of plane - " << endl;
	cin >> price;
	plane1.setPrice(price);

	cout << plane1.getInfo() << endl;

	system("pause");
	return 0;
}

