#pragma once

#include "figure.h"
#include <ostream>

class Triangle : public Figure{
protected:
	void calcArea();
public:
	Triangle();

	Triangle(Point& p1, Point& p2, Point& p3);

	Triangle(const Triangle& triangle);

	~Triangle();

	void printPoints() const;

	std::string toString() const;

	friend std::ostream& operator<<(std::ostream& os, const Triangle& tr);
};