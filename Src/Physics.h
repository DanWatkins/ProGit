#ifndef _pg_PHYSICS_H
#define _pg_PHYSICS_H

#include "Main.h"

class Physics
{
private:
	std::vector<Point2D<int>> mPoints;

public:
	Physics();

	void MakePoint(int x, int y)
	{
		Point2D<int> point;
		point.x = x;
		point.y = y;
	}
};

#endif