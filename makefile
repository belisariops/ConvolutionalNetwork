all:
	g++ -std=c++11 tests/myTest.cpp Matrix.cpp RandomGenerator.cpp -o test

clean:
	rm test