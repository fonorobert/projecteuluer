srcfiles = $(notdir $(wildcard src/*.c))
outputs = $(basename $(srcfiles))
builddir = build
CC = gcc

all: $(outputs)

$(outputs): %: src/%.c
	$(CC) -o $(builddir)/$@ $<
