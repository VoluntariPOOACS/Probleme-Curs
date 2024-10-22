#include <iostream>
using namespace std;

class Baza
{
protected:
    int atr1;

public:
    Baza(int i) : atr1(i) {}
    void afisare() const { cout << "atr1 = " << atr1 << endl; }
    int getAtr1() const { return atr1; }
};

class Derivata : public Baza
{
    int atr2;

public:
    Derivata(int a1, int a2) : atr2(a2), Baza(a1) {}
    void afisare() const
    {
        Baza::afisare();
        cout << " atr2 = " << atr2 << endl;
    } // redefinire
    int getAtr2() const { return atr2; }
};

int main()
{
    Baza *bp = new Baza(1);
    bp->afisare(); // atr1=1
    bp = new Derivata(2, 2);
    bp->afisare();               // atr1=2  // afisare() de tipul pointerului adica Baza::afisare()
    ((Derivata *)bp)->afisare(); // afisare() de tipul pointerului adica Derivata::afisare()
    return 0;                    // atr1=2 atr2=2
}
