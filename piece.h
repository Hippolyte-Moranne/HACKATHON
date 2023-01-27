#pragma once
#include <iostream>
#include "playboard.h"
#include "objet.h"

class Piece : public Objet
{
    int haut;
    int larg;
    int pos_x = Objet::getPosX();
    int pos_y = Objet::getPosY();

public:
    Piece(int pos_x, int pos_y, int piece_height, int piece_width): pos_x(pos_x), pos_y(pos_y), haut(piece_height), larg(piece_width){}

    void afficher()
    {
        // MURS
        for(int i{0}; i < haut; i++)
        {
            board.at((pos_y+i)*columns + pos_x) = '%';
            board.at((pos_y+i)*columns + pos_x+larg) = '%';
        }
        for(int i{1}; i < larg; i++)
        {
            board.at((pos_y*columns + pos_x + i))='%';
            board.at((pos_y+haut-1)*columns + pos_x + i)='%';
        }

        //INTERIEUR
        for(int i{1}; i < larg - 1; i++)
        {
            for (int j{1}; j <haut - 1; j++)
            {
                board.at((pos_y+j)*columns + pos_x + i) = '.';
            }
        }
    }
};