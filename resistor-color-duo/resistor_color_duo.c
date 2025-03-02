#include "resistor_color_duo.h"

unsigned int color_code(resistor_band_t colors[2]) {
    return colors[0] * 10 + colors[1];
}
