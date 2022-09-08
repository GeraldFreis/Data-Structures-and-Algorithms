run: output
	./output

output: Individual.h Individual.cpp Mutator.h Mutator.cpp BitFlip.h BitFlip.cpp BitFlipProb.h BitFlipProb.cpp Rearrange.h Rearrange.cpp main.cpp
	g++ -std=c++11 Individual.cpp Mutator.cpp BitFlip.cpp BitFlipProb.cpp Rearrange.cpp main.cpp -o output