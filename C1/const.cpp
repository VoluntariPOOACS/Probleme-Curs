#include <iostream>

using namespace std;

int main () {
    /// POINTER CONSTANT
    int a[] = {10, 11}, b = 3;
    int * const ptr = a;
    cout << *ptr << endl;
    cout << ptr << endl;

    *ptr = 11; // se poate modifica valoarea

    cout << *ptr << endl;
    cout << ptr << endl;

    //ptr = &b; EROARE

/*

    /// POINTER LA O CONSTANTA
    int a = 10, b;
    const int * ptr = &b;

    ptr = &a; // se poate modifica adresa

    cout << *ptr << endl;
    cout << ptr << endl;

    // *ptr = 11; EROARE

*/

    return 0;
}