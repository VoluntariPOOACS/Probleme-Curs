#include "point.h"

void point::modifica (int vx, int vy) {
    x = vx;
    y = vy;
}
int point::getx() const {
    return x;
}
int point::gety() const {
    return y;
}