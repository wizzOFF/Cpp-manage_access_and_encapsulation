
#include "Character.hpp"

using namespace std;
/*
Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "Epee rouillee";
    m_degatsArme = 10;
}
*/
/*
Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Epee rouillee"), m_degatsArme(10)
{
    //Rien à mettre dans le corps du constructeur, tout a déjà été fait !
}
*/

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100),m_nomArme(nomArme), m_degatsArme(degatsArme)
{
    
}

Personnage::Personnage(Personnage const& autre): m_vie(autre.m_vie), m_mana(autre.m_mana), m_nomArme(autre.m_nomArme), m_degatsArme(autre.m_degatsArme)
{

}

Personnage::~Personnage()
{
    /* Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Personnage. Le destructeur est donc inutile mais
    je le mets pour montrer à quoi cela ressemble.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet. */
}

bool Personnage::estVivant() const
{
    return m_vie > 0;
}