#pragma once
#include <string>
#include <iostream>

class Train
{
private:
	int ID;
	std::string destination;
	int number;
	std::string departureTime;
	int NOP_common, NOP_compartment, NOP_reservedSeat, NOP_lux;
public:
	Train();
	Train(int aID);
	void setDestination(std::string aDest);
	void setNumber(int aNum);
	void setDepartureTime(std::string aDepTime);
	void setNOP(int aNOP_common, int aNOP_compartment, int aNOP_reservedSeat, int aNOP_lux);
	std::string getDestination();
	int getNumber();
	std::string getDepartureTime();
	void getNOP(int& aNOP_common, int& aNOP_compartment, int& aNOP_reservedSeat, int& aNOP_lux);
	friend std::ostream& operator<< (std::ostream& aOut, const Train& aTrain);
	friend std::istream& operator>> (std::istream& aIn, Train& aTrain);
	friend bool operator==(const Train& atrain1, const Train atrain2);
	~Train();
};