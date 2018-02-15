CC = icpc
MPCC = mpicxx
OPENMP = -openmp
CFLAGS = -Wall -O3
LIBS =

all: helloworld


helloworld.o: helloworld.cpp
        $(MPCC) -c $(CFLAGS) helloworld.cpp


helloworld: helloworld.o
        $(MPCC) -o helloworld helloworld.o


clean:
        rm -f *.o $(TARGETS) *.stdout *.txt

