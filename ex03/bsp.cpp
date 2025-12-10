#include "./Point.hpp"
#include <iostream>

static Fixed	fixedAbs(const Fixed &f) {
	if (f < Fixed(0))
		return (Fixed(0) - f);
	return (f);
}

static Fixed	calculateTriangleArea(Point a, Point b, Point c) {
	Fixed	area;
	area = ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / Fixed(2));
	area = fixedAbs(area);
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	/*We calculate the area of the three triangles*/
	/*	constructed using the P and other points and then compare it with*/
	/*	the original triangle area, if they're equal --> P is inside*/

	Fixed AreaA = calculateTriangleArea(point, a, b);
	Fixed AreaB = calculateTriangleArea(point, b, c);
	Fixed AreaC = calculateTriangleArea(point, c, a);
	Fixed totalArea = AreaA + AreaB + AreaC;
	Fixed triangleArea = calculateTriangleArea(a, b, c);
	return (triangleArea == totalArea);
}
