#include "objet.h"
#include <string>


class Item : public Objet
{
    protected:
    std::string nom;
    
    public:
    Item(int x,int y, std::string name) : Objet(x, y), nom(name){}
    Item(std::string name) : nom(name) {}
    Item() {}


};

class personnage : public Objet 
{
    protected:
    Item equipement;
    
    public: 
    personnage(int x, int y, Item equipement) : Objet(x, y), equipement(equipement){}
    personnage(int x, int y) : Objet(x, y){}
    void deplacement(char key)
    {
        if (key == 'q')
        {
            this->setPosY(this->getPosY() - 1);
        }
        if (key == 'd')
        {
            this->setPosY(this->getPosY() + 1);
        }
        if (key == 'z')
        {
            this->setPosX(this->getPosX() - 1);
        }
        if (key == 's')
        {
            this->setPosX(this->getPosX() + 1);
        }
    }
};