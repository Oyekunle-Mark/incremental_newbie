# *****************************************************
# Parameters to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -std=c++17 -O0 

# ****************************************************
# Entries to bring the executable up to date

main: main.o Account.o Savings_Account.o Account_Utils.o
	$(CXX) $(CXXFLAGS) -o main.o Account.o Savings_Account.o Account_Utils.o

main.o: Savings_Account.h Account_Utils.h

Account_Utils.o: Savings_Account.h

Savings_Account.o: Account.h

Account.o: Account.h
