.PHONY: all

all: main

main: main.c
	gcc -lncurses -o $@ $<

