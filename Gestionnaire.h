#pragma once
#include"Employe.h"

class Gestionnaire :virtual public Employe
{ 
private:
	double salaireHebdomadaire;
public:
	Gestionnaire(string,string, string,string,int,double);
	~Gestionnaire();
	double Calculer_salaire() const  override;
	virtual void afficher() const;
};

