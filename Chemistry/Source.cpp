#include "Compound_Stoichiometry.h"

void main(){

	string compound_name;
	double mass;
	cin >> compound_name;

	Chemical_Compound compound(compound_name);

	Compound_Stoichiometry::get_Percent_Compostion(compound);

	compound.print_Compound();
	Compound_Stoichiometry::get_Molar_Mass(compound);

	cin >> mass;
	cout << Compound_Stoichiometry::get_Sample_Mol(mass, compound);

	cin >> mass;
	cout << Compound_Stoichiometry::get_Sample_Mass(mass, compound);

	_getch();
}