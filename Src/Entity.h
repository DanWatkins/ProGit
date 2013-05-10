#ifndef _pg_ENTITY_H
#define _pg_ENTITY_H

#include "Main.h"

class Entity
{
private:
	Point2D<double> mPos;
	int mSpeed;

public:
	Entity();
	
	void Reset() { mSpeed = 1; mPos.x = 0; mPos.y = 0; }
	void Move(double x, double y) { mPos.x += x; mPos.y += y; }
	int GetSpeed() { return mSpeed; }
};

#endif