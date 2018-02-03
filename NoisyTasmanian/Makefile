CC = g++
COMPILE_OPTIONS = -fopenmp
OPTC = -O3 -ffast-math -mtune=native $(COMPILE_OPTIONS)
OPTL = $(OPTC)

HEADERS = IndexSet.hpp RulePieceWiseLocal.hpp NoiseGrid.hpp

OBJFILES = main.o IndexSet.o RulePieceWiseLocal.o NoiseGrid.o

all: gennoise

gennoise: $(OBJFILES) $(HEADERS)
	$(CC) $(OPTL) $(OBJFILES) -o gennoise
	
%.o: %.cpp $(HEADERS)
	$(CC) $(OPTC) -c $< -o $@
	
clean:
	rm -fr *.o
	rm -fr gennoise
