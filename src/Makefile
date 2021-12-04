#######################################################################################################
##    -o  specifies the output executable filename.
##    -Wall: prints "all" Warning messages.
##    -g  generates additional symbolic debuggging information for use with gdb debugger.
##    -c  Compile into object file "Hello.o".
##    -v  verpose mode
##    -D  You can use the -Dname option to define a macro, or -Dname=value to define a macro with a value. 
##        The value should be enclosed in double quotes if it contains spaces.
##    -I. is included so that gcc will look in the current directory (.) for the include file
######################################################################################################
#  object file (*.o)
#  executable  (*)
#  shared library (*.so)

IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR=../lib

LIBS=-lm

_DEPS=hellomake.h helloextra.h
DEPS=$(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ=hellomake.o hellofunc.o
OBJ=$(patsubst %, $(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	# this is for compiling
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	# this is linking
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)


preprocess:
	# include header, expand macro
	# cpp main.cpp > main.ii
	g++ -E main.cpp > main.ii 
compile:
	# that output is a file with .o extension
	g++ -c -Wall -g main.cpp
assemble:
	# generate object files
	as main.s -o main.o
link:
	# this a linker that puts every thing togother into a single executable machine code
	# ld main.o -o app
	g++ main.o -o app


Cfrom_ii:
	# Compiles the preprocessed files and generates assembly code (.s)
	g++ -S main.ii

.PHONY: clean
clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
