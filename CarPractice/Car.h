#pragma once
#include <string>
class Car
{
public:
	//settings
	std::string make;
	std::string model;
	int doors = 0;
	float mileage = 0.0f;

	//state
	float mpg = 0.0f;
	float petrol = 0.0f;
};

