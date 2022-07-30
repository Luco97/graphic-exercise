#include "coordinates.h"

coordinates::coordinates(double x, double y) {
	setValues(x, y);
}

void coordinates::setValues(double i, double j) {
	x = i;
	y = j;
}

std::vector<double> coordinates::getValues() {
	return { x, y };
}

bool coordinates::operator > (coordinates& coor) {
	if (this->x > coor.x)
		return true;
	return false;
}