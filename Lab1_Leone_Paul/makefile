
# Program Name: makefile
# Author: Paul Leone
# Date: 4/6/2019
# Description: This is the makefile for the lab 1 assignment


lab1: main.o ReadMatrix.o determinant.o
	g++ main.o ReadMatrix.o determinant.o -o lab1

main.o: main.cpp
	g++ -c main.cpp

ReadMatrix.o: ReadMatrix.cpp ReadMatrix.hpp
	g++ -c ReadMatrix.cpp

determinant.o: determinant.cpp determinant.hpp
	g++ -c determinant.cpp

clean:
	rm *.o output
