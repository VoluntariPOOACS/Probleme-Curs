#include <iostream>
#include <cstring>

using namespace std;

class Pagina {
    char* text; //un text de o anumita lungime
    int nr_pag;  //numarul paginii
public:
    Pagina() {
        text = NULL; nr_pag = 0;
        // necesar la crearea vectorului de pagini din Carte
    }

    Pagina(char* c, int nr) {
        if (c == NULL) {text = NULL, nr_pag = 0;}
        else {
            text = new char[strlen(c) + 1];
            strcpy(text, c);
            nr_pag = nr;
        }
    }

    Pagina& operator=(const Pagina &p) {
        // in addPag se foloseste atribuirea de obiecte de tip Pagina
        if (this != &p) {
            delete [] text;
            text = NULL;
            nr_pag = 0;
            if (p.text != NULL) {
                text = new char[strlen(p.text) + 1];
                strcpy(text, p.text);
                nr_pag = p.nr_pag;
            }
            return *this;
        }
    }

    Pagina(const Pagina &p) {
        text = NULL;
        *this = p;
    }// constructor de copiere

    friend ostream& operator<<(ostream &dev, const Pagina &p) {
        // se foloseste in op<< din Carte
        dev << "Pagina: " << p.nr_pag << endl;
        if(p.text != NULL)
            dev << "Continut: " << p.text << endl << endl;
        return dev;
    }

    int get_nr_pag() const { return nr_pag; }

    int get_nr_char() const { return strlen(text); }
};