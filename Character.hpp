
#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

#include <Weapon.hpp>
 
class Personnage
{
    public:
 
    Personnage(std::string nomArme, int degatsArme); //Constructeur
    Personnage(Personnage const& autre);
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat() const;

    ~Personnage();
    //Prototype de la méthode (dans le .hpp)
    
    bool Personnage::estVivant() const
    //Prototype de la méthode (dans le .hpp)
 
    private:
 
    int m_vie;
    int m_mana;
    //std::string m_nomArme;
    //int m_degatsArme;
    Arme m_arme;
};

#endif