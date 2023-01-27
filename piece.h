#include <iostream>
#include "playboard.h"
#include "objet.h"


class Piece : public Objet
{
    int haut;
    int larg;

public:
    Piece(int pos_x, int pos_y, int piece_height, int piece_width): Objet(pos_x, pos_y), haut(piece_height), larg(piece_width){}

    void afficher(int pos_x, int pos_y, int piece_height, int piece_width)
    {
        // MURS
        for(int i{0}; i < piece_height; i++)
        {
            board.at((pos_y+i)*columns + pos_x) = '%';
            board.at((pos_y+i)*columns + pos_x+piece_width) = '%';
        }
        for(int i{1}; i < piece_width-1; i++)
        {
            board.at((pos_y*columns + pos_x + i));
            board.at((pos_y+piece_height)*columns + pos_x + i);
        }

        //INTERIEUR
        for(int i{1}; i < piece_width - 1; i++)
        {
            for (int j{1}; j <piece_height - 1; i++)
            {
                board.at((pos_y+j)*columns + pos_x + i) = '.';
            }
        }
    }
};