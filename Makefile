CXX_FLAGS = -std=c++11
BIN = ./bin

all: test
.PHONY: all

test: $(BIN)/test
	$(BIN)/test
.PHONY: test

$(BIN)/test: $(BIN) test.cpp natural_order_comparator.hpp
	$(CXX) $(CXX_FLAGS) test.cpp -o $@

$(BIN):
	mkdir $(BIN)

clean:
	$(RM) -rf $(BIN)
.PHONY: clean
