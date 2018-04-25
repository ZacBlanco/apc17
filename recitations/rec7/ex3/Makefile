#
# Makefile for the qsort-race example.
#

CC = gcc
CFLAGS = -std=gnu99 -O0 -g -gdwarf-3 -fcilkplus
LDFLAGS = -ldl -lcilkrts

TARGET = qsort-race
SRC = qsort-race.c

.PHONY: all
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $@ $(CFLAGS) $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
