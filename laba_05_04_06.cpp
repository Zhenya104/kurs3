#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "Product.h"
#include "Factory.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	MilitaryEquipment* arr[5];
	IMilitaryEquipmentFactory* Factory;
	Factory = new RuMilitaryEquipmentFactory("RuMilitary.txt");
	arr[0] = Factory->createTank();
	arr[1] = Factory->createTroopCarrier();
	arr[2] = Factory->createRobot();
	arr[3] = Factory->createHowitzer();
	arr[4] = Factory->createFighter();
	
	if (Factory) delete Factory;
}