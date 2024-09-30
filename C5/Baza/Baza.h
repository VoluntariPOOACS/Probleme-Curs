#include <iostream>

using namespace std;

class Baza {
    int atr1; // atributele si metodele declarate protected sunt accesibile in clasa de baza
    //si toate clasele derivate din ea, dar nu sunt accesibile din afara ierahiei de clase
public:
    Baza(int i): atr1(i) { // apel pseudoconstructor pentru atr1 de tip int
    // sau atr1 = i; (doar constructorii pot apela alti constructori / pseudoconstructori)
    }  

    void set_atr1(int i) {
        atr1 = i;
    }

    void afisare_atr1() {
        cout << "atr1 = " << atr1 << endl;
    }
}; 