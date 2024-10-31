#include "Personne.h"
#include<iostream>
int Personne::count = 0;

Personne::Personne(string n,string p,string c,string a)
	:id(++count),nom(n),prenom(p),Cin(c),adresse(a)
{
}

Personne::~Personne()
{
	std::cout << "Destro Personne " << std::endl;
}



void Personne::afficher() const
{
	std::cout << "Id : " << this->id << std::endl;
	std::cout << "Nom : " << this->nom << std::endl;
	std::cout << "Prenom :" << this->prenom << std::endl;
	std::cout << "Cin :" << this->Cin << std::endl;
	std::cout << "Adresse :" << this->adresse << std::endl;
}
