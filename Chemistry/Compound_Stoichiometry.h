#include "Chemical_Compound.h"

class Compound_Stoichiometry
{
public:
	Compound_Stoichiometry();
	~Compound_Stoichiometry();

	static void get_Molar_Mass(Chemical_Compound &compound);
	static double get_Molar_Mass_of_Compound(Chemical_Compound compound);
	static void get_Percent_Compostion(Chemical_Compound &compound);

	static double get_Sample_Mass(double mols, Chemical_Compound compound);
	static double get_Sample_Mol(double mass, Chemical_Compound compound);

private:

};