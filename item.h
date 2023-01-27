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
    int gold = 0;
    
    public:
    personnage(){}; 
    personnage(int x, int y, Item equipement) : Objet(x, y), equipement(equipement){}
    personnage(int x, int y) : Objet(x, y){}
    personnage(int x, int y, Item equipement, int gold) : Objet(x, y), equipement(equipement), gold(gold){}
    personnage(int x, int y,int gold) : Objet(x, y), gold(gold){}
    
    void deplacement(char key)
    {
        if (key == 'q')
        {
            this->setPosX(this->getPosX() - 1);
        }
        if (key == 'd')
        {
            this->setPosX(this->getPosX() + 1);
        }
        if (key == 'z')
        {
            this->setPosY(this->getPosY() - 1);
        }
        if (key == 's')
        {
            this->setPosY(this->getPosY() + 1);
        }
    }
    void increase_gold(int k)
    {
        gold += k;
    }
    void print()
    {
        Objet::print();
        std:cout<<"Gold : "<<gold<<std::endl;
    }
};