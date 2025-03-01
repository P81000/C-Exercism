#include "darts.h"

unsigned int score(coordinate_t pos) {
    double dist = pos.x * pos.x + pos.y * pos.y;
    if (dist <= 1.0) return 10;
    if (dist <= 25.0) return 5;
    if (dist <= 100.0) return 1;
    return 0;
}
