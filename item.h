#include "objet.h"
#include <string>


class Item : public Objet
{
    protected:
    std::string nom;
    
    public:
    Item(int x,int y, std::string nom) : Objet(x, y), nom(nom){}
    Item(std::string nom) : nom(nom) {}

};

class personnage : public Objet 
{
    protected:
    Item equipement;
    
    public: 
    personnage(int x, int y, Item equipement) : Objet(x, y), equipement(equipement){}
    void deplacement(char key)
    {
        if key == 'q'
        {
            personnage
        }
    }
};