#include "figure.h"

double Figure::getArea() const {
	return this->area;
}

std::vector<Point> Figure::getPoints() const {
	return this->points;
}