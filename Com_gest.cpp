#include "Com_gest.h"
#include<iostream>


Com_gest::Com_gest(string n, string p, string c, string a, int nb, double nbv, double com,double salh)
	:Employe(n,p,c,a,nb),Commercial(n,p,c,a,nb,nbv,com),Gestionnaire(n,p,c,a,nb,salh)
{}


Com_gest::~Com_gest()
{
	std::cout << "Dest Com_gest" << std::endl;
}


double Com_gest::Calculer_salaire() const
{
	return Commercial::Calculer_salaire() + Gestionnaire::Calculer_salaire();
}

void Com_gest::afficher() const
{
	Personne::afficher();
	std::cout << "Salaire Commercial_gestionnaire :" <<Calculer_salaire()<< std::endl;
}
