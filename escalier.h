#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include "objet.h"

class Couloir : public Objet
{
    int x;
    int y;

    std::vector<int> debut_couloir;
    std::vector<int> fin_couloir;
    std::vector<int> pos_couloir;
    int longueur_couloir_x;
    int longueur_couloir_y;

public:
    Couloir(int abs, int ord, std::vector<int> debut, std::vector<int> fin) : Objet(abs, ord), debut_couloir(debut), fin_couloir(fin), pos_couloir(debut),
                                                                              longueur_couloir_x(fin[0] - debut[0]), longueur_couloir_y(fin[1] - debut[1]) {}

    void afficher()
    {
        int pas_x{1};
        int pas_y{1};
        if (longueur_couloir_x < 0)
            pas_x = -1;
        if (longueur_couloir_y < 0)
            pas_y = -1;
        while ((pos_couloir[0] != fin_couloir[0]) || (pos_couloir[1] != fin_couloir[1]))
        { // !! boucle infinie ?

            while ((pos_couloir[0] != fin_couloir[0]) &&
                   (board.at(pos_couloir[1] + pas_x + columns * pos_couloir[0]) == ' '))
            {
                std::cout << pos_couloir[0] << endl;
                cout << pos_couloir[1] << endl;

                pos_couloir[0] += pas_x;
                board.at(pos_couloir[1] + columns * pos_couloir[0]) = '#';
            }
            while ((pos_couloir[1] != fin_couloir[1]) &&
                   (board.at(pos_couloir[1] + columns * (pos_couloir[0] + pas_y)) == ' '))
            {
                pos_couloir[1] += pas_y;
                board.at(pos_couloir[1] + columns * pos_couloir[0]) = '#';
            }
        }
    }
};