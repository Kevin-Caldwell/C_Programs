#include <string>
#include <iostream>
#include <conio.h>
#include <fstream>
#include "Element.h"

using namespace std;

class Periodic_Table
{
public:

	Element Elements_of_Periodic_Table[109];

	Periodic_Table();
	~Periodic_Table();

	Element find_Element_Atomic_Name(string name);
	Element find_Element(string symbol);
	Element find_Element(int atomic_number);
	
private:
};