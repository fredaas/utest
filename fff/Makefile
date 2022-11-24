CFLAGS=-std=c99 -Wall -O2 -I./

SRC=main.c lib.c otherlib.c
OBJ=$(patsubst %.c,%.o,$(SRC))

TEST_SRC=test.c lib.c
TEST_OBJ=$(patsubst %.c,%.o,$(TEST_SRC))

all : clean main

main : $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

test : $(TEST_OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean :
	rm -f main test *.o
