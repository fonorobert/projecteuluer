builddir = build
srcdir = src
CC = gcc

srcfiles = $(notdir $(wildcard $(srcdir)/*.c))
outputs = $(basename $(srcfiles))

all: $(outputs)

$(outputs): %: $(srcdir)/%.c
	$(CC) -o $(builddir)/$@ $<
