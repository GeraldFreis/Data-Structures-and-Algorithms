run: programout
	./programout

programout: Library.h Library.cpp Document.h Document.cpp Book.h Book.cpp main.cpp
	g++ Library.cpp Document.cpp Book.cpp main.cpp -o programout

