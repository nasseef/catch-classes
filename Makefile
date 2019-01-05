# Created by: Nasseef Abukamail
# This Makefile will run tests for the Rectangle class
#
#Variables
CFLAGS = -Wall -std=c++11

#Linking all the files
a.out: rectangle.h rectangle.o Test-rectangle.cc
	g++ $(CFLAGS) Test-rectangle.cc rectangle.o -o a.out

rectangle.o: rectangle.cc rectangle.h
	g++ -c $(CFLAGS) rectangle.cc
