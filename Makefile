# Created by: Nasseef Abukamail
# This Makefile will run tests for the Rectangle class
# The tests will run automatically on Travis-CI. 
# This is to test continuous integration (CI).
#
#Variables
CFLAGS = -Wall -std=c++11

# Linking all the files and run the tests. Use your own header and 
# object files.

run_tests: rectangle.h rectangle.o Test-cases.cc
	g++ $(CFLAGS) Test-cases.cc rectangle.o -o run_tests && ./run_tests

rectangle.o: rectangle.cc rectangle.h
	g++ -c $(CFLAGS) rectangle.cc

clean:
	rm -rf *.o run_tests