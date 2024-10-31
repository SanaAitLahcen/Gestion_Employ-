#include "Commercial.h"
#include<iostream>

Commercial::Commercial(string n, string p, string c, string a, int nbrh,double ventes, double com)
    :Employe(n,p,c, a, nbrh),nbr_vente(ventes),commission(com)
{}

Commercial::~Commercial()
{
    std::cout << "Destro commercial" << std::endl;
}



double Commercial::Calculer_salaire() const
{
    return Employe::Calculer_salaire()+(this->nbr_vente * this->commission);
}

void Commercial::afficher() const
{
    Personne::afficher();
    cout << "Salaire Commercial : " << Commercial::Calculer_salaire() << endl;
}
 