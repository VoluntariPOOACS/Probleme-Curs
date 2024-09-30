#include "Derivata.h"
// nu includ si "Baza.h" deoarece este incluse in headerul Derivata.h
//altfel am eroare: "redifition on 'class Baza'"

int main() { 
    Baza b(1); // creez un obiect de tip Baza
    b.afisare_atr1();
    cout << endl << "______________________" << endl;

    Derivata d(1, 1); // creez un obiect d de tip Derivata
    d.afisare_atr12();
    cout << endl << "______________________" << endl;

    d.set_atr1(2); // folosind metoda set_atr1 mostenita din clasa Baza schimb atr1 al
    //obiectului d de tip Derivata

    d.afisare_atr1(); // si il afisez cu metoda mostenita din Baza - afisare_atr1()
    cout << endl << "______________________" << endl;

    //d.atr1; // nu am acces la el din afara ierarhiei de clase, deoarece este protected

    return 0;
}// la iesirea din main se apeleaza destructorii pentru b si d; cum?