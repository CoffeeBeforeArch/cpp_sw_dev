# A simple Makefile to build a shared library

libfloatmath.so: add.o multiply.o
	g++ -shared $^ -o $@

add.o: add.cpp
	g++ -c -fpic $^

multiply.o: multiply.cpp
	g++ -c -fpic $^

.PHONY: clean
clean: 
	rm -rf libfloatmath.so *.o
