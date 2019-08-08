#include "Periodic_Table.h"

#include <list>

static Periodic_Table ptable;

class Chemical_Compound
{
public:

	string Compound_Name;
	double molar_mass;
	list<Element> Compund_Constituent_Elements;
	string state;

	Chemical_Compound();
	Chemical_Compound(string name);
	~Chemical_Compound();

	void set_State(string state);

	void get_Constituent_Elements();

	void print_Compound();

private:
	void get_molar_mass();
};