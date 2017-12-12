all: menu.o Point.o PointSet2.o test.o
	g++ menu.o Point.o PointSet2.o test.o -o proi1
menu.o: menu.cpp test.h menu.h Point.h PointSet2.h
	g++ -c menu.cpp
test.o: test.cpp test.h Point.h PointSet2.h
	g++ test.cpp test.h Point.h PointSet2.h -c test.cpp
Point.o: Point.cpp Point.h
	g++ Point.cpp Point.h -c Point.cpp
PointSet2.o: PointSet2.cpp PointSet2.h
	g++ PointSet2.cpp PointSet2.h -c PointSet2.cpp
