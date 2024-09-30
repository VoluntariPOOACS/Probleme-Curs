#include <iostream>

using namespace std;

class Baza {

protected: 
    int atr1;
public:
    Baza(int i): atr1(i) {}

    void afisare() {
        cout << "atr1 = " << atr1 << endl;
    }
};

class Derivata: public Baza {

    int atr2;
public:
    Derivata(int a1, int a2): Baza(a1), atr2(a2) {}

    void afisare() {
        cout << "atr1 = " << atr1 << endl;
        cout << "atr2 = " << atr2 << endl;
    }
};

int main() {
    Baza b(1);
    Derivata d(1, 1);

    b = d;          // Ce functie se apeleaza? Din ce clasa face parte? Ce se intampla de fapt?
    b.afisare();    // atr1 = 1;

    // d = b; rezulta in ERROR: no match for 'operator=' in 'd = b'
    return 0;
}