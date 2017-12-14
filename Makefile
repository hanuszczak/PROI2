all: menu.o 
	g++ menu.o -o proi2
menu.o: menu.cpp test.h menu.h Point.h PointSet2.h
	g++ -c menu.cpp

