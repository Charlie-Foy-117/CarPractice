#pragma once
#include <string>
#include <map>
class Car
{
public:

	Car();
	Car(std::string newName, std::string newModel, int newDoors, float newMpg, int newSerialNum);

	~Car();

	void CarSpecs(); 
	void Drive(float drive);

	//settings
	std::string make;
	std::string model;
	int doors = 0;
	float mileage = 0.0f;
	int serialNum = 0;

	//state
	float mpg = 0.0f;
	float petrol = 0.0f;
};

