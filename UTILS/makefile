##################################################################
##################### Sub MakeFile for Utils #####################
##################################################################

CPP=g++
CXXFLAGS= -Wall -W
LDFLAGS=

SRC=$(wildcard src/*.C)
OBJ=$(SRC:.C=.o)

all : libutils.so 


libutils.so : $(OBJ)
	$(CPP) -shared -o $@ $^ $(LDFLAGS)

%.o : %.C
	$(CPP) -o $@ -c $^ $(CXXFLAGS)
	
clean :
	rm -f *.o libutils.so
