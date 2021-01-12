
#include <iostream>
#include <string>
#include "Train.h"

int main()
{
    Train train1;

    train1.setDepartureTime("12:00");
    train1.setDestination("London");
    train1.setNumber(15);
    train1.setNOP(2, 3, 4, 5);

    int nop1, nop2, nop3, nop4;

    train1.getNOP(nop1, nop2, nop3, nop4);

    std::string str;

    std::cout << "Please, enter destination: " << std::endl;
    std::cin >> str;

	if (str == train1.getDestination()) {

	std::cout << "Number: " << train1.getNumber() << std::endl;
	std::cout << "Destination: " << train1.getDestination() << std::endl;
	std::cout << "DepartureTime: " << train1.getDepartureTime() << std::endl;
	std::cout << "Nop: " << nop1 << nop2 << nop3 << nop4 << std::endl;
    }
    else {
        std::cout << "No match found" << std::endl;
    }
}
