# A simple Makefile to build a shared library

libintmath.so: add.o multiply.o
	g++ -shared $^ -o $@

add.o: add.cpp
	g++ -c -fpic $^

multiply.o: multiply.cpp
	g++ -c -fpic $^

.PHONY: clean
clean: 
	rm -rf libintmath.so *.o
