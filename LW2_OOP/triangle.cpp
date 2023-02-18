#include "triangle.h"

Triangle::Triangle() {
	std::cout << "Triangle(default) started.\n";
	this->points.reserve(3);
	this->points.push_back(Point());
	this->points.push_back(Point());
	this->points.push_back(Point());
	std::cout << "Triangle(default) created.\n";
	calcArea();
}

Triangle::Triangle(Point& p1, Point& p2, Point& p3) {
	std::cout << "Triangle(params...) started.\n";
	this->points.reserve(3);
	this->points.push_back(p1);
	this->points.push_back(p2);
	this->points.push_back(p3);
	std::cout << "Triangle(" << p1 << ", " << p2 << ", " << p3 << ") created.\n";
	calcArea();
}

Triangle::Triangle(const Triangle& tr) {
	std::cout << "Triangle(copying) started.\n";
	this->points.reserve(3);
	this->points.push_back(tr.points[0]);
	this->points.push_back(tr.points[1]);
	this->points.push_back(tr.points[2]);
	std::cout << "Triangle(" << tr << ") created.\n";
	calcArea();
}

Triangle::~Triangle() {
	std::cout << "Triangle{" 
		<< points[0] << ", " 
		<< points[1] << ", " 
		<< points[2] << "} destroyed." << std::endl;
}

void Triangle::calcArea(){
	double a = points[1].getX() - points[0].getX();
	double b = points[2].getY() - points[0].getY();
	double c = points[2].getX() - points[0].getX();
	double d = points[1].getY() - points[0].getY();

	this->area = 0.5 * (a * b - c * d);
	std::cout << "area: " << area << std::endl;
}

void Triangle::printPoints() const {
	std::cout 
		<< points[0].toString() << "\n"
		<< points[1].toString() << "\n"
		<< points[2].toString() << "\n";
}

std::string Triangle::toString() const {
	std::string str = "Triangle {\n" +
		points[0].toString() + "\n" +
		points[1].toString() + "\n" +
		points[2].toString() + "\n" + "}";
	return str;
}

std::ostream& operator<<(std::ostream& os, const Triangle& tr) {
	os << "triangle{" 
		<< tr.points[0] << ", " 
		<< tr.points[1] << ", " 
		<< tr.points[2] << "}";
	return os;
}