#ifndef _pg_POINT2D_H
#define _pg_POINT2D_H

#include "Main.h"

template <class T>
class Point2D
{
public:
	T x, y;

	Point2D() { x = 0.0; y = 0.0; }
};

#endif

