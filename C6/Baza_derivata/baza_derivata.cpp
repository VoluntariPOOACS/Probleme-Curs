#include "Derivata.h"

int main() {
    int n;
    cout << "Dati dimensiunea";
    cin >> n;
    Baza **vec = new Baza *[n];
    for (int i = 0; i < n; i++) {
        cout << "Introduceti obiect de tip Baza(0) sau Derivata(1)?";
        int tip;
        cin >> tip;
        if (tip == 0) {
            cout << "Dati atr1:";
            int a1;
            cin >> a1;
            vec[i] = new Baza(a1);
        }
        else if (tip == 1)
        {
            cout << "Dati atr1 si atr2:";
            int a1, a2;
            cin >> a1;
            cin >> a2;
            vec[i] = new Derivata(a1, a2);
        }
        else
            i--;
    }

    for (int i = 0; i < n; i++) {
        vec[i]->afisare();
    }
    
    // comportament polimorf; nu mai testez eu care e tipul si nu fac conversii explicite
    // cum s-a intamplat in ultimul exemplu din cursul trecut
    // Baza *b=new Derivata(1,1);
    //  b->set_atr2(2);

    // atentie, set_atr2 nu e o functie din Baza
    // ERROR:'class Baza' has no member named 'set_atr2’

    for (int i = 0; i < n; i++) {
        delete vec[i];
    }
    delete[] vec;
    return 0;
}
