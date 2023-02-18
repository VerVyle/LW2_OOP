#pragma once

#include <vector>
#include <iostream>
#include "point.h"

class Figure {
protected:
	std::vector<Point> points;
	double area;
	virtual void calcArea() {};
public:
	double getArea() const;

	std::vector<Point> getPoints() const;

	virtual std::string toString() const {
		return "Just figure\n";
	}

	static void sayHello() {
		std::cout << "Hello" << std::endl;
	}
};