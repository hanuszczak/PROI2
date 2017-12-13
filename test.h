#ifndef TEST_H
#define TEST_H
#define SIGN2 "**************"
#include "Point.h"
#include "PointSet2.h"
#include <iostream>
#include <string>


template <typename T>
bool TestAddPoint(PointSet2<T>& Set1, Point<T>& A)
{
    cout<<"Set before adding new point"<<endl;
    Set1.Print();
    cout<<"Adding point to the set"<<endl;
    Set1.AddPoint(A);
    cout<<"Set after adding new point"<<endl;
    Set1.Print();
    return Set1.Find(A);

}

template <typename T>
bool TestClosest(PointSet2<T>& Set1, PointSet2<T>& Set2)
{
    cout<<"Function Closest returns points:"<<endl;
    Set1.Closest().Print();
    return (Set1.Closest()==Set2);
}
template <typename T>
bool TestSetSum1(PointSet2<T>& Set1, PointSet2<T>& Set2, PointSet2<T>& Set3)
{
    cout<<"First set of points:"<<endl;
    Set1.Print();
    cout<<"Second set of points:"<<endl;
    Set2.Print();
    cout<<"Creating sum of sets with + operator"<<endl;
    PointSet2<T> Set4=Set1+Set2;
    cout<<"Sum of sets:"<<endl;
    Set4.Print();
    return(Set4==Set3);
}
template <typename T>
bool TestSetSum2(PointSet2<T>& Set1, PointSet2<T>& Set2, PointSet2<T>& Set3)
{
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
template <typename T>
bool TestSetIntersection1(PointSet2<T>& Set1, PointSet2<T>& Set2, PointSet2<T>& Set3)
{
    cout<<"First set of points:"<<endl;
    Set1.Print();
    cout<<"Second set of points:"<<endl;
    Set2.Print();
    cout<<"Creating intersection of sets with * operator"<<endl;
    PointSet2<T> Set4=Set1*Set2;
    cout<<"Intersection of sets:"<<endl;
    Set4.Print();
    return(Set4==Set3);
}

template <typename T>
bool TestSetIntersection2(PointSet2<T>& Set1, PointSet2<T>& Set2, PointSet2<T>& Set3)
{
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

bool AutomaticTest()
{
    int counter = 0;
    cout<<SIGN2<<"Testing function Print (type char)"<<SIGN2<<endl;
    cout<<"Creating set of points"<<endl;
    Point<char> A=Point<char>('a', 'g');
    Point<char> B=Point<char>('f','3');
    Point<char> C=Point<char>('N', '%');
    Point<char> D=Point<char>('m', '!');
    PointSet2<char> Set1;
    Set1.AddPoint(A);
    Set1.AddPoint(B);
    Set1.AddPoint(C);
    Set1.AddPoint(D);
    cout<<"Printing created set"<<endl;
    Set1.Print();
    cout<<SIGN2<<"Testing function AddPoint (type char)"<<SIGN2<<endl;
    cout<<"Creating set of points"<<endl;
    Point<char> E=Point<char>('x', 'D');
    PointSet2<char> Set2;
    if(TestAddPoint(Set2, E)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing function Closest (type int)"<<SIGN2<<endl;
    Point<int> A3=Point<int>(-10, 134);
    Point<int> B3=Point<int>(578, 3152);
    Point<int> C3=Point<int>(-557, -892);
    Point<int> D3=Point<int>(-643, -1000);
    PointSet2<int> Set3;
    Set3.AddPoint(A3);
    Set3.AddPoint(B3);
    Set3.AddPoint(C3);
    Set3.AddPoint(D3);
    PointSet2<int> Set4;
    Set4.AddPoint(C3);
    Set4.AddPoint(D3);
    cout<<"Closest points are:"<<endl;
    Set4.Print();
    if(TestClosest(Set3, Set4)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing overloaded + operator (type double)"<<SIGN2<<endl;
    Point<double> A4=Point<double>(-10.89, 1.909e40);
    Point<double> B4=Point<double>(5.78, 6.543e-20);
    Point<double> C4=Point<double>(-557.3354, -892.0989);
    Point<double> D4=Point<double>(-64.3, -10.00);
    Point<double> E4=Point<double>(8.9808e57, -1.32e-9);
    PointSet2<double> Set5;
    Set5.AddPoint(A4);
    Set5.AddPoint(B4);
    Set5.AddPoint(C4);
    Set5.AddPoint(D4);
    PointSet2<double> Set6;
    Set6.AddPoint(B4);
    Set6.AddPoint(C4);
    Set6.AddPoint(E4);
    PointSet2<double> Set7;
    Set7.AddPoint(A4);
    Set7.AddPoint(B4);
    Set7.AddPoint(C4);
    Set7.AddPoint(D4);
    Set7.AddPoint(E4);
    if(TestSetSum1(Set5, Set6, Set7)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing overloaded * operator (type double) "<<SIGN2<<endl;
    PointSet2<double> Set8;
    Set8.AddPoint(B4);
    Set8.AddPoint(C4);
    if(TestSetIntersection1(Set5, Set6, Set8)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing overloaded += operator (type float)"<<SIGN2<<endl;
    Point<float> A5=Point<float>(-10.89, 1.909e40);
    Point<float> B5=Point<float>(5.78, 6.543e-20);
    Point<float> C5=Point<float>(-557.3354, -892.0989);
    Point<float> D5=Point<float>(-64.3, -10.00);
    Point<float> E5=Point<float>(8.9808e57, -1.32e-9);
    PointSet2<float> Set9;
    Set9.AddPoint(A5);
    Set9.AddPoint(B5);
    Set9.AddPoint(C5);
    Set9.AddPoint(D5);
    PointSet2<float> Set10;
    Set10.AddPoint(B5);
    Set10.AddPoint(C5);
    Set10.AddPoint(E5);
    PointSet2<float> Set11;
    Set11.AddPoint(A5);
    Set11.AddPoint(B5);
    Set11.AddPoint(C5);
    Set11.AddPoint(D5);
    Set11.AddPoint(E5);
    if(TestSetSum2(Set9, Set10, Set11)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    cout<<SIGN2<<"Testing overloaded *= operator (float)"<<SIGN2<<endl;
    if(TestSetIntersection2(Set9, Set10, Set10)) cout<<"Test succeeded"<<endl;
    else{
        cout<<"Test failed"<<endl;
        counter++;
    }
    return(!counter);
}
#endif // TEST_H_INCLUDED
