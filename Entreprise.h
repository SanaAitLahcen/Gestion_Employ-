#pragma once
#include<iostream>
#include"Employe.h"


	class Entreprise
	{
	private:
		std::string nom;
		Employe** E;
		int capacity;
		int count;
	public:
		Entreprise(string);
		~Entreprise();
		void resize();
		void Add_Employe(Employe* );
		void printAllentrepsie() const;
		double Calculer_Totale_Salaire();
	};
