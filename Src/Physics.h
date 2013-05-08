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

	float CalculateAverageDistanceFromOrigin()
	{
		float totalDisplacment = 0.0f;

		std::vector<Point2D<int>>::iterator iter = mPoints.begin();
		while (iter != mPoints.end())
		{
			totalDisplacment += std::sqrtf((float)(iter->x)^2+(float)(iter->y)^2);
			iter++;
		}

		return totalDisplacment/mPoints.size();
	}
};

#endif