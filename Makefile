CFLAGS = -Wall -Wextra -g -I$(SRCDIR)

SRCDIR = src
TESTDIR = test

SOURCES = $(wildcard $(SRCDIR)/*.c) $(wildcard $(TESTDIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = test_mem

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE)

$(wildcard *.o): $(wildcard *.c)
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
