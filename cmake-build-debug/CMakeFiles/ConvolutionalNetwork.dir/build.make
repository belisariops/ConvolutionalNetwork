# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/belisariops/WorkSpace/C++/ConvolutionalNetwork

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ConvolutionalNetwork.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ConvolutionalNetwork.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ConvolutionalNetwork.dir/flags.make

CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/main.cpp

CMakeFiles/ConvolutionalNetwork.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/main.cpp > CMakeFiles/ConvolutionalNetwork.dir/main.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/main.cpp -o CMakeFiles/ConvolutionalNetwork.dir/main.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o: ../Neuron.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/Neuron.cpp

CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/Neuron.cpp > CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/Neuron.cpp -o CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o: ../NeuralLayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/NeuralLayer.cpp

CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/NeuralLayer.cpp > CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/NeuralLayer.cpp -o CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o: ../Filter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/Filter.cpp

CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/Filter.cpp > CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/Filter.cpp -o CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o: ../ConvolutionalLayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ConvolutionalLayer.cpp

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ConvolutionalLayer.cpp > CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ConvolutionalLayer.cpp -o CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o: ../ConvolutionalNeuron.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ConvolutionalNeuron.cpp

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ConvolutionalNeuron.cpp > CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ConvolutionalNeuron.cpp -o CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o: ../RandomGenerator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/RandomGenerator.cpp

CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/RandomGenerator.cpp > CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/RandomGenerator.cpp -o CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o: ../ConvolutionalNeuralNetwork.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ConvolutionalNeuralNetwork.cpp

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ConvolutionalNeuralNetwork.cpp > CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ConvolutionalNeuralNetwork.cpp -o CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o: ../PoolingLayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/PoolingLayer.cpp

CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/PoolingLayer.cpp > CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/PoolingLayer.cpp -o CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o: ../InputLayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/InputLayer.cpp

CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/InputLayer.cpp > CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/InputLayer.cpp -o CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o: ../FullyConnectedLayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/FullyConnectedLayer.cpp

CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/FullyConnectedLayer.cpp > CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/FullyConnectedLayer.cpp -o CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o


CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o: CMakeFiles/ConvolutionalNetwork.dir/flags.make
CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o: ../ReluLayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o -c /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ReluLayer.cpp

CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ReluLayer.cpp > CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.i

CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/ReluLayer.cpp -o CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.s

CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o.requires:

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o.requires

CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o.provides: CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ConvolutionalNetwork.dir/build.make CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o.provides.build
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o.provides

CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o.provides.build: CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o


# Object files for target ConvolutionalNetwork
ConvolutionalNetwork_OBJECTS = \
"CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o" \
"CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o"

# External object files for target ConvolutionalNetwork
ConvolutionalNetwork_EXTERNAL_OBJECTS =

ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/build.make
ConvolutionalNetwork: CMakeFiles/ConvolutionalNetwork.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable ConvolutionalNetwork"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ConvolutionalNetwork.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ConvolutionalNetwork.dir/build: ConvolutionalNetwork

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/build

CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/main.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/Neuron.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/NeuralLayer.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/Filter.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalLayer.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuron.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/RandomGenerator.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/ConvolutionalNeuralNetwork.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/PoolingLayer.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/InputLayer.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/FullyConnectedLayer.cpp.o.requires
CMakeFiles/ConvolutionalNetwork.dir/requires: CMakeFiles/ConvolutionalNetwork.dir/ReluLayer.cpp.o.requires

.PHONY : CMakeFiles/ConvolutionalNetwork.dir/requires

CMakeFiles/ConvolutionalNetwork.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ConvolutionalNetwork.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/clean

CMakeFiles/ConvolutionalNetwork.dir/depend:
	cd /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/belisariops/WorkSpace/C++/ConvolutionalNetwork /home/belisariops/WorkSpace/C++/ConvolutionalNetwork /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug /home/belisariops/WorkSpace/C++/ConvolutionalNetwork/cmake-build-debug/CMakeFiles/ConvolutionalNetwork.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ConvolutionalNetwork.dir/depend

