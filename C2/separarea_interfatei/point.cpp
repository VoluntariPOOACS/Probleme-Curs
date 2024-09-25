#include "point.h"
// implementarea metodelor
void point::modifica (int vx, int vy) {
    x = vx; // this->x = vx;
    y = vy; // this->y = vy;
}
int point::getx() const {
    return x; // return this->x;
}
int point::gety() const {
    return y; // return this->y;
}