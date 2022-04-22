#include "plane.h"

int main()
{
	string brand;
	string model;
	int age;
	double price;

	cout << "Input brand of plane - " << endl;
	cin >> brand;
	cout << "Input age of plane - " << endl;
	cin >> age;
	cout << "Input model of plane - " << endl;
	cin >> model;
	cout << "Input price of plane - " << endl;
	cin >> price;

	Plane plane1(brand, model, age, price);

	cout << plane1.getInfo() << endl;

	system("pause");
	return 0;
}

