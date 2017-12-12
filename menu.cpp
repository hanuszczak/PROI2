#include "test.h"
#include "menu.h"
#include "Point.h"
#include "PointSet2.h"
#include <iostream>
#include <string>

int main(){

    menuTest();
    return 0;
}
void menuTest() {
    int code=-1;
    cout<<GRAPHIC<<endl;
    cout<<"|Choose a menu:"<<endl;
    cout<<"| 1)Run automatic tests"<<endl;
    cout<<"| 2)Test function Print"<<endl;
    cout<<"| 3)Test function AddPoint"<<endl;
    cout<<"| 4)Test function Closest"<<endl;
    cout<<"| 5)Test operator +"<<endl;
    cout<<"| 6)Test operator +="<<endl;
    cout<<"| 7)Test operator *"<<endl;
    cout<<"| 8)Test operator *="<<endl;
    cout<<"| 0)Exit"<<endl;
    cout<<GRAPHIC<<endl;
    cin>>code;
    while(cin.fail()||(code<0||code>8)){
            cin.clear();
            cin.ignore();
            cout<<"Choose an integer from 0 to 8"<<endl;
            cin>>code;
    }
    switch(code){
        case 1: {
            if(AutomaticTest())
                cout<<SIGN2<<"All tests succeeded"<<SIGN2<<endl;
            else cout<<SIGN2<<"Tests failed"<<SIGN2<<endl;
        } break;
        case 2: {
            PointSet2 Set1;
            Set1.CreateSet();
            cout<<"Created set of points:"<<endl;
            Set1.Print();
        } break;
        case 3: {
            PointSet2 Set1;
            Set1.CreateSet();
            Set1.Print();
            Point P;
            P.CreatePoint();
            cout<<"Set before adding new point:"<<endl;
            Set1.Print();
            Set1.AddPoint(P);
            cout<<"Set after adding new point:"<<endl;
            Set1.Print();
        } break;
        case 4: {
            PointSet2 Set1;
            Set1.CreateSet();
            Set1.Print();
            PointSet2 Set2=Set1.Closest();
            cout<<"Function Closest returned points:"<<endl;
            Set2.Print();
        } break;
        case 5: {
            cout<<"Creating first set of points"<<endl;
            PointSet2 Set1;
            Set1.CreateSet();
            Set1.Print();
            cout<<"Creating second set of points"<<endl;
            PointSet2 Set2;
            Set2.CreateSet();
            Set2.Print();
            PointSet2 Set3=Set1+Set2;
            cout<<"Sum of sets:"<<endl;
            Set3.Print();
        } break;
        case 6: {
            cout<<"Creating first set of points"<<endl;
            PointSet2 Set1;
            Set1.CreateSet();
            Set1.Print();
            cout<<"Creating second set of points"<<endl;
            PointSet2 Set2;
            Set2.CreateSet();
            Set2.Print();
            Set1+=Set2;
            cout<<"Sum of sets:"<<endl;
            Set1.Print();
        } break;
        case 7: {
            cout<<"Creating first set of points"<<endl;
            PointSet2 Set1;
            Set1.CreateSet();
            Set1.Print();
            cout<<"Creating second set of points"<<endl;
            PointSet2 Set2;
            Set2.CreateSet();
            Set2.Print();
            PointSet2 Set3=Set1*Set2;
            cout<<"Intersection of sets:"<<endl;
            Set3.Print();
        } break;
         case 8: {
            cout<<"Creating first set of points"<<endl;
            PointSet2 Set1;
            Set1.CreateSet();
            Set1.Print();
            cout<<"Creating second set of points"<<endl;
            PointSet2 Set2;
            Set2.CreateSet();
            Set2.Print();
            Set1*=Set2;
            cout<<"Intersection of sets:"<<endl;
            Set1.Print();
        } break;
         case 0:
            return; break;

    }
    menuTest();
}
PointSet2 CreateSet(){
    unsigned int counter;
    PointSet2 Set1;
    cout<<"How many points it will hold?: "<<flush;
    cin>>counter;
    while(cin.fail()||(counter<0)){
        cin.clear();
        cin.ignore();
        cout<<"Choose a integer greater than or equal to 0"<<endl;
        cin>>counter;
    }
    vector<Point> v;
    v.reserve(counter);
    if(counter==0){
        cout<<"Empty set was created"<<endl;
    }
    else {
        vector<Point*> tmp;
        for(unsigned int i=0; i<counter; i++){
            Point P;
            P.CreatePoint();
            v.push_back(P);
            Set1.AddPoint(v.at(i));
        }
        cout<<"Created set:"<<endl;
    }
}

