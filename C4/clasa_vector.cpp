#include <iostream>

using namespace std;

class vector {
    int n;
    int *buf;
public:
    vector(int n = 0)
    {
        this->n = n;
        if (n <= 0) buf = NULL;
        else buf = new int[n];
    }

    vector (const vector& v)
    {
        buf = NULL;
        *this = v;
    }

    int getDim() {
        return n;
    }

    vector& operator=(const vector& v)
    {
        if(this != &v) {
            delete [] buf;
            n = v.n;
            if (n <= 0) buf = NULL;
            else {
                buf = new int[v.n];
                for (int i = 0; i < n; i++)
                    buf[i] = v.buf[i];
            }
        }
        return *this;
    }

    ~vector() {
        delete [] buf;
    }
};

int main() {
    // Aici poti sa verifici functionalitatea clasei
    return 0;
}