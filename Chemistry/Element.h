#include <string>
#include <iostream>

using namespace std;

class Element
{
public:

	int atomic_number;
	string name;
	string symbol;
	double atomic_mass;

	int number_of_atoms;
	double percent_composition;
	int charge;

	Element(int atomic_number, string name, string symbol, double atomic_mass);
	Element();

	void PrintElement();

	~Element();

};