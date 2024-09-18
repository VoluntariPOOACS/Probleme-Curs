#include <iostream>
#include <cstring>

using namespace std;

class Test {
    int a;
    char* b;
    double c;
public:
    Test (int aa = 0, char* bb = NULL, double cc = 0.0): a(aa), c(cc) {
        if (bb != NULL) {
            b = new char[strlen(bb) + 1];
            strcpy(b, bb);
        }
        else b = NULL;
    }
    void afis() {
        cout << a << " " << (b == NULL ? "gol" : b) << endl;
        // b == NULL ? "gol" : b inseamna: Daca se respecta conditia, valoarea este "gol", daca nu, valoarea este b
    }
/*
    const int x;
    int& y;
    int z;
public: 
    Test(int xx, int &yy, int z): x(xx), y(yy), z(z) {
    // x = xx;
    // ERROR: assignment of read-only member 'Test::x'
    // y = yy;
    // ERROR: unintialized reference member in 'int&' [-fpermissive]|
    // z = z;
    //Eroare logica: atributul z ramane ninitializat; this->z = z;
    }
    void afis() {cout << x << "" << y << " " << z << endl;}
*/
};

int main() {
    Test x(10, "ana", 1.2);
    x.afis();
    Test y;
    y.afis();
/*
    int val = 2;
    Test x(1, val , 3);
    x.afis();
    val = 10;
    x.afis();
    return 0;
*/
    return 0;
}