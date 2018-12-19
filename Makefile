#Variables
CFLAGS = -Wall -std=c++11

#Linking all the files
rectangle-main: rectangle-main.o rectangle.o
	g++ $(CFLAGS) rectangle.o rectangle-main.o -o rectangle-main

rectangle.o: rectangle.cc rectangle.h
	g++ -c $(CFLAGS) rectangle.cc

rectangle-main.o: rectangle-main.cc rectangle.h
	g++ -c $(CFLAGS) rectangle-main.cc

clean:
	rm -f *.o 
