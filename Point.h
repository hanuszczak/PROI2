#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <float.h>

template <typename T>
class PointSet2;

using namespace std;


template <typename T>
class Point
{
private:
        friend class PointSet2<T>;
        T x, y;
public:
Point() {
}
Point(T x1, T y2) {
    x=x1;
    y=y2;
    }

Point(const Point &P) {
    x=P.x;
    y=P.y;
}
~Point(){
}
bool operator==(Point &A){
    if(x==A.x && y==A.y)
        return true;
    else
        return false;
}
bool operator<(Point &A){
    if(x<A.x) return true;
    else if (x>A.x) return false;
    else {
        if(y<A.y) return true;
        else return false;
    }
}
bool operator>(Point &A){
    if(x<A.x) return false;
    else if (x>A.x) return true;
    else {
        if(y>A.y) return true;
        else return false;
    }
}
bool  operator>=(Point &A){
    return ((*this)>A||(*this)==A);
}
bool  operator<=(Point &A){
    return ((*this)<A||(*this)==A);
}
bool static Compare(Point A, Point B){
    return (A<B);
}
virtual void  Print(){
    cout<<"("<<x<<", "<<y<<")"<<endl;
}

void  CreatePoint(){
    cout<<"Give integral x coordinate: "<<flush;
    cin>>x;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Inappropriate coordinate, try again"<<endl;
        cin>>x;
    }
    cout<<"Give integral y coordinate: "<<flush;
    cin>>y;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Inappropriate coordinate, try again"<<endl;
        cin>>y;
    }
}

};
template <typename T>
class Vector: Point<T>
{
    private:
    T x, y;

    public:
    Vector()
    {
    }
    Vector(T x1, T y1)
    {
        x=x1;
        y=y1;
    }
    ~Vector()
    {
    }

    void Print()
    {
        cout<<"<"<<x<<"; "<<y<<">"<<endl;
    }
};
#endif // POINT_H
