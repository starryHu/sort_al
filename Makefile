.PHONY : all clean

all: sort

INC := ./inc
SRC := odinary_sort.c \
	merge_sort.c \
	quick_sort.c \
	main.c

CFLAGS := -Wall
CPPFLAGS := -I${INC}

sort:${SRC}
	gcc ${CFLAGS} ${CPPFLAGS} $^ -o $@

clean:
	-@rm -rf sort
