CXX = clang++
CXXFLAGS = -Wall -Wextra -std=c++17

SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=)

all: $(OBJECTS)

$(OBJECTS): %: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

.PHONY: all clean
