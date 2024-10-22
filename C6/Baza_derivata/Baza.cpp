#include "Baza.h"
Baza::Baza() {}

Baza::Baza(int i) : atr1(i) {}

void Baza::set_atr1(int i) { atr1 = i; }

void Baza::afisare() { cout << "atr1 = " << atr1 << endl; }
