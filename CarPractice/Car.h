#pragma once
#include <string>
class Car
{
public:

	Car();
	Car(std::string newName, std::string newModel, int newDoors, float newMpg);

	~Car();

	void CarSpecs(); 
	void Drive(float drive);

	//settings
	std::string make;
	std::string model;
	int doors = 0;
	float mileage = 0.0f;

	//state
	float mpg = 0.0f;
	float petrol = 0.0f;
};

