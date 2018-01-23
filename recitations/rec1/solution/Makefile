CC=gcc
# Part 5
#CFLAGS=-Wall
# Part 7
CFLAGS= -Wall -g -O0
# Part 8
#CFLAGS -Wall -O3 -DNDEBUG -pg
# Part 9
#CFLAGS=-Wall -O3 -DNDEBUG -pg -fprofile-arcs -ftest-coverage
# Part 5
LDFLAGS=-lrt
# Part 8
LDFLAGS=-lrt -pg
# Part 9
#LDFLAGS=-Wall -lrt -pg -fprofile-arcs -ftest-coverage

ifeq ($(DEBUG),1)
	CFLAGS=-Wall -O3 -DNDEBUG -pg -ftest-coverage
	LDFLAGS=-Wall -lrt -pg -ftest-coverage
else ifeq ($(PROFILE),1)
	CFLAGS=-Wall -O3 -DNDEBUG -pg -fprofile-arcs
	LDFLAGS=-Wall -lrt -pg -fprofile-arcs
endif


all: rollingsum

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

ktiming.o: ktiming.c
	$(CC) $(CFLAGS) -c ktiming.c

sum.o: sum.c
	$(CC) $(CFLAGS) -c sum.c

rollingsum: main.o ktiming.o sum.o
	$(CC) -o rollingsum main.o ktiming.o sum.o $(LDFLAGS)
	if [ $(PROFILE) -eq 1 ]; then \
		./rollingsum > /dev/null; \
		mv gmon.out gmon.sum; \
		./rollingsum > /dev/null; \
		gprof -s ./rollingsum gmon.out gmon.sum; \
		gprof ./rollingsum gmon.sum > gprof-profile; \
	fi

clean:
	rm -f rollingsum *.o *.gc*
