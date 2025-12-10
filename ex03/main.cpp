#include "./Point.hpp"
#include <iostream>
int main( void ) {
	Point A(0, 0);
	Point B(4, 0);
	Point C(0, 4);
	Point P(2, 2);

	std::cout << (bsp(A, B, C, P) ? "true" : "false")  << "\n";
	Point A1 = Point(0, 0);
	Point B1 = Point(4, 0);
	Point C1 = Point(0, 4);
	Point P1 = Point(12, 12);
	std::cout << (bsp(A1, B1, C1, P1) ? "true" : "false")  << "\n";
	Point A2 = Point(0, 0);
	Point B2 = Point(4, 0);
	Point C2 = Point(0, 4);
	Point P2 = Point(0, 0);
	std::cout << (bsp(A2, B2, C2, P2) ? "true" : "false")  << "\n";
	Point A3 = Point(0, 0);
	Point B3 = Point(4, 0);
	Point C3 = Point(0, 4);
	Point P3 = Point(-10, 12);
	std::cout << (bsp(A3, B3, C3, P3) ? "true" : "false")  << "\n";
	return 0;
}
