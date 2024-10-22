#pragma once
#include "Baza.h"
class Derivata : public Baza
{
protected:
    int atr2;

public:
    Derivata();
    Derivata(int, int);
    void set_atr2(int);
    void afisare(); // afisare din Derivata e virtuala
}; // destructorul generat automat e virtual