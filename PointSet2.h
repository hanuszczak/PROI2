#ifndef POINTSET2_H
#define POINTSET2_H
#define SIGN "-------------"
#include <vector>
#include "Point.h"

using namespace std;


class PointSet2
{
    public:
        /** Constructor */
        PointSet2();
        /** Copying constructor */
        PointSet2(const PointSet2&);
        /** Destructor */
        virtual ~PointSet2();

        void Print();
        void AddPoint(Point&);
        PointSet2 Closest(); //return pair of closest points
        PointSet2 operator+(PointSet2&);
        void operator+=(PointSet2&);
        PointSet2 operator*(PointSet2&);
        void operator*=(PointSet2&);
        bool operator==(PointSet2&);
        bool Find(Point&);
        void CreateSet();

    protected:

    private:
        vector<Point> Members;

};

#endif // POINTSET2_H
