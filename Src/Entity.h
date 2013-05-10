#ifndef _pg_ENTITY_H
#define _pg_ENTITY_H

#include "Main.h"

class Entity
{
private:
	Point2D<double> mPos;
	int speed;

public:
	Entity();
	
	void Move(double x, double y) { mPos.x += x; mPos.y += y; }
};

#endif