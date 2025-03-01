#include "resistor_color.h"

unsigned int color_code(resistor_band_t color) {
    return color;
}

const resistor_band_t c[] = {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
};

const resistor_band_t* colors(void) {
    return c;
}
