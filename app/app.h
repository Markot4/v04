#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 {

    // Apstraktna baza klasa animal
    class animal {
    public:
        virtual ~animal() = default;
        virtual std::string species() const = 0;
        virtual unsigned legs() const = 0;
    };

    // Apstraktna klasa insect izvedena iz animal
    class insect : public animal {};

    // Konkretna klasa cockroach izvedena iz insect
    class cockroach : public insect {
    public:
        std::string species() const override { return "cockroach"; }
        unsigned legs() const override { return 6; }
    };

    // Apstraktna klasa spider izvedena iz animal
    class spider : public animal {};

    // Konkretna klasa tarantula izvedena iz spider
    class tarantula : public spider {
    public:
        std::string species() const override { return "tarantula"; }
        unsigned legs() const override { return 8; }
    };

    // Apstraktna klasa bird izvedena iz animal
    class bird : public animal {};

    // Konkretna klasa sparrow izvedena iz bird
    class sparrow : public bird {
    public:
        std::string species() const override { return "sparrow"; }
        unsigned legs() const override { return 2; }
    };

    // Klasa leg_counter za brojanje nogu
    class leg_counter {
        unsigned total_legs = 0;
    public:
        std::string add_animal(animal* a) {
            total_legs += a->legs();
            return a->species();
        }
        unsigned legs() const { return total_legs; }
    };

    // Fabrika za kreiranje životinja na osnovu šifre
    std::unique_ptr<animal> animal_factory(int code);

} // namespace vsite::oop::v4
