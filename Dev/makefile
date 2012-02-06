CC=g++

all : isingmodel

usage.o : usage.h usage.C

Main.o : usage.h Main.C

isingmodel : Main.o usage.o
	g++ Main.o usage.o -o isingmodel