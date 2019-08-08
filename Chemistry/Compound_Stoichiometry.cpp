#include "Compound_Stoichiometry.h"


Compound_Stoichiometry::Compound_Stoichiometry(){

}

Compound_Stoichiometry::~Compound_Stoichiometry(){

}

void Compound_Stoichiometry::get_Molar_Mass(Chemical_Compound &compound){
	
	list<Element> elem = compound.Compund_Constituent_Elements;

	double molar_mass = 0;

	while (!elem.empty())
	{
		molar_mass += elem.back().atomic_mass * elem.back().number_of_atoms;
		elem.pop_back();
	}

	compound.molar_mass = molar_mass;
}

double Compound_Stoichiometry::get_Molar_Mass_of_Compound(Chemical_Compound compound){
	
	list<Element> elem = compound.Compund_Constituent_Elements;

	double molar_mass = 0;

	while (!elem.empty())
	{
		molar_mass += elem.back().atomic_mass * elem.back().number_of_atoms;
		elem.pop_back();
	}

	return molar_mass;
}

void Compound_Stoichiometry::get_Percent_Compostion(Chemical_Compound &compound){
	double molar_mass = get_Molar_Mass_of_Compound(compound);

	for (Element &element : compound.Compund_Constituent_Elements)
	{
		element.percent_composition = (element.atomic_mass * element.number_of_atoms * 100) / molar_mass;
	}

	cout << "\n";
}

double Compound_Stoichiometry::get_Sample_Mass(double mols, Chemical_Compound compound){
	return mols * compound.molar_mass;
}

double Compound_Stoichiometry::get_Sample_Mol(double mass, Chemical_Compound compound){
	return mass / compound.molar_mass;
}