run: tests
	./tests

tests: main.cpp MapAbsoluteValue.h MapAbsoluteValue.cpp MapGeneric.h MapGeneric.cpp MapSquare.h MapSquare.cpp MapTriple.h MapTriple.cpp
	g++ MapGeneric.cpp MapTriple.cpp MapAbsoluteValue.cpp MapSquare.cpp main.cpp -o tests