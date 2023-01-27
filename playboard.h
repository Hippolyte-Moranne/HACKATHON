#include <iostream>
#include <vector>
#include "keyboard-event.h"

// nombre de lignes et de colonne du board
extern const int rows;
extern const int columns;

extern int MS; // milli-secondes

// vecteur représentant le board
extern std::vector<char> board;

// ré-initialise le board
void reset_board();

// dessine le board
void draw_board();