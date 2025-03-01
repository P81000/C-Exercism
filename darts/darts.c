#include "darts.h"

bool is_inside(coordinate_t pos, int radius) {
    return (pow(pos.x, 2) + pow(pos.y, 2)) <= pow(radius, 2);
}

unsigned int score(coordinate_t pos) {
    if (is_inside(pos, 1)) return 10;
    if (is_inside(pos, 5)) return 5;
    if (is_inside(pos, 10)) return 1;
    return 0;
}
