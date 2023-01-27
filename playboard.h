#include <iostream>
#include <vector>
#include "keyboard-event.h"

// nombre de lignes et de colonne du board
const int rows = 30;
const int columns = 60;

//
int MS = 600; // milli-secondes (200 pour aller plus vite)

// vecteur représentant le board
std::vector<char> board = std::vector<char>(rows * columns, 'a');

// ré-initialise le board
void reset_board()
{
  for (int i = 0; i < board.size(); i++)
    board[i] = ' ';
}

// dessine le board
void draw_board()
{
  for (int r = 0; r < rows; r++)
  {
    for (int c = 0; c < columns; c++)
      std::cout << board.at(r * columns + c);
    std::cout << std::endl;
  }
}