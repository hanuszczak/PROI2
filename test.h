#ifndef TEST_H
#define TEST_H
#define SIGN2 "**************"
#include "Point.h"
#include "PointSet2.h"
#include <iostream>

bool AutomaticTest();
bool TestAddPoint(PointSet2&, Point&);
bool TestClosest(PointSet2&, PointSet2&);
bool TestSetSum1(PointSet2&, PointSet2&, PointSet2&);
bool TestSetSum2(PointSet2&, PointSet2&, PointSet2&);
bool TestSetIntersection1(PointSet2&, PointSet2&, PointSet2&);
bool TestSetIntersection2(PointSet2&, PointSet2&, PointSet2&);

#endif // TEST_H_INCLUDED
