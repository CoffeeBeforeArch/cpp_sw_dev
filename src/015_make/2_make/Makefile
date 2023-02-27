# A simple Makefile with dependencies

add.o: add.cpp
	g++ -c $^

print_add.o: print_add.cpp
	g++ -c $^

print_add: print_add.o add.o
	g++ $^ -o $@
