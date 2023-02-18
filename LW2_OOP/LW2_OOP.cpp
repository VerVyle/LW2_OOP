#include <iostream>
#include "point.h"
#include "triangle.h"

using namespace std;

void separate() {
	cout << "<--------------------------------------------------------------->" << endl;
}

int main() {
	Figure* tr = new Triangle();
	cout << tr->toString() << endl;
	separate();
	delete(tr);
	return 0;
}