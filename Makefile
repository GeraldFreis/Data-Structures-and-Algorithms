run: tests
	./tests

tests: Makefile main.cpp MapAbsoluteValue.h MapAbsoluteValue.cpp MapGeneric.h MapGeneric.cpp MapSquare.h MapSquare.cpp MapTriple.h MapTriple.cpp
	g++ -std=c++17 MapGeneric.cpp MapTriple.cpp MapAbsoluteValue.cpp MapSquare.cpp main.cpp -o tests