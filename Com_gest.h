#pragma once
#include"Gestionnaire.h"
#include"Commercial.h"

class Com_gest : public Commercial,  public Gestionnaire 
{
private:
public:
	Com_gest(string, string, string, string, int, double,double,double);
	~Com_gest();
	double Calculer_salaire() const  override;
	virtual void afficher() const override;
};

