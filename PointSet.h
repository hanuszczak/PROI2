#ifndef POINTSET_H
#define POINTSET_H
#include "Point.h"
#include <vector>

using namespace std;

class PointSet
{
    vector<Point>* Members;

    public:
        /** Default constructor */
        PointSet();
        /** Default destructor */
        virtual ~PointSet();
        /** Prints Set */
        void PrintSet();
        /** Returns PointSet with 2 elements (points) which are closest to each other */
        PointSet ClosestPoints ();
        void AddPoint(Point p);
        PointSet operator+(PointSet);
        PointSet& operator+=(PointSet);
        PointSet operator*(PointSet);
        PointSet& operator*=(PointSet);

};

#endif // POINTSET_H
