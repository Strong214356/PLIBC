CC=gcc
LD=gcc
ASM=nasm
CFLAGS=-fPIC -g -ggdb -nostdinc -I./includes
ASMFLAGS=-felf64
LDFLAGS=-shared -nostdlib
LIBS=
CSRC=$(wildcard */*.c)
COBJ=$(CSRC:.c=c.o)
ASMSRC=$(wildcard */*.asm)
ASMOBJ=$(ASMSRC:.asm=asm.o)

all: libs test clean

libs: $(COBJ)
	mkdir -p build
	$(LD) $(LDFLAGS) -o build/libstd.so $(COBJ) $(ASMOBJ) $(LIBS)

%c.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%asm.o: %.asm
	$(ASM) $(ASMFLAGS) -o $@ $<

clean:
	rm -rf $(COBJ) $(ASMOBJ)

test:
	mkdir -p build/test
	gcc -c test/protec/main.c -o build/test/main.o  -I./includes -g -ggdb
	gcc -o build/test/main build/test/*.o -Lbuild -lstd
	rm -rf build/test/*.o
