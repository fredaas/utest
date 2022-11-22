CFLAGS=-std=c99 -Wall -O2 -I./
SRC=main.c mylib.c mocks.c
OBJ=$(patsubst %.c,%.o,$(SRC))
TEST_SRC=test.c mylib.c
TEST_OBJ=$(patsubst %.c,%.o,$(TEST_SRC))

all : clean release

release : $(OBJ)
	gcc -o release $^ $(CFLAGS)

test : $(TEST_OBJ)
	gcc -o test $^ $(CFLAGS)

objects : $(TEST_OBJETS) $(OBJ)
	gcc -c -o $@ $^ $(CFLAGS)

clean :
	rm -f main *.o
