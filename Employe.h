#pragma once
#include<string>
#include"Personne.h"


class Employe :public Personne
{
private:
	int nbr_heure;
	static int taux_horaire;
public:
	Employe(string,string,string,string,int);
	~Employe();
	 void afficher() const override;
	double Calculer_salaire() const override;

};

