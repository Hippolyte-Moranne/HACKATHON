#include <iostream>
#include <vector>
#include <deque>

class Escalier : public Objet
{
    std::vector<int> debut_couloir;
    std::vector<int> fin_couloir;
    std::vector<int> pos_couloir;
    int longueur_couloir_x;
    int longueur_couloir_y;

public:
    Escalier(std::vector<int> &debut, std::vector<int> &fin) : debut_couloir(debut), fin_couloir(fin),
                                                               pos_couloir(debut) {}

    void affichage()
    {
        int pas_x{1};
        int pas_y{1};
        if (longueur_couloir_x < 0)
            pas_x = -1;
        if (longueur_couloir_y < 0)
            pas_y = -1;

        while ((pos_couloir[0] != fin_couloir[0]) || (pos_couloir[1] != fin_couloir))
        {
            while ((pos_couloir[0] != fin_couloir[0]) &&
                   (nom_du_board[pos_couloir[0] + pas_x + columns * pos_couloir[1]] == ' '))
            {
                pos_couloir[0] += pas_x;
            }
            while ((pos_couloir[1] != fin_couloir[1]) &&
                   (nom_du_board[pos_couloir[0] + columns * (pos_couloir[1] + pas_y)] == ' '))
            {
                pos_couloir[1] += pas_x;
            }
        }
    }
};