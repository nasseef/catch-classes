# Created by: Nasseef Abukamail
# This Makefile will run tests for the Rectangle class
# The tests will run automatically on Travis-CI.
# This is to test continuous integration (CI).
#
#Variables
CC = g++
CFLAGS = -Wall -std=c++11

# Linking all the files and run the tests. Use your own header and
# object files.

a.out: rectangle.o rectangle.h rectangle_main.o
	$(CC) $(CFLAGS) _TEST/rectangle.o _TEST/rectangle_main.o -o a.out

rectangle.o: rectangle.cc rectangle.h
	$(CC) -c $(CFLAGS) rectangle.cc -o _TEST/rectangle.o

rectangle_main.o: rectangle_main.cc rectangle.h
	$(CC) -c $(CFLAGS) rectangle_main.cc -o _TEST/rectangle_main.o

######################################### R U N   T E S T s ##################################################
run_tests: rectangle.h rectangle.o
	$(CC) $(CFLAGS) _TEST/TEST_cases.cc _TEST/rectangle.o -o _TEST/run_tests && ./_TEST/run_tests -s
##############################################################################################################

clean:
	rm -rf _TEST/*.o _TEST/run_tests a.out