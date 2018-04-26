CC = icpc
MPCC = mpicxx
OPENMP = -openmp
CFLAGS = -Wall -O3
LIBS =

# If you want to use gcc/g++ to compile the cpp files, you can also use
# the -fopenmp parameter to compile with OpenMP support.
# i.e. g++ -fopenmp helloworld.cpp -o helloworld 

all: helloworld


helloworld.o: helloworld.cpp
	$(CC) -c $(OPENMP) $(CFLAGS) helloworld.cpp

helloworld: helloworld.o
	$(CC) -o helloworld $(OPENMP) helloworld.o

clean:
	rm -f *.o $(TARGETS) *.stdout *.txt
