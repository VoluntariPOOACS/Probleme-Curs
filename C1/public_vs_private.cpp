#include <iostream>

using namespace std;

struct point {// incapsularea datelor
    private: // tot ce urmeaza dupa private nu este vizibil decat intre {} 
        int x;
        int y;
    public: // se schimba vizibilitatea
        // functiile vor fi vizibile de oriunde
        void modificare(int xx, int yy)
        {
            //if(xx > 0 && yy > 0)....
            x = xx;
            y = yy;
        }

        void afisare()
        {
            cout << x << " " << y << endl;
        }
};// pana aici sunt campurile x si y accesibile

int main () {
    //point p = {-1, 2}; nu mai functioneaza
    // atribuirea directa de valori pentru x si y deoarece nu sunt accesibile din aceasta zona de cod
    
    point p;
    p.modificare(-1, 2);
    p.afisare();

    //cout << p.x << " " << p.y << endl; nu functioneaza
    //nu mai avem acces la x si y

    p.modificare(3, 3);
    //p.x = 3;
    //p.y = 3;
    //nu vor functiona

    p.afisare();

    return 0;
}
