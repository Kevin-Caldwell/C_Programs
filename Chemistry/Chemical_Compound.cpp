#include "Chemical_Compound.h"

using namespace std;

Chemical_Compound::Chemical_Compound()
{
}

Chemical_Compound::Chemical_Compound(string name)
{
	Compound_Name = name;
	get_Constituent_Elements();
}

Chemical_Compound::~Chemical_Compound()
{
}

void Chemical_Compound::set_State(string state){
	this->state = state;
}

void Chemical_Compound::get_Constituent_Elements(){

	if(!Compound_Name.empty()){

		for(int i = 0; i < Compound_Name.size(); i++){

			string element_name("");
			Element currentElement;

			if(!isdigit(Compound_Name.at(i))){
				element_name.append(1, Compound_Name.at(i));

				if(i + 1 < Compound_Name.size()){

					if(islower(Compound_Name.at(i + 1))){

						element_name.append(1, Compound_Name.at(i + 1));
						Compund_Constituent_Elements.push_back(ptable.find_Element(element_name));
						i += 1;

					} else {
						Compund_Constituent_Elements.push_back(ptable.find_Element(element_name));
					}
				} else {
					Compund_Constituent_Elements.push_back(ptable.find_Element(element_name));

				}
			} else if(isdigit(Compound_Name.at(i))) {
				string number_of_atoms("");

				do
				{
					number_of_atoms.append(1, Compound_Name.at(i));

					if(i+1 >= Compound_Name.size()){
						break;
					} else if (!isdigit(Compound_Name.at(i + 1)))
					{
						break;
					} else {
						i += 1;
					}
				} while (isdigit(Compound_Name.at(i)));

				Compund_Constituent_Elements.back().number_of_atoms = atoi(number_of_atoms.c_str());

			} else if(Compound_Name.at(i) == '('){
				string element_name("");
				Element currentElement;
				list<Element> elemList;

				if(!isdigit(Compound_Name.at(i))){
					element_name.append(1, Compound_Name.at(i));

					if(i + 1 < Compound_Name.size()){

						if(islower(Compound_Name.at(i + 1))){

							element_name.append(1, Compound_Name.at(i + 1));
							elemList.push_back(ptable.find_Element(element_name));
							i += 1;

						} else {
							elemList.push_back(ptable.find_Element(element_name));
						}
					} else {
						elemList.push_back(ptable.find_Element(element_name));

					}
				} else if(isdigit(Compound_Name.at(i))) {
					string number_of_atoms("");

					do
					{
						number_of_atoms.append(1, Compound_Name.at(i));

						if(i+1 >= Compound_Name.size()){
							break;
						} else if (!isdigit(Compound_Name.at(i + 1)))
						{
							break;
						} else {
							i += 1;
						}
					} while (isdigit(Compound_Name.at(i)));

					elemList.back().number_of_atoms = atoi(number_of_atoms.c_str());

				} else if(Compound_Name.at(i) == ')'){

					string number_of_atoms;

					do
					{
						number_of_atoms.append(1, Compound_Name.at(i));

						if(i+1 >= Compound_Name.size()){
							break;
						} else if (!isdigit(Compound_Name.at(i + 1)))
						{
							break;
						} else {
							i += 1;
						}
					} while (isdigit(Compound_Name.at(i)));

					for (Element &elem : elemList)
					{
						elem.number_of_atoms*= atoi(number_of_atoms.c_str());
					}
				}
			}
		}
	}
}

void Chemical_Compound::print_Compound(){
	list<Element> elem = Compund_Constituent_Elements;
	while(!elem.empty())
	{
		elem.back().PrintElement();
		elem.pop_back();
	}
}
