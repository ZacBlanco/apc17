CC = icc

TARGET = qsort-race
SRC = qsort-race.c

.PHONY: all
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $@ $(CFLAGS) $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
