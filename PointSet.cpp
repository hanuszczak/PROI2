#include "PointSet.h"
#include "Point.h"
#include <iostream>
#include <vector>

using namespace std;


void PointSet::AddPoint(Point p){
    Members->push_back(p);
}

void PointSet::PrintSet(){
    for(int i=0; i<Members->size(); i++){
        Members->at(i).PrintPoint();
    }
}
