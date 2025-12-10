#include "./Point.hpp"

static Fixed	fixedAbs(Fixed &f) {
	if (f < Fixed(0))
		return (f);
	return (Fixed(0) - f);
}

static Fixed	CaluclateTriangleArea(Point &a, Point &b, Point &c) {
	Fixed	area;
	area = ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
	area = fixedAbs(area);
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	/*We calculate the area of the three triangles*/
	/*	constructed using the P and other points and then compare it with*/
	/*	the original triangle area, if they're equal --> P is inside*/
	Fixed	AreaA(0);
	Fixed	AreaB(0);
	Fixed	AreaC(0);

	AreaA = CaluclateTriangleArea(point, a, b);
	AreaB = CaluclateTriangleArea(point, b, c);
	AreaC = CaluclateTriangleArea(point, c, a);
	return (true);
}
