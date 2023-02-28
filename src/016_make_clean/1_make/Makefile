# A simple Makefile that includes a clean rule
# Use .PHONY to ensure that make clean runs

add.o: add.cpp
	g++ -c $^

print_add.o: print_add.cpp
	g++ -c $^

print_add: print_add.o add.o
	g++ $^ -o $@

.PHONY: clean
clean:
	rm print_add *.o
