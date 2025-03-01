#ifndef DARTS_H
#define DARTS_H

#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef struct {
    float x;
    float y;
} coordinate_t;

unsigned int score(coordinate_t pos);
bool is_inside(coordinate_t pos, int radius);

#endif
