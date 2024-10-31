#include "Employe.h"
#include<iostream>
int Employe::taux_horaire = 12.2;

Employe::Employe(string n, string p, string c, string ad, int nb)
	:Personne(n, p, c, ad),nbr_heure(nb)
{
}

Employe::~Employe()
{
	std::cout << "Destro employé " << std::endl;
}


double Employe::Calculer_salaire() const
{
	return (this->nbr_heure * taux_horaire);
}


void Employe::afficher() const
{
	std::cout << "infos employé : " << std::endl;
	this->Personne::afficher();
	std::cout << "nbr heure travaillé est :" << this->nbr_heure << std::endl;
	std::cout << "le salaire de l'Employe est :" << Calculer_salaire() << std::endl;
}

