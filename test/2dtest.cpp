#include <iostream>
#include <math.h>

//All units are in base SI (meter, kilogram, etc) unless otherwise specified
const double EARTH_RADIUS = 6.3781e6;
const double MOON_RADIUS = 1737400;
const double SUN_RADIUS = 6.957e8;
const double MOON_DISTANCE = 3.844e8;
const long double SUN_DISTANCE = 1.496e11;

float umbra_rad();

int main() {
	std::cout << "Given perfect alignment, the approximate radius of the umbral circle is " << umbra_rad() << "m\n";
	return 0;
}

float umbra_rad() {
	float slope = (float(SUN_RADIUS) - float(MOON_RADIUS)) / (float(SUN_DISTANCE) - float(MOON_DISTANCE));
	std::cout << "Slope: " << slope << std::endl;
	float umbra_height = (slope * EARTH_RADIUS) / sqrt(slope + 1);
	std::cout << "Height: " << umbra_height << std::endl;
	float umbra_angle = atan(umbra_height / EARTH_RADIUS);
	std::cout << "Angle: " << umbra_angle << std::endl;
	float umbra_rad = EARTH_RADIUS * umbra_angle;
	return umbra_rad;
}