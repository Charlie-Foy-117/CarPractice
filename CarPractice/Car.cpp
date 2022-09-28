#include "Car.h"
#include <iostream>

Car::Car() 
	: make("")
	, model("")
	, doors(0)
	, mileage(0)
	, mpg(0)
	,petrol(0)
{
	std::cout << "Car constructed" << std::endl
		<< "" << std::endl;
}

Car::Car(std::string newName, std::string newModel, int newDoors, float newMpg)
	: make(newName)
	, model(newModel)
	, doors(newDoors)
	, mpg(newMpg)
	, mileage(0)
	, petrol(0)
{
	std::cout << "Car construced with parameters" << std::endl
		<< "" << std::endl;
}

Car::~Car()
{
	std::cout << "Car destroyed: " << make << ": " << model << std::endl
		<< "" << std::endl;
}

void Car::CarSpecs()
{
	std::cout << "Make: " << make << std::endl
		<< "Model: " << model << std::endl
		<< "Doors: " << doors << std::endl
		<< "Mileage: " << mileage << std::endl
		<< "MPG: " << mpg << std::endl
		<< "Petrol: " << petrol << std::endl
		<< " " << std::endl;
}

void Car::Drive(float miles)
{
	float petrolUsed = miles / mpg;
	if (petrol >= petrolUsed)
	{
		petrol = petrol - petrolUsed;
		mileage = mileage + miles;

		std::cout << "Miles Driven: " << miles << std::endl
			<< "Petrol Remaining: " << petrol << " gallons" << std::endl
			<< "Mileage: " << mileage << std::endl
			<< " " << std::endl;
	}
	else
	{
		std::cout << "Not enough fuel to go the whole distance" << std::endl;
		petrolUsed = petrol;
		miles = petrolUsed * mpg;
		std::cout << "You can travel " << miles << " miles with remaining petrol" << std::endl
			<< " " << std::endl;
	}
}

