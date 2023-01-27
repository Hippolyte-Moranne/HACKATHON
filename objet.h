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
    void print()
    {
        cout << "abscisse" << pos_x << endl;
        cout << "ordonée" << pos_y << endl;
    };
    virtual void afficher() = 0;
};