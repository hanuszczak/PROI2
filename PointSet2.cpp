#include "PointSet2.h"
#include <iostream>
#include <math.h>
#include <float.h>
#include <algorithm>


using namespace std;

PointSet2::PointSet2() {
    //ctor
}
PointSet2::PointSet2(const PointSet2& Set1){
    PointSet2::Members=Set1.Members;
};
PointSet2::~PointSet2() {
    //dtor
}
void PointSet2::Print() {
    cout<<SIGN<<endl;
    if (Members.size()==0)
        cout<<"Set is empty"<<endl;
    else {
        for (unsigned int i=0; i<Members.size(); i++)
            Members.at(i).PrintPoint();
    }
    cout<<SIGN<<endl;
}
void PointSet2::AddPoint(Point &p) {
    bool found=false;
    for(unsigned int i=0; i<Members.size();i++){
        if((Members.at(i))==p) found=true;
    }
    if(!found) Members.push_back(p);
    sort(Members.begin(), Members.end(),Point::Compare);
}
PointSet2 PointSet2::operator+(PointSet2 &A) {
    PointSet2 B;
    B.Members = Members;
    B += A;
    return B;
}
void PointSet2::operator+=(PointSet2 &A){
    for (unsigned int i=0; i<A.Members.size(); i++){
        bool found = false;
        for (unsigned int j=0; j<Members.size(); j++){
            if (Members.at(j)== A.Members.at(i)) {
                found = true;
            }
        }
        if (!found) {
            AddPoint((A.Members.at(i)));
        }
    }
}
PointSet2 PointSet2::operator*(PointSet2 &A){
    PointSet2 B;
    for (unsigned int i=0; i<Members.size(); i++){
        bool found = false;
        for (unsigned int j=0; j<A.Members.size(); j++){
            if (Members.at(i)== A.Members.at(j)) {
                found = true;
            }
        }
        if (found) {
           B.AddPoint((Members.at(i)));
        }
    }
    return B;
}
void PointSet2::operator*=(PointSet2 &A){
    PointSet2 B;
    B = (*this)*A;
    (*this) = B;
}
PointSet2 PointSet2::Closest(){
    PointSet2 A;
    if (Members.empty()){
        cout<<"Set of points is empty"<<endl;
    }
    else if (Members.size()<2){
        cout<<"Set of points has only one point"<<endl;
    }
    else {
        float Dist = FLT_MAX;
        float tmp, x1, x2, y1, y2;
        int i1, j1;
        for (unsigned int i=0; i<Members.size()-1; i++){
            x1=Members.at(i).x;
            y1=Members.at(i).y;
            for (unsigned int j=i+1; j<Members.size(); j++){
                x2=Members.at(j).x;
                y2=Members.at(j).y;
                tmp = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
                if (tmp<Dist){
                    Dist=tmp;
                    i1=i;
                    j1=j;
                }
            }
        }
        A.AddPoint((Members.at(i1)));
        A.AddPoint((Members.at(j1)));
    }
    return A;
}

bool PointSet2::operator==(PointSet2 &A){
    if (Members.size()!=A.Members.size()) return false;
    else {
        for(unsigned int i=0; i<Members.size();i++){
            if(!(Members.at(i)==A.Members.at(i))) return false;
        }
    return true;
    }
};
bool PointSet2::Find(Point &A){
    bool found=false;
    for(unsigned int i=0;i<Members.size();i++){
        if ((Members.at(i))==A) found=true;
    }
    return found;
}
void PointSet2::CreateSet(){
    unsigned int counter;
    cout<<"How many points it will hold?: "<<flush;
    cin>>counter;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Choose a integer greater than or equal to 0"<<endl;
        cin>>counter;
    }
    vector<Point> v;
    if(counter==0){
        cout<<"Empty set was created"<<endl;
    }
    else {
        for(unsigned int i=0; i<counter; i++){
            cout<<"Creating "<<i+1<<" point"<<endl;
            Point P;
            P.CreatePoint();
            v.push_back(P);
            AddPoint(P);
            Print();
        }
    }
}
