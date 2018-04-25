CC = gcc
CFLAGS = -O3 -g -Werror -gdwarf-3 -std=gnu99 -fcilkplus
LDFLAGS = -ldl -lcilkrts

TARGET = transpose
SRC = transpose.c

.PHONY: all
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $@ $(CFLAGS) $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
