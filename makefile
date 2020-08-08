CC = gcc
CFLAGS = -Wall
DEPS = tests.h tests.c help.h help.c mathOps.h mathOps.c pro3.c
OBJ = tests.o help.o mathOps.o pro3.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

pro3: $(OBJ)
	gcc $(CFLAGS) $^ -o $@

