// CarPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>
#include <map>


int main()
{

	Car Audi;
	Audi.make = "Audi";
	Audi.model = "tt";
	Audi.doors = 3;
	Audi.mileage = 8000.0f;
	Audi.mpg = 200.0f;
	Audi.petrol = 70.0f;
	Audi.serialNum = 100;

	Car Volkswagon;
	Volkswagon.make = "Volkswagon";
	Volkswagon.model = "Golf";
	Volkswagon.doors = 5;
	Volkswagon.mileage = 5000.0f;
	Volkswagon.mpg = 250;
	Volkswagon.petrol = 50.0f;
	Volkswagon.serialNum = 101;

	Car Ford;
	Ford.make = "Ford";
	Ford.model = "Fiesta";
	Ford.doors = 3;
	Ford.mileage = 10000.0f;
	Ford.mpg = 190;
	Ford.petrol = 30.0f;
	Ford.serialNum = 102;

	Car testCar("Tester", "Model 3", 5, 140, 103);
	
	std::vector<Car> carVector;
	carVector.push_back(Audi);
	carVector.push_back(Volkswagon);
	carVector.push_back(Ford);
	carVector.push_back(testCar);

	/*for (size_t i = 0; i < carVector.size(); i++)
	{
		carVector[i].CarSpecs();
	}*/

	std::map<int, Car> carList;
	carList[Audi.serialNum] = Audi;
	carList[Volkswagon.serialNum] = Volkswagon;
	carList[Ford.serialNum] = Ford;
	carList[testCar.serialNum] = testCar;

	int userResponse = 0;
	std::cout << "Choose a car serial number you would like to see: " << std::endl;
	std::cin >> userResponse;

	if (carList.find(userResponse) != carList.end())
	{
		carList[userResponse].CarSpecs();
	}
	
	
}