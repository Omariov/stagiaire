#pragma once
#include <assert.h>
#include <iostream>
#include <string.h>


using namespace std;

namespace stage {

	class stagiaire
	{
	private:
		int matricule;
		string nom, prenom, filiere;
		double note1, note2, note3;
		static int compt ;
	public:
		stagiaire();
		stagiaire(string a, string b, string c, double e,double f,double h);
		stagiaire(const stagiaire& c);
		void modifiernote1(double a);
		double affichernote1() const;
		static void raz();
		bool equal(stagiaire& c) const;
		double calcul() const;
		void affichage() const ;
			
	
	
	
	};

}