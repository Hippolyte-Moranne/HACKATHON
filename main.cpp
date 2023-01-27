#include <iostream>
#include <vector>
#include "playboard.h"
#include "piece.h"
#include "keyboard-event.h"
#include "item.h"
#include "escalier.h"


using namespace std;

void play_game()
{
    char key = 'l';
    Piece my_f_piece(5,5,20,20,10,5);
    personnage my_pers;


    while(true)
    {
        // on clear
        backgroundClear();
        reset_board();

        my_f_piece.afficher();
        my_pers.afficher();
        
        if (keyEvent())
        {
            cin >> key;
            my_pers.deplacement(key);

        }

        draw_board();

        sleepOneLap(MS);

    }
}

int main(){

//     reset_board();
//     Piece my_f_piece(5,5,20,20,10,5);
//     my_f_piece.afficher();
//     draw_board();
    reset_board();

    Piece p1(5,5,10,20,10,5);
    Piece p2(25,20,10,20,30,20);
    Couloir c1(10,5,{5,10},{20,30});
    c1.afficher();
    p1.afficher();
    p2.afficher();
    

    

    draw_board();

    return 0;
};