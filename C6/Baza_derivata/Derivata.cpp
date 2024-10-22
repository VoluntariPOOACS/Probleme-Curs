#include "Derivata.h"
Derivata::Derivata() {}

Derivata::Derivata(int a1, int a2) : Baza(a1), atr2(a2) {}

void Derivata::set_atr2(int n) { atr2 = n; }

void Derivata::afisare()
{
    Baza::afisare();
    cout << "atr2 = " << atr2 << endl;
}
