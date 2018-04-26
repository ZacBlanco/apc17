CC= icpc

#results dumped by cilkview objects
VIEWS = main

all: main

main : main.c poly.c poly.h temp_space.h
	$(CC) $(CFLAGS) $(INCLUDES) $@.c $(LDFLAGS) -o $@

OUTPUTS = $(VIEWS:%=%.csv) $(VIEWS:%=%.plt) $(ALLTARGETS:%=%.cv.out) cilkview.out

clean :
	rm -f main *~

