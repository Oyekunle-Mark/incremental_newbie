# Makefile for Separate Compilation Example

# *****************************************************
# Parameters to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -std=c++17 -O0 

# ****************************************************
# Entries to bring the executable up to date

main: main.o Movie.o Movies.o
	$(CXX) $(CXXFLAGS) -o main main.o Movie.o Movies.o

main.o: Movies.h

Movies.o: Movies.h

Movie.o: Movie.h
