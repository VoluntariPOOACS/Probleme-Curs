#include <iostream>

using namespace std;

class complex {
    double re, im;
public:
    complex(double x = 0, double y = 0) {
        set(x, y);
    }
    void set(double x, double y) {
        re = x;
        im = y;
    }
    double getRe() const {
        return re;
    }
    void afisare() const {
        cout << re << " " << im << endl;
    }
    friend void sort_dupa_re(int, complex *);
    // Ar avea sens sortarea sa fie functie membra? Cum s-ar apela?
};

void sort_dupa_re(int n, complex *vec) {
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            if (vec[i].re > vec[j].re) {
                complex aux(vec[i]);
                vec[i] = vec[j];
                vec[j] = aux;
            }
}
//nu e functie membra a clasei, dar e declarata functie prietena
// => am acces la toate atributele si metodele clasei
/*

void sort_dupa_re(int n, complex *vec) {
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            if (vec[i].getRe() > vec[j].getRe()) {
                complex aux(vec[i]);
                vec[i] = vec[j];
                vec[j] = aux;
            }
}

//functie ne-membra a clasei complex dar care manipuleaza
// obiecte de acest tip

*/

int main () {
    complex *vec = new complex[3];
    for (int i = 0; i < 3; i++) vec[i].set(3 - i, 3 - i);

    for (int i = 0; i < 3; i++) vec[i].afisare();
    cout << endl;

    sort_dupa_re(3, vec);

    for (int i = 0; i < 3; i++) vec[i].afisare();
    
    delete [] vec;
    return 0;
}