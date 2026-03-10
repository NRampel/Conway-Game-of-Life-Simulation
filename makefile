CXX = g++
CXXFLAGS = -Wall -std=c++17 -O2

SRCS = $(wildcard *.cpp) $(wildcard */*.cpp)

OBJS = $(SRCS:.cpp=.o)


TARGET = game_of_life

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /f *.o $(TARGET)