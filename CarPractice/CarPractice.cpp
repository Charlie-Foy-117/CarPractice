// CarPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
#include <string>
void CarSpecs(Car car)
{
	std::cout << "Make " << car.make << std::endl
		<< "Model: " << car.model << std::endl
		<< "Doors: " << car.doors << std::endl
		<< "Mileage: " << car.mileage << std::endl
		<< "MPG: " << car.mpg << std::endl
		<< "Petrol: " << car.petrol << std::endl
		<< " " << std::endl;
}
int main()
{
	Car Audi;
	Audi.make = "Audi";
	Audi.model = "tt";
	Audi.doors = 3;
	Audi.mileage = 8000.0f;
	Audi.mpg = 200.0f;
	Audi.petrol = 1.5f;

	Car Volkswagon;
	Volkswagon.make = "Volkswagon";
	Volkswagon.model = "Golf";
	Volkswagon.doors = 5;
	Volkswagon.mileage = 5000.0f;
	Volkswagon.mpg = 250;
	Volkswagon.petrol = 2.0f;

	Car Ford;
	Ford.make = "Ford";
	Ford.model = "Fiesta";
	Ford.doors = 3;
	Ford.mileage = 10000.0f;
	Ford.mpg = 190;
	Ford.petrol = 1.3f;

	CarSpecs(Audi);
	CarSpecs(Volkswagon);
	CarSpecs(Ford);
}