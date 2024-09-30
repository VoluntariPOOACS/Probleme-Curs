#include "Baza.h" // nu mai includem iostream, a fost inclus in Baza.h
// clasa derivata din tipul Baza - cod salvat in Derivata.h
class Derivata: public Baza { // derivare publica - cea mai raspndita forma de derivare
//prin derivare se mostenesc atributele si metodele clasei de baza: sunt tratate ca fiind atribute / metode ale derivatei
    int atr2;
public:
    //Derivata() {} ce se intampla 🤨?

    Derivata(int a1, int a2): Baza(a1), atr2(a2){ //constructorul pt baza trebuie
    //aplecat explicit inainte de implementarea constructorului clasei derivate,
    // daca nu - se apleaza constructorul fara parametrii pentru Baza
    }

    void set_atr2(int n) {
        atr2 = n;
    }

    void afisare_atr2() {
        cout << "atr2 = " << atr2 << endl; 
    }

    void set_atr12(int n, int m) {
        atr1 = n;
        // am acces direct la atr1 pentru ca e atribut al clasei Derivata 
        // pot, daca vreau, sa il modific cu functia membra mostenita din Baza: set_atr1(n);
        atr2 = m; // set_atr2(m)
    }

    void afisare_atr12() {
        cout << "atr1 = " << atr1 << endl; // afisare_atr1()
        cout << "atr2 = " << atr2 << endl; // afisare_atr2()
    }
};