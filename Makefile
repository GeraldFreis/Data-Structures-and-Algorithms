run: testall
	./testall

testall: Avalanche.h Avalanche.cpp Bureaucrat.h Bureaucrat.cpp Computer.h Computer.cpp Crescendo.h Crescendo.cpp FistfullODollars.h FistfullODollars.cpp Human.h Human.cpp PaperDoll.h PaperDoll.cpp Player.h Player.cpp RandomComputer.h RandomComputer.cpp Referee.h Referee.cpp Toolbox.h Toolbox.cpp Tournament.h Tournament.cpp main.cpp
	g++ Avalanche.cpp Bureaucrat.cpp Computer.cpp Crescendo.cpp FistfullODollars.cpp Human.cpp PaperDoll.cpp Player.cpp RandomComputer.cpp Referee.cpp Toolbox.cpp Tournament.cpp main.cpp -o testall