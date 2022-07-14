INCLUDE = $(INCLUDE_NOPI)
LDFLAGS = $(LDFLAGS_NOPI)

INCLUDE_PI := -I ~/include
LDFLAGS_PI := -L ~/lib -lsense -lm
INCLUDE_NOPI :=
LDFLAGS_NOPI := -lncurses

all: scroll

scroll: input.o main.o display.o
    cc -o $@ $^ $(LDFLAGS)

clean:
    rm -f *.o scroll

run: all
    make
    ./scroll

input.o: input.c scroll.h
    cc -o $@ -c $< $(INCLUDE)
main.o: main.c scroll.h
    cc -o $@ -c $< $(INCLUDE)
display.o: display.c scroll.h
    cc -o $@ -c $< $(INCLUDE)