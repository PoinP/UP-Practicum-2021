#include <iostream>

void enterShipments(int* arr, int size);
void printShipCourses(int boatCapacity, int* shipments, int shipmentAmount);

int main()
{
	const int MAX_SHIPMENT_AMOUNT = 109;
	const int MIN_SHIPMENT_AMOUNT = 10;
	const int MAX_SHIP_CAPACITY = 500;
	const int MIN_SHIP_CAPACITY = 100;

	int shipments[MAX_SHIPMENT_AMOUNT];
	int shipmentAmount;
	int boatCapacity;

	do
	{
		std::cout << "Please enter the boat's capacity["
			<< MIN_SHIP_CAPACITY << ".."
			<< MAX_SHIP_CAPACITY << "] = ";
		std::cin >> boatCapacity;
	} while (boatCapacity < MIN_SHIP_CAPACITY || boatCapacity > MAX_SHIP_CAPACITY);

	do
	{
		std::cout << "Please enter the amount of shipments ["
			<< MIN_SHIPMENT_AMOUNT << ".."
			<< MAX_SHIPMENT_AMOUNT << "] = ";
		std::cin >> shipmentAmount;
	} while (shipmentAmount < MIN_SHIPMENT_AMOUNT || shipmentAmount > MAX_SHIPMENT_AMOUNT);

	enterShipments(shipments, shipmentAmount);
	printShipCourses(boatCapacity, shipments, shipmentAmount);
}

void enterShipments(int *arr, int size)
{
	std::cout << "Enter shipments: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void printShipCourses(int boatCapacity, int *shipments, int shipmentAmount)
{
	int shipmentWeight = 0;
	for (int i = 0; i < shipmentAmount; i++)
	{
		shipmentWeight += *(shipments + i);

		if (shipmentWeight > boatCapacity)
		{
			shipmentWeight -= *(shipments + i);
			std::cout << shipmentWeight << ", ";
			shipmentWeight = *(shipments + i);
		}
	}
}