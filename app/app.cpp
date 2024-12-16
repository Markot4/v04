#include "app.h"

namespace vsite::oop::v4
{
	unsigned int insect::legs() const
	{
		return 6;
	}

	unsigned int spider::legs() const
	{
		return 8;
	};

	unsigned int bird::legs() const
	{
		return 2;
	};

	std::string sparrow::species() const
	{
		return "sparrow";
	};

	std::string tarantula::species() const
	{
		return "tarantula";
	};

	std::string cockroach::species() const
	{
		return "cockroach";
	};

	std::string leg_counter::add_animal(animal* a)
	{
		legCnt += a->legs();
		return a->species();
	}

	unsigned int leg_counter::legs()
	{
		return legCnt;
	}

	std::unique_ptr<animal> animal_factory(int index)
	{
		switch (index)
		{
		case 1:
			return std::make_unique<cockroach>();
		case 2:
			return std::make_unique<sparrow>();
		case 3:
			return std::make_unique<tarantula>();
		default:
			return nullptr;
		};
	}
}
