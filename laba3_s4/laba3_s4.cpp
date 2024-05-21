#include <iostream>
#include <string>
#include "Shape.h"
#include "Shape2D.h"
#include "Shape3D.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "TriangularPyramid.h"
#include "Cylinder.h"
#include "Sphere.h"

int main() {
	Square sq(6.0);
	sq.CalculateArea();
	sq.ShowInfo();

	Triangle tr(6, 5);
	tr.CalculateArea();
	tr.ShowInfo();

	Circle cr(4);
	cr.CalculateArea();
	cr.ShowInfo();

	TriangularPyramid pyramid(9, 5, 3);
	pyramid.CalculateVolume();
	pyramid.ShowInfo();

	Cylinder cyl(7, 6);
	cyl.CalculateVolume();
	cyl.ShowInfo();


	Sphere sp(5);
	sp.CalculateVolume();
	sp.ShowInfo();


	return 0;
}
