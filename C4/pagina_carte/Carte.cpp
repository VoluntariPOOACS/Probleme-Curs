#include "Pagina.h"

class Carte {
    char *titlu;
    Pagina *pag;
    int dim; //cate pagini are cartea
public:
    
    Carte(int d, char* t) {
        pag = new Pagina[dim = d]; // apel constructor fara param din Pagina
        titlu = new char[strlen(t) + 1];
        strcpy(titlu, t);
    }

    void addPag(const Pagina &p) {
        pag[p.get_nr_pag()] = p;
    } //apel operator= din Pagina

    friend ostream& operator<<(ostream &dev, const Carte &p) {
        dev << "Titlu: " << p.titlu << endl;
        dev << "Pagini: " << p.pag << endl;
        if (p.pag != NULL)
            for (int i = 0; i < p.dim; i++)
                dev << p.pag[i];
        return dev; // apel operator<< din Pagina
    }

    int getDim() { return dim; }
}; // in Carte nu am acces la atributele din Pagina pentru ca sunt private => lucrez cu metode

int main() 
{
    Carte c(20, "Felix");
    for (int i = 0; i < c.getDim(); i++)
        c.addPag(Pagina("text", i)); // initializarea obiectelor din container
    cout << c;
    return 1;
}