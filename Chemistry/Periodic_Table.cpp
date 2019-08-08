#include "Periodic_Table.h"

Periodic_Table::Periodic_Table()
{
	string line;
	ifstream Atom_Names_file ("Atom_Names.txt");
	ifstream Atom_Symbols_file ("Atom_Symbols.txt");
	ifstream Atom_Masses_file ("Molar_Masses.txt");


	for (int i = 0; i < 109; i++)
	{
		string atomic_name;
		getline(Atom_Names_file, atomic_name);

		string atomic_symbol;
		getline(Atom_Symbols_file, atomic_symbol);
		
		double atomic_mass;
		string atomicMassString;
		getline(Atom_Masses_file, atomicMassString);
		atomic_mass = atof(atomicMassString.c_str());

		Element Current_Element(i + 1, atomic_name, atomic_symbol, atomic_mass);
		Elements_of_Periodic_Table[i] = Current_Element;
	}

}

Periodic_Table::~Periodic_Table()
{
}

Element Periodic_Table::find_Element_Atomic_Name(string name){

	Element Element_Search;

	for(int i = 0; i < 109; i++){
		if(Elements_of_Periodic_Table[i].name == name){

			Element_Search = Elements_of_Periodic_Table[i];
		}
	}

	return Element_Search;
}

Element Periodic_Table::find_Element(string symbol){

	Element Element_Search;

	for(int i = 0; i < 109; i++){
		if(Elements_of_Periodic_Table[i].symbol == symbol){

			Element_Search = Elements_of_Periodic_Table[i];
		}
	}

	return Element_Search;
}

Element Periodic_Table::find_Element(int atomic_number){

	Element Element_Search;

	for(int i = 0; i < 109; i++){
		if(Elements_of_Periodic_Table[i].atomic_number == atomic_number){

			Element_Search = Elements_of_Periodic_Table[i];
		}
	}

	return Element_Search;
}
