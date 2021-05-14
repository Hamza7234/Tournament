# Compiler settings
CC=g++
# Compiler flags
CFLAGS= -std=c++17 -Wall -Werror

INCLUDE:= -Iinclude/
SOURCE:= $(wildcard source/*.cpp) main.cpp

EXE=output

all: $(EXE)

$(EXE): 
	$(CC) $(CFLAGS) $(INCLUDE) $(SOURCE) -o $(EXE)

clean:
	del *.o $(EXE)

# target: dependencies
# 		commands(s)
#