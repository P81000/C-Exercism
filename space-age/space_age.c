#include "space_age.h"

int64_t seconds_in_earth_year = 31557600;

float planet_year_multipliers[] = {
    0.2408467,
    0.61519726,
    1.0,
    1.8808158,
    11.862615,
    29.447498,
    84.016846,
    164.79132,
};


float age(planet_t planet, int64_t seconds) {
    if (planet < 0 || planet >= sizeof(planet_year_multipliers) / sizeof(planet_year_multipliers[0])) {
        return -1;
    }
    return seconds / (seconds_in_earth_year * planet_year_multipliers[planet]);
}