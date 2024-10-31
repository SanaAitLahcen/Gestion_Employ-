#include "Entreprise.h"

Entreprise::Entreprise::Entreprise(std::string n):nom(n),capacity(3),count(0)
{
    E = new Employe * [this->capacity];
    for (int i = 0; i < this->capacity ; i++)
        E[i] = nullptr;
}



void Entreprise::Entreprise::resize()
{
    
        this->capacity = 6;
        Employe** newtable = new Employe * [this->capacity];
        for (int i = 0; i < count; i++)
        {
            newtable[i] = E[i];
        }
        for (int j = count; j < capacity; j++)
        {
            newtable[j] = nullptr;
        }

        delete[] this->E;
        this->E=newtable;
    
}

void Entreprise::Entreprise::Add_Employe(Employe* E1)
{
    if (capacity == count)
    {
        resize();
    }
    this->E[this->count++] = E1;

}


void Entreprise::Entreprise::printAllentrepsie() const
{
    std::cout << "Les employes d'une entreprise :" << std::endl;
    for (int i = 0; i < count; i++)
    {
        this->E[i]->afficher();
    }
}

double Entreprise::Entreprise::Calculer_Totale_Salaire()
{
    double totalSalaire = 0;
    for (int i = 0; i < count; ++i) {
        totalSalaire += E[i]->Calculer_salaire(); 
    }
    return totalSalaire;
}
Entreprise::Entreprise::~Entreprise()
{


    delete[] E;
    this->E = nullptr;
}