#include "Point.h"
#include <iostream>
#include <float.h>

using namespace std;
Point::Point() {
}
Point::Point(int x=0, int y=0) {
    Point::x=x;
    Point::y=y;
    }

Point::Point(const Point &P) {
    Point::x=P.x;
    Point::y=P.y;
}
Point::~Point(){
}
bool Point::operator==(Point &A){
    if(x==A.x && y==A.y)
        return true;
    else
        return false;
}
bool Point::operator<(Point &A){
    if(x<A.x) return true;
    else if (x>A.x) return false;
    else {
        if(y<A.y) return true;
        else return false;
    }
}
bool Point::operator>(Point &A){
    if(x<A.x) return false;
    else if (x>A.x) return true;
    else {
        if(y>A.y) return true;
        else return false;
    }
}
bool Point::operator>=(Point &A){
    return ((*this)>A||(*this)==A);
}
bool Point::operator<=(Point &A){
    return ((*this)<A||(*this)==A);
}
bool Point::Compare(Point A, Point B){
    return (A<B);
}
void Point::PrintPoint(){
    cout<<"("<<x<<", "<<y<<")"<<endl;
}
void Point::CreatePoint(){
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
