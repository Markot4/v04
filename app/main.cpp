#include "app.h"
#include <iostream>

using namespace vsite::oop::v4;

int main() {
    leg_counter lc;
    int code;

    // Unos šifri životinja sve dok se ne unese 0
    while (true) {
        std::cout << "Enter animal code (1=cockroach, 2=sparrow, 3=tarantula, 0=stop): ";
        std::cin >> code;
        if (code == 0) break;

        auto animal = animal_factory(code);
        if (animal) {
            std::cout << "Species: " << lc.add_animal(animal.get()) << '\n';
        }
        else {
            std::cout << "Invalid code!\n";
        }
    }

    // Ispis ukupnog broja nogu
    std::cout << "Total legs: " << lc.legs() << '\n';

    return 0;
}

