#include "Element.h"

Element::Element(int atomic_number, string name, string symbol, double atomic_mass){

	this->atomic_number = atomic_number;
	this->name = name;
	this->symbol = symbol;
	this->atomic_mass = atomic_mass;
	charge = 0;

	number_of_atoms = 1;
	percent_composition = 0;
}

Element::Element(){
	number_of_atoms = 1;
	percent_composition = 0;
	charge = 0;
}

void Element::PrintElement(){
	if (number_of_atoms == 1)
	{
		cout << name << "[" << symbol << "]" << "\nAtomic Number: " << atomic_number << "\nMolar Mass: " << atomic_mass ;
	} else
	{
		cout << name << "[" << symbol << "] (" << number_of_atoms << ")\nAtomic Number: " << atomic_number << "\nMolar Mass: " << atomic_mass;
	}

	cout << "\nPercent Compostition : " << percent_composition << "\n\n";
	

}

Element::~Element()
{
}
