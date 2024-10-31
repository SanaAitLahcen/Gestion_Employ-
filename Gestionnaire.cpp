#include "Gestionnaire.h"
#include<iostream>
Gestionnaire::Gestionnaire(string n, string p, string c,string a,int nbrh,double sal)
	: Employe( n, p,  c, a, nbrh), salaireHebdomadaire(sal)
{
}

Gestionnaire::~Gestionnaire()
{
	std::cout << "Destro Gestionnaire " << std::endl;
}

double Gestionnaire::Calculer_salaire() const
{
	return salaireHebdomadaire*4;
}

void Gestionnaire::afficher() const
{
	Personne::afficher();
	cout << "Salaire Gestionnaire : " << Calculer_salaire() << endl;
}
