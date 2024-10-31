#pragma once
#include<string>
using namespace std;
class Personne
{
private:
	static int count;
	int id;
	string nom;
	string prenom;
	string Cin;
	string adresse;
public:
	Personne(string,string,string,string);
	~Personne();
	virtual double Calculer_salaire() const = 0;
	virtual void afficher() const;
};

