#pragma once

#include <iostream>
#include <string>

class Point {
private:
	int x, y;
	static int count;

public:
	Point();

	Point(int x, int y);

	Point(const Point& point);

	~Point();

	std::string toString() const;

	int getX() const;

	int getY() const;

	friend std::ostream& operator<<(std::ostream& os, const Point& point);

protected:
	void foo() const;
};