#pragma once
#include"Employe.h"

class Commercial :virtual public Employe
{
private:
	double nbr_vente;
	double commission;

public:
	Commercial(std::string,std::string,std::string,std::string,int,double,double);
	~Commercial();
	double Calculer_salaire() const override;
	virtual void afficher() const;
};

