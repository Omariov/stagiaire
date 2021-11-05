#include "stagiaire.h"
#include <assert.h>
#include <iostream>
#include <string.h>


using namespace std;
using namespace stage;
int stagiaire::compt = 0;


stagiaire::stagiaire()
{
	compt++;
	this->matricule = compt;
}

stagiaire::stagiaire(string a, string b, string c, double e, double f, double h)
{
	compt++;
	this->matricule = compt;
	this->nom = a;
	this->prenom = b;
	this->filiere = c;
	this->note1 = e;
	this->note2 = f;
	this->note3 = h;
}
stagiaire::stagiaire(const stagiaire& c)
{
	compt += 1;
	this->matricule = c.matricule;
	this->nom = c.nom;
	this->prenom = c.prenom;
	this->filiere = c.filiere;
	this->note1 = c.note1;
	this->note2 = c.note2;
	this->note3 = c.note3;
}


void stagiaire::modifiernote1(double a)
{
	this->note1 = a;
}

double  stagiaire::affichernote1() const
{
 return(this->note1);
}

void stagiaire::raz()
{
	compt = 0;
}

bool stagiaire::equal(stagiaire& c) const
{
	return (this->matricule==c.matricule);
}

double stagiaire::calcul() const
{
	return(this->note1 + this->note2 + this->note3) / 3;
}

void stagiaire::affichage() const
{
	cout << this->matricule << " " << this->nom << " " << this->prenom << " " << this->filiere << " "
		<< this->note1 << " " << this->note2 << " " << this->note3 << endl;
}
