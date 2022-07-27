tests: testall 

testall: programout
	./programout

programout: referee.h referee.cpp human.h human.cpp computer.h computer.cpp player.h player.cpp main.cpp
	g++ referee.cpp human.cpp player.cpp computer.cpp main.cpp -o programout