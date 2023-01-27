#include "keyboard-event.h"
#include "playboard.h"
#include <iostream>
#include <vector>

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

