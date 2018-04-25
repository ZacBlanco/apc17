CC = icc

TARGET = transpose
SRC = transpose.c

.PHONY: all
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $@ $(CFLAGS) $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
