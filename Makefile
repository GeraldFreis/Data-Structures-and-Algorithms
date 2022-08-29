run: tests
	./tests

tests: Makefile main.cpp MapAbsoluteValue.h MapAbsoluteValue.cpp MapGeneric.h MapGeneric.cpp MapSquare.h MapSquare.cpp MapTriple.h MapTriple.cpp FilterGeneric.h FilterGeneric.cpp FilterNonPositive.h FilterNonPositive.cpp FilterOdd.h FilterOdd.cpp FilterForTwoDigitPositive.h FilterForTwoDigitPositive.cpp
	g++ -std=c++17 MapGeneric.cpp MapTriple.cpp MapAbsoluteValue.cpp MapSquare.cpp FilterGeneric.cpp FilterOdd.cpp FilterNonPositive.cpp FilterForTwoDigitPositive.cpp main.cpp -o tests