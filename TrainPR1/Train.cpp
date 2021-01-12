#include "Train.h"

Train::Train()
{
	ID = 0;
	destination = "";
	number = 1;
	departureTime = "00:00";
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

Train::Train(int aID)
{
	ID = aID;
	destination = "";
	number = 1;
	departureTime = "00:00";
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

void Train::setDestination(std::string aDest)
{
	destination = aDest;
}

void Train::setNumber(int aNum)
{
	number = aNum;
}

void Train::setDepartureTime(std::string aDepTime)
{
	departureTime = aDepTime;
}

void Train::setNOP(int aNOP_common, int aNOP_compartment, int aNOP_reservedSeat, int aNOP_lux)
{
	NOP_common = aNOP_common;
	NOP_compartment = aNOP_compartment;
	NOP_reservedSeat = aNOP_reservedSeat;
	NOP_lux = aNOP_lux;
}

std::string Train::getDestination()
{
	return destination;
}

int Train::getNumber()
{
	return number;
}

std::string Train::getDepartureTime()
{
	return departureTime;
}

void Train::getNOP(int& aNOP_common, int& aNOP_compartment, int& aNOP_reservedSeat, int& aNOP_lux)
{
	aNOP_common = NOP_common;
	aNOP_compartment = NOP_compartment;
	aNOP_reservedSeat = NOP_reservedSeat;
	aNOP_lux = NOP_lux;
}

Train::~Train()
{

}

std::ostream& operator<<(std::ostream& aOut, const Train& aTrain)
{
	aOut << "Train(" << aTrain.ID << ", " << aTrain.destination << ", " << aTrain.number << ", " << aTrain.departureTime << ", " << aTrain.NOP_common << ", " << aTrain.NOP_compartment << ", " << aTrain.NOP_reservedSeat << ", " << aTrain.NOP_lux << ")";

	return aOut;
}

std::istream& operator>>(std::istream& aIn, Train& aTrain)
{
	std::cout << "ID: ";
	aIn >> aTrain.ID;
	std::cout << "destination: ";
	aIn >> aTrain.destination;
	std::cout << "number: ";
	aIn >> aTrain.number;
	std::cout << "NOP_common: ";
	aIn >> aTrain.NOP_common;
	std::cout << "NOP_compartment: ";
	aIn >> aTrain.NOP_compartment;
	std::cout << "NOP_reservedSeat: ";
	aIn >> aTrain.NOP_reservedSeat;
	std::cout << "NOP_lux: ";
	aIn >> aTrain.NOP_lux;

	return aIn;
}

bool operator==(const Train& atrain1, const Train& atrain2)
{
	bool res =
		atrain1.ID == atrain2.ID &&
		atrain1.destination == atrain2.destination &&
		atrain1.number == atrain2.number &&
		atrain1.departureTime == atrain2.departureTime &&
		atrain1.NOP_common == atrain2.NOP_common &&
		atrain1.NOP_compartment == atrain2.NOP_compartment &&
		atrain1.NOP_reservedSeat == atrain2.NOP_reservedSeat &&
		atrain1.NOP_lux == atrain2.NOP_lux;

	return res;
}