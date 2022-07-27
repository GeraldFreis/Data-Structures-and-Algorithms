tests: testall 

testall: programout
	./programout

programout: referee.h referee.cpp human.h human.cpp computer.h computer.cpp player.h player.cpp main.cpp game_manager.h game_manager.cpp
	g++ referee.cpp human.cpp player.cpp computer.cpp game_manager.cpp main.cpp -o programout