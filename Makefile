CXX = g++
CXXFLAGS = -Wall

all: calculator

calculator: main.o mathfuncs.o randfuncs.o
	$(CXX) $(CXXFLAGS) -o calculator main.o mathfuncs.o randfuncs.o

main.o: main.cpp mathfuncs.h randfuncs.h
	$(CXX) $(CXXFLAGS) -c main.cpp

mathfuncs.o: mathfuncs.cpp mathfuncs.h
	$(CXX) $(CXXFLAGS) -c mathfuncs.cpp

randfuncs.o: randfuncs.cpp randfuncs.h
	$(CXX) $(CXXFLAGS) -c randfuncs.cpp

clean:
	rm -f *.o calculator
