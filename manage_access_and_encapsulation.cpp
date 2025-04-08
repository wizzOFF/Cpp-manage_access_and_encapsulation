
#include <iostream>
#include <string>
 
using namespace std;
 
class Personnage
{
    // Tout ce qui suit est public (accessible depuis l'extérieur)
    public:

    // Méthodes
    void recevoirDegats(int nbDegats)
    {
 
    }
 
    void attaquer(Personnage &cible)
    {
 
    }
 
    void boirePotionDeVie(int quantitePotion)
    {
 
    }
 
    void changerArme(string nomNouvelleArme, int degatsNouvelleArme)
    {
 
    }
 
    bool estVivant()
    {
 
    }
 
    // Tout ce qui suit est prive (inaccessible depuis l'extérieur)
    private:

    // Attributs
    int m_vie;
    int m_mana;
    string m_nomArme;
    int m_degatsArme;
};

int main()
{
    Personnage david, goliath;
    //Création de 2 objets de type Personnage : david et goliath
 
    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath attaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?
    
    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);
     
    return 0;
}

/*
The struct keyword. It can also be used in C++ to create classes.
The only difference with the class keyword is that, by default, methods and attributes are public instead of private.
*/