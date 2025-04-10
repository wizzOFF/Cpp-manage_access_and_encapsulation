
#include <iostream>
#include "Character.hpp" //Ne pas oublier

using namespace std;

int main()
{
    // Initialisez les attributs avec un constructeur
    /*
    Personnage david, goliath;
    */
    /*
    Personnage david, goliath;
    
    //Personnage david, goliath("Epee aiguisee", 20);
    Si l'on veux donner une meilleur arme a goliath
    */
    /*
    Personnage goliath("Epee aiguisee", 20);  //On crée goliath en utilisant un constructeur normal
    Personnage david(goliath);                //On crée david en copiant tous les attributs de goliath
    */
    
    Personnage david;
    david.afficherEtat();

    return 0;
}