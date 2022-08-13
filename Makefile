COMPILER = gcc
INCLUDES = ./includes/*.hpp
SOURCES = *.cpp ./src/*.cpp
FLAGS = -Wall -ggdb3 -o
LIBS = -lstdc++ -lsfml-graphics -lsfml-window -lsfml-system
OUTPUT = a.out

all:
	$(COMPILER) $(SOURCES) $(LIBS) $(FLAGS) $(OUTPUT)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./$(OUTPUT)

clean:
	rm -rf *.o
	rm -rf a.out
