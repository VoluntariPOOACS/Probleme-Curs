#include <iostream>

using namespace std;

class ora_ex {
    int ora;
    int min;
    int sec;
public:
    ora_ex(int o = 0, int m = 0, int s = 0) {
        ora = o;
        min = m;
        sec = s;
    }

    int inSec() const 
    //vedeti ce se intampla cand functia nu
    //garanteaza ca datele nu vor fi modificate
    {
        return ora * 3600 + min * 60 + sec;
    }

    bool operator< (const ora_ex &oe) const
    {
        return (this->inSec()<oe.inSec());
    }

    /*
    friend bool operator< (const ora_ex &oe1, const ora_ex &oe2)
    {
        return (oe1.inSec()<oe2.inSec());
    }
    */
    

    bool operator>= (const ora_ex &oe) const 
    {
        return (!(*this<oe));
    }

    /*
    friend bool operator>= (const ora_ex &oe1, const ora_ex &oe2)
    {
        return (!(oe1<oe2));
    }
    */

    bool operator== (const ora_ex &oe) const
    {
        return (inSec() == oe.inSec());
    }

    /*
    friend bool operator== (const ora_ex &oe1, const ora_ex &oe2)
    {
        return (oe1.inSec()==oe2.inSec());
    }
    */

    bool operator!= (const ora_ex &oe) const 
    {
        return (!(*this==oe));
    }
    //sunt inline pt ca sunt implementate in interfata

    /*
    friend bool operator!= (const ora_ex &oe1, const ora_ex &oe2)
    {
        return (!(oe1 == oe2));
    }
    */

};

int main() {
    ora_ex oe1(3, 20, 4), oe2(4, 20, 0);
    // pentru functiile friend, se scrie precum in comentarii
    cout << (oe1 < oe2) << endl;
    // cout << (operator<(oe1, oe2)) << endl;
    cout << (oe1 >= oe2) << endl;
    // cout << (operator>=(oe1, oe2)) << endl;
    cout << (oe1 == oe2) << endl;
    // cout << (operator==(oe1, oe2)) << endl;
    cout << (oe1 != oe2) << endl;
    // cout << (operator!=(oe1, oe2)) << endl;

    // se mai pot apela si asa(daca functii membre)
    cout << (oe1.operator<(oe2)) << endl;
    cout << (oe1.operator>=(oe2)) << endl;
    cout << (oe1.operator==(oe2)) << endl;
    cout << (oe1.operator!=(oe2)) << endl;

    return 0;
}