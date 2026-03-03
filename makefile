CXX = g++
CXXFLAGS = -Wall -std=c++17 -O2

TARGET = game_of_life

SRCS = main.cpp grid/grid.cpp cell/cell.cpp simulator/simulator.cpp render/render.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)