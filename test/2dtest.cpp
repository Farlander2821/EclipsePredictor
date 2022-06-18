#include <iostream>
#include <math.h>

//All units are in base SI (meter, kilogram, etc) unless otherwise specified
const double EARTH_RADIUS = 6.3781e6; //km
const double MOON_RADIUS = 1737400; //km
const double SUN_RADIUS = 6.957e8; //km
const double MOON_DISTANCE = 3.844e8; //km
const long double SUN_DISTANCE = 1.496e11; //km

float umbra_rad();

int main() {
	std::cout << "Given perfect alignment, the approximate radius of the umbral circle is " << umbra_rad() << "m\n";
	return 0;
}

float umbra_rad() {
	float slope = (float(SUN_RADIUS) - float(MOON_RADIUS)) / (float(SUN_DISTANCE) - float(MOON_DISTANCE));
	float umbra_height = (slope * EARTH_RADIUS) / sqrt(slope + 1);
	float umbra_angle = atan(umbra_height / EARTH_RADIUS);
	float umbra_rad = EARTH_RADIUS * umbra_angle;
	return umbra_rad;
}