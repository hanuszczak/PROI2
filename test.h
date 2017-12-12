#ifndef TEST_H
#define TEST_H
#define SIGN2 "**************"
#include "Point.h"
#include "PointSet2.h"
#include <iostream>



bool AutomaticTest();

template <typename T>
bool TestAddPoint(PointSet2<T>&, Point<T>&);

template <typename T>
bool TestClosest(PointSet2<T>&, PointSet2<T>&);

template <typename T>
bool TestSetSum1(PointSet2<T>&, PointSet2<T>&, PointSet2<T>&);

template <typename T>
bool TestSetSum2(PointSet2<T>&, PointSet2<T>&, PointSet2<T>&);

template <typename T>
bool TestSetIntersection1(PointSet2<T>&, PointSet2<T>&, PointSet2<T>&);

template <typename T>
bool TestSetIntersection2(PointSet2<T>&, PointSet2<T>&, PointSet2<T>&);

#endif // TEST_H_INCLUDED
