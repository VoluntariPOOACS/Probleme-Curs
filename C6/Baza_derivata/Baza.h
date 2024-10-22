#pragma once
#include <iostream>
using namespace std;

class Baza
{
protected:
    int atr1;

public:
    Baza();
    Baza(int);
    void set_atr1(int);
    virtual void afisare();
    virtual ~Baza() {};
};
