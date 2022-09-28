// CarPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
#include <string>
int main()
{
	Car Audi;
	Audi.make = "Audi";
	Audi.model = "tt";
	Audi.doors = 3;
	Audi.mileage = 8000.0f;
	Audi.mpg = 200.0f;
	Audi.petrol = 70.0f;

	Car Volkswagon;
	Volkswagon.make = "Volkswagon";
	Volkswagon.model = "Golf";
	Volkswagon.doors = 5;
	Volkswagon.mileage = 5000.0f;
	Volkswagon.mpg = 250;
	Volkswagon.petrol = 50.0f;

	Car Ford;
	Ford.make = "Ford";
	Ford.model = "Fiesta";
	Ford.doors = 3;
	Ford.mileage = 10000.0f;
	Ford.mpg = 190;
	Ford.petrol = 30.0f;

	Car testCar("Tester", "Model 3", 5, 140);
	//Audi.CarSpecs();
	//Volkswagon.CarSpecs();
	//Ford.CarSpecs();

	Audi.Drive(13000);
	Audi.Drive(1001);

	testCar.CarSpecs();

	//Volkswagon.Drive(200);
	//Volkswagon.Drive(100);
	//Ford.Drive(350);
	//Ford.Drive(200);
}