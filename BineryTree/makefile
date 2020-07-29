CC = g++
OBJS = main.o bineryTree.o
EXEFILE = exeBinery.out

all : $(OBJS)
	$(CC) -o $(EXEFILE) $(OBJS)

mainPreprocessing: main.cpp bineryTree.hpp bineryTree.cpp
	$(CC) -E main.cpp -o pre_processing.txt

bineryTreeCompile: main.cpp bineryTree.hpp bineryTree.cpp
	$(CC) -c main.cpp

mainAssembler: main.cpp bineryTree.hpp bineryTree.cpp
	$(CC) -S main.cpp

clean:
	rm -f core $(EXEFILE) $(OBJS)