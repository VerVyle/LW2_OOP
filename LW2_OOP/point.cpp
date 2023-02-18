#include <iostream>
#include <string>
#include "point.h"

Point::Point() {
	//std::cout << "Point(default) started." << std::endl;
	this->x = 0;
	this->y = 0;
	std::cout << "Point(default) created." << std::endl;
}

Point::Point(int x, int y) {
	//std::cout << "Point(params...) started." << std::endl;
	this->x = x;
	this->y = y;
	std::cout << "Point(x=" << x << ",y=" << y << ") created." << std::endl;
}

Point::Point(const Point &point) {
	//std::cout << "Point(copying) started." << std::endl;
	this->x = point.x;
	this->y = point.y;
	std::cout << "Point(const Point &point=" << point << ") created." << std::endl;
}

Point::~Point() {
	std::cout << "Point(x=" << x << ",y=" << y << ") destroyed." << std::endl;
}

std::string Point::toString() const {
	std::string str = "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
	return str;
}

int Point::getX() const {
	return this->x;
}

int Point::getY() const {
	return this->y;
}

void Point::foo() const {
	std::cout << "Point::foo() called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
	os << "(" << point.getX() << ", " << point.getY() << ")";
	return os;
}