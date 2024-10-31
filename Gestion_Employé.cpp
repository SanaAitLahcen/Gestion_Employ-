#include"Entreprise.h"
#include"Employe.h"
#include"Commercial.h"
#include"Gestionnaire.h"
#include"Com_gest.h"
#include <iostream>

int main()
{   
	Entreprise Ent("FSTM");
	Employe* E1 = new Commercial("najat", "doe", "BK5689", "casa", 12, 1234, 1300);
	Employe* E2 = new Gestionnaire("fatima", "amdri", "BC4567", "lissasfa ", 16, 1200);
	Employe* E3=new Com_gest("sana", "ait lahcen", "RK1234", "casa", 12, 50, 12.67, 1342);
	
	E1->afficher();
	E2->afficher();
	E3->afficher();

	Ent.Add_Employe(E1);
	Ent.Add_Employe(E2);
	Ent.Add_Employe(E3);
	Ent.printAllentrepsie();
	std::cout << "totale salaire est :" << Ent.Calculer_Totale_Salaire() << std::endl;
	 
	//E3->Personne::afficher();
	
	delete E1;
	delete E2;
	delete E3;
	return 0;
}


