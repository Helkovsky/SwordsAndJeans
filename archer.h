#include <iostream>
using namespace std;

class Archer : public character
{
public:
	// parameters
	int reloadTime;
	bool eagleVision;

	// constructor

	Archer(string name)
	{
		// string
		this->name = name;
		this->specialization = "Archer";
		// int
		this->hp = 15;
		this->speed = 6;
		this->mana = 10;
		this->reloadTime = 1;
		// bool
		this->eagleVision = true;
	}
};
