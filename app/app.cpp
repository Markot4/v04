#include "app.h"

namespace vsite::oop::v4 {

    // Implementacija funkcije animal_factory
    std::unique_ptr<animal> animal_factory(int code) {
        switch (code) {
        case 1: return std::make_unique<cockroach>();
        case 2: return std::make_unique<sparrow>();
        case 3: return std::make_unique<tarantula>();
        default: return nullptr;
        } 
    }

} // namespace vsite::oop::v4
