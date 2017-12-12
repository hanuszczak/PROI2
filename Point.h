#ifndef POINT_H
#define POINT_H

class PointSet2;


//Próba mikrp

class Point
{
    public:
        /** Default Constructor */
        Point();
        /** Constructor */
        Point(int, int);
        /** Copying Constructor */
        Point(const Point&);
        /** Destructor */
        virtual ~Point();

        /** Compares points */
        void CreatePoint();
        bool operator==(Point&);
        bool operator<(Point&);
        bool operator>(Point&);
        bool operator>=(Point&);
        bool operator<=(Point&);
        static bool Compare(Point, Point);
        void PrintPoint();
    private:
        friend class PointSet2;
        int x, y;

};

#endif // POINT_H
