CXX = g++

out/greet: src/main.cpp src/greet.cpp
	@mkdir -p out
	$(CXX) -o $@ $^
