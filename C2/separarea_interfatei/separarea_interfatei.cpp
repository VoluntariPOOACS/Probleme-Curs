#include <iostream>
#include "point.h"
using namespace std;

int main() {
    point p, *p1, *vect;
    
    p.modifica(1, 1);
    cout << p.getx() << " " << p.gety() << endl << endl;

    p1 = new point;
    p1->modifica(2, 2);
    cout << p1->getx() << " " << p1->gety() << endl << endl;

    int n; cin >> n;
    vect = new point[n];
    for (int i = 0; i < n; i++) 
        vect[i].modifica(i, i);
    for (int i = 0; i < n; i++)
        cout << vect[i].getx() << " " << vect[i].gety() << endl;
    // cum eliberam spatiul alocat dinamic??
    return 0;
}