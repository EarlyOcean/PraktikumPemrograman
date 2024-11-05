CXX = g++
CXXFLAGS = -Wall -g

TARGET = Problem
TEST_TARGET = Test

SRCS = Problem1.cpp
TEST_SRC = Test1.cpp

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

$(TEST_TARGET): $(TEST_SRC)
	$(CXX) $(CXXFLAGS) -o $(TEST_TARGET) $(TEST_SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
	rm -f $(TEST_TARGET)

test: $(TEST_TARGET)
	./$(TEST_TARGET)