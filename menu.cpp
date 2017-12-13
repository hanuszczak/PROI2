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
            int type = dataType();
            if (type  == 1 ){
                PointSet2<char> Set1;
                Set1.CreateSet();
                cout<<"Created set of points:"<<endl;
                Set1.Print();
            }
            else if (type == 2 ){
                PointSet2<int> Set1;
                Set1.CreateSet();
                cout<<"Created set of points:"<<endl;
                Set1.Print();
            }
            else if (type == 3 ){
                PointSet2<float> Set1;
                Set1.CreateSet();
                cout<<"Created set of points:"<<endl;
                Set1.Print();
            }
            else if (type == 4 ){
                PointSet2<double> Set1;
                Set1.CreateSet();
                cout<<"Created set of points:"<<endl;
                Set1.Print();
            }
        } break;
        case 3: {
            int type = dataType();
            if (type == 1){
                PointSet2<char> Set1;
                Set1.CreateSet();
                Set1.Print();
                Point<char> P;
                P.CreatePoint();
                cout<<"Set before adding new point:"<<endl;
                Set1.Print();
                Set1.AddPoint(P);
                cout<<"Set after adding new point:"<<endl;
                Set1.Print();
            }
            else if (type == 2){
                PointSet2<int> Set1;
                Set1.CreateSet();
                Set1.Print();
                Point<int> P;
                P.CreatePoint();
                cout<<"Set before adding new point:"<<endl;
                Set1.Print();
                Set1.AddPoint(P);
                cout<<"Set after adding new point:"<<endl;
                Set1.Print();
            }
            else if (type == 3){
                PointSet2<float> Set1;
                Set1.CreateSet();
                Set1.Print();
                Point<float> P;
                P.CreatePoint();
                cout<<"Set before adding new point:"<<endl;
                Set1.Print();
                Set1.AddPoint(P);
                cout<<"Set after adding new point:"<<endl;
                Set1.Print();
            }
            else if (type == 4){
                PointSet2<double> Set1;
                Set1.CreateSet();
                Set1.Print();
                Point<double> P;
                P.CreatePoint();
                cout<<"Set before adding new point:"<<endl;
                Set1.Print();
                Set1.AddPoint(P);
                cout<<"Set after adding new point:"<<endl;
                Set1.Print();
            }
        } break;
        case 4: {
            int type = dataType();
            if (type == 1){
                cout<<"Cannot calculate distance for char type"<<endl;
            }
            else if (type == 2){
                PointSet2<int> Set1;
                Set1.CreateSet();
                Set1.Print();
                PointSet2<int> Set2=Set1.Closest();
                cout<<"Function Closest returned points:"<<endl;
                Set2.Print();
            }
            else if (type == 3){
                PointSet2<float> Set1;
                Set1.CreateSet();
                Set1.Print();
                PointSet2<float> Set2=Set1.Closest();
                cout<<"Function Closest returned points:"<<endl;
                Set2.Print();
            }
            else if (type == 4){
                PointSet2<double> Set1;
                Set1.CreateSet();
                Set1.Print();
                PointSet2<double> Set2=Set1.Closest();
                cout<<"Function Closest returned points:"<<endl;
                Set2.Print();
            }
        } break;
        case 5: {
            int type = dataType();
            if (type == 1){
                cout<<"Creating first set of points"<<endl;
                PointSet2<char> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<char> Set2;
                Set2.CreateSet();
                Set2.Print();
                PointSet2<char> Set3=Set1+Set2;
                cout<<"Sum of sets:"<<endl;
                Set3.Print();
            }
            else if (type == 2){
                cout<<"Creating first set of points"<<endl;
                PointSet2<int> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<int> Set2;
                Set2.CreateSet();
                Set2.Print();
                PointSet2<int> Set3=Set1+Set2;
                cout<<"Sum of sets:"<<endl;
                Set3.Print();
            }
            else if (type == 3){
                cout<<"Creating first set of points"<<endl;
                PointSet2<float> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<float> Set2;
                Set2.CreateSet();
                Set2.Print();
                PointSet2<float> Set3=Set1+Set2;
                cout<<"Sum of sets:"<<endl;
                Set3.Print();
            }
            else if (type == 4){
                cout<<"Creating first set of points"<<endl;
                PointSet2<double> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<double> Set2;
                Set2.CreateSet();
                Set2.Print();
                PointSet2<double> Set3=Set1+Set2;
                cout<<"Sum of sets:"<<endl;
                Set3.Print();
            }
        } break;
        case 6: {
            int type = dataType();
            if (type == 1){
                cout<<"Creating first set of points"<<endl;
                PointSet2<char> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<char> Set2;
                Set2.CreateSet();
                Set2.Print();
                Set1+=Set2;
                cout<<"Sum of sets:"<<endl;
                Set1.Print();
            }
            else if (type == 2){
                cout<<"Creating first set of points"<<endl;
                PointSet2<int> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<int> Set2;
                Set2.CreateSet();
                Set2.Print();
                Set1+=Set2;
                cout<<"Sum of sets:"<<endl;
                Set1.Print();
            }
            else if (type == 3){
                cout<<"Creating first set of points"<<endl;
                PointSet2<float> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<float> Set2;
                Set2.CreateSet();
                Set2.Print();
                Set1+=Set2;
                cout<<"Sum of sets:"<<endl;
                Set1.Print();
            }
            else if (type == 4){
                cout<<"Creating first set of points"<<endl;
                PointSet2<double> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<double> Set2;
                Set2.CreateSet();
                Set2.Print();
                Set1+=Set2;
                cout<<"Sum of sets:"<<endl;
                Set1.Print();
            }
        } break;
        case 7: {
            int type = dataType();
            if (type == 1){
                cout<<"Creating first set of points"<<endl;
                PointSet2<char> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<char> Set2;
                Set2.CreateSet();
                Set2.Print();
                PointSet2<char> Set3=Set1*Set2;
                cout<<"Intersection of sets:"<<endl;
                Set3.Print();
            }
            else if (type == 2){
                cout<<"Creating first set of points"<<endl;
                PointSet2<int> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<int> Set2;
                Set2.CreateSet();
                Set2.Print();
                PointSet2<int> Set3=Set1*Set2;
                cout<<"Intersection of sets:"<<endl;
                Set3.Print();
            }
            else if (type == 3){
                cout<<"Creating first set of points"<<endl;
                PointSet2<float> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<float> Set2;
                Set2.CreateSet();
                Set2.Print();
                PointSet2<float> Set3=Set1*Set2;
                cout<<"Intersection of sets:"<<endl;
                Set3.Print();
            }
            else if (type == 4){
                cout<<"Creating first set of points"<<endl;
                PointSet2<double> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<double> Set2;
                Set2.CreateSet();
                Set2.Print();
                PointSet2<double> Set3=Set1*Set2;
                cout<<"Intersection of sets:"<<endl;
                Set3.Print();
            }
        } break;
         case 8: {
             int type = dataType();
             if (type == 1){
                cout<<"Creating first set of points"<<endl;
                PointSet2<char> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<char> Set2;
                Set2.CreateSet();
                Set2.Print();
                Set1*=Set2;
                cout<<"Intersection of sets:"<<endl;
                Set1.Print();
             }
             else if (type == 2){
                cout<<"Creating first set of points"<<endl;
                PointSet2<int> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<int> Set2;
                Set2.CreateSet();
                Set2.Print();
                Set1*=Set2;
                cout<<"Intersection of sets:"<<endl;
                Set1.Print();
             }
             else if (type == 3){
                cout<<"Creating first set of points"<<endl;
                PointSet2<float> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<float> Set2;
                Set2.CreateSet();
                Set2.Print();
                Set1*=Set2;
                cout<<"Intersection of sets:"<<endl;
                Set1.Print();
             }
             else if (type == 4){
                cout<<"Creating first set of points"<<endl;
                PointSet2<double> Set1;
                Set1.CreateSet();
                Set1.Print();
                cout<<"Creating second set of points"<<endl;
                PointSet2<double> Set2;
                Set2.CreateSet();
                Set2.Print();
                Set1*=Set2;
                cout<<"Intersection of sets:"<<endl;
                Set1.Print();
             }
        } break;
         case 0:
            return; break;

    }
    menuTest();
}
template <typename T>
PointSet2<T> CreateSet(){
    unsigned int counter;
    PointSet2<T> Set1;
    cout<<"How many points it will hold?: "<<flush;
    cin>>counter;
    while(cin.fail()||(counter<0)){
        cin.clear();
        cin.ignore();
        cout<<"Choose a integer greater than or equal to 0"<<endl;
        cin>>counter;
    }
    vector<Point<T> > v;
    v.reserve(counter);
    if(counter==0){
        cout<<"Empty set was created"<<endl;
    }
    else {
        for(unsigned int i=0; i<counter; i++){
            Point<T> P;
            P.CreatePoint();
            v.push_back(P);
            Set1.AddPoint(v.at(i));
        }
        cout<<"Created set:"<<endl;
    }
    return Set1;
}
int dataType()
{
    int type = -1;
    cout<<"> Choose data:"<<endl;
    cout<<"> 1)char"<<endl;
    cout<<"> 2)int"<<endl;
    cout<<"> 3)float"<<endl;
    cout<<"> 4)double"<<endl;
    cin>>type;
    while(cin.fail()||(type<1||type>4)){
            cin.clear();
            cin.ignore();
            cout<<"Choose an integer from 1 to 4"<<endl;
            cin>>type;
    }
    return type;
}
