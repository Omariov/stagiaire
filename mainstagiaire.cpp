#include "stagiaire.h"
#include <assert.h>
#include <iostream>
#include <string.h>
using namespace std;
using namespace stage;
int main()
{
    stagiaire*a= new stagiaire("ahmed", "amine", "ilisi", 10, 12, 13);
    stagiaire*b = new stagiaire("med", "am", "ilisi", 1, 2, 3);
    stagiaire*c = new stagiaire();
    stagiaire d("ahmed", "amine", "ilisi", 10, 12, 13);
    a.affichage;
    a->affichage;




    return 0;
}

