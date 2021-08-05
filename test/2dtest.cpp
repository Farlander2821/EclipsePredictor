#include <iostream>

//All units are in base SI (meter, kilogram, etc) unless otherwise specified
const int EARTH_RADIUS = 6.3781e6;
const int MOON_RADIUS = 1737400;
const int SUN_RADIUS = 6.957e8;
const int MOON_DISTANCE = 3.844e8;
const long long int SUN_DISTANCE = 1.496e11;

int main() {
	std::cout << EARTH_RADIUS << std::endl << MOON_RADIUS << std::endl << SUN_RADIUS << std::endl << MOON_DISTANCE << std::endl << SUN_DISTANCE << std::endl << "It worked";
	return 0;
}