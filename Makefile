# Compiler name
CXX = g++
# g++ compiler flags
# -g: adds debugging information to the executable file
# -Wall: turns on most, but not  all, compiler warnings
# -std=c++17: uses c++17 standard
# Put all the required flags separated by space
CXXFLAGS = -c -g -Wall -std=c++17

# The build target executable file; .exe is not required
PROGRAM = Golf.out

# List .cpp files separated by space
CPPFILES = Golf.cpp

# Make all rule/default rule that'll be run when we run "make"
# First compile each file to object file
# Then make a single binary/executable program
all:
#   $(g++) $(-c -g -Wall -std=c++17) $(file.cpp)
	$(CXX) $(CXXFLAGS) $(CPPFILES)
#   $(g++) -o $(file.out) *.o
	$(CXX) -o $(PROGRAM) *.o

# Make clean rule
# Delete object and binary files
clean:
	rm -f $(PROGRAM) *.o

# Rule to run the program
run:
	./$(PROGRAM)
# To Make and Run, type: make && make run