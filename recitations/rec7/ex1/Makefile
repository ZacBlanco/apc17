CC := gcc
CFLAGS := -O3 -g -gdwarf-3 -fcilkplus
LDFLAGS := -lcilkrts -ldl

TARGET := fib
SRC := fib.c

.PHONY: all
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $@ $(CFLAGS) $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
