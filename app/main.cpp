#include "app.h"
#include <iostream>

#include "app.h"
#include "iostream"

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	vsite::oop::v4::leg_counter counter;
	int index;
	while (true)
	{
		std::cout << "Broj zivotinje: ";
		std::cin >> index;

		if (index < 0 && index > 3)
		{
			std::cout << "Greska!" << std::endl;
			break;
		}

		if (index == 0)
		{
			std::cout << "Broj nogu: " << counter.legs() << std::endl;
			break;
		}

		std::cout << "Vasa zivotinja je " <<
			counter.add_animal(vsite::oop::v4::animal_factory(index).get()) <<
			std::endl;
	}
}