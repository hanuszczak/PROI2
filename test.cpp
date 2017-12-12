#include "Point.h"
#include "PointSet2.h"
#include <iostream>
#include "test.h"
#include <float.h>

bool TestAddPoint(PointSet2 &Set1, Point &A){
    cout<<"Set before adding new point"<<endl;
    Set1.Print();
    cout<<"Adding point to the set"<<endl;
    Set1.AddPoint(A);
    cout<<"Set after adding new point"<<endl;
    Set1.Print();
    return Set1.Find(A);
}
bool TestClosest(PointSet2& Set1, PointSet2& Set2){
    cout<<"Function Closest returns points:"<<endl;
    Set1.Closest().Print();
    return (Set1.Closest()==Set2);
}
bool TestSetSum1(PointSet2 &Set1, PointSet2 &Set2, PointSet2 &Set3){
    cout<<"First set of points:"<<endl;
    Set1.Print();
    cout<<"Second set of points:"<<endl;
    Set2.Print();
    cout<<"Creating sum of sets with + operator"<<endl;
    PointSet2 Set4=Set1+Set2;
    cout<<"Sum of sets:"<<endl;
    Set4.Print();
    return(Set4==Set3);
}
bool TestSetSum2(PointSet2 &Set1, PointSet2 &Set2, PointSet2 &Set3){
    cout<<"First set of points:"<<endl;
    Set1.Print();
    cout<<"Second set of points:"<<endl;
    Set2.Print();
    cout<<"Creating sum of sets with += operator"<<endl;
    Set1 += Set2;
    cout<<"Sum of sets:"<<endl;
    Set1.Print();
    return(Set1==Set3);
}
bool TestSetIntersection1(PointSet2 &Set1, PointSet2 &Set2, PointSet2 &Set3){
    cout<<"First set of points:"<<endl;
    Set1.Print();
    cout<<"Second set of points:"<<endl;
    Set2.Print();
    cout<<"Creating intersection of sets with * operator"<<endl;
    PointSet2 Set4=Set1*Set2;
    cout<<"Intersection of sets:"<<endl;
    Set4.Print();
    return(Set4==Set3);
}
bool TestSetIntersection2(PointSet2 &Set1, PointSet2 &Set2, PointSet2 &Set3){
    cout<<"First set of points:"<<endl;
    Set1.Print();
    cout<<"Second set of points:"<<endl;
    Set2.Print();
    cout<<"Creating intersection of sets with *= operator"<<endl;
    Set1 *= Set2;
    cout<<"Intersection of sets:"<<endl;
    Set1.Print();
    return(Set1==Set3);
}
bool AutomaticTest(){
    int counter = 0;
    cout<<"Creating set of points"<<endl;
    Point A=Point(20,4);
    Point B=Point(1,3);
    Point C=Point(-10,4);
    Point D=Point(-9,5);
    cout<<SIGN2<<"Testing function Print"<<SIGN2<<endl;
    PointSet2 Set1;
    Set1.AddPoint(A);
    Set1.AddPoint(B);
    Set1.AddPoint(C);
    Set1.AddPoint(D);
    Set1.Print();
    cout<<SIGN2<<"Testing function AddPoint"<<SIGN2<<endl;
    Point E=Point(5,15);
    if(TestAddPoint(Set1, E)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing function Closest"<<SIGN2<<endl;
    PointSet2 Set2;
    Set2.AddPoint(C);
    Set2.AddPoint(D);
    cout<<"Closest points are:"<<endl;
    Set2.Print();
    if(TestClosest(Set1, Set2)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing overloaded + operator"<<SIGN2<<endl;
    PointSet2 Set3;
    Set3.AddPoint(A);
    Set3.AddPoint(B);
    Set3.AddPoint(C);
    Set3.AddPoint(D);
    PointSet2 Set4;
    Set4.AddPoint(C);
    Set4.AddPoint(D);
    Set4.AddPoint(E);
    if(TestSetSum1(Set3, Set4, Set1)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing overloaded * operator"<<SIGN2<<endl;
    if(TestSetIntersection1(Set3, Set4, Set2)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing overloaded += operator"<<SIGN2<<endl;
    if(TestSetSum2(Set3, Set4, Set1)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing overloaded *= operator"<<SIGN2<<endl;
    PointSet2 Set5;
    Set5.AddPoint(A);
    Set5.AddPoint(B);
    Set5.AddPoint(C);
    Set5.AddPoint(D);
    if(TestSetSum2(Set5, Set4, Set1)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    return(!counter);
}
