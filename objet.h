#pragma once
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

class Objet
{
    int pos_x;
    int pos_y;

public:
    Objet(int x, int y) : pos_x(x), pos_y(y) {}
    Objet()
    {
        pos_x = 0;
        pos_y = 0;
    }
    void print()
    {
        cout << "abscisse" << pos_x << endl;
        cout << "ordonée" << pos_y << endl;
    };
    int getPosX() const { return pos_x; }
    void setPosX(int x) { pos_x = x; }
    virtual void afficher() {};
};
