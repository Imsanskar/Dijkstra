# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sgr/CLionProjects/DSA_Projects

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sgr/CLionProjects/DSA_Projects/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DSA_PROJECT.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DSA_PROJECT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DSA_PROJECT.dir/flags.make

CMakeFiles/DSA_PROJECT.dir/main.cpp.o: CMakeFiles/DSA_PROJECT.dir/flags.make
CMakeFiles/DSA_PROJECT.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DSA_PROJECT.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSA_PROJECT.dir/main.cpp.o -c /home/sgr/CLionProjects/DSA_Projects/main.cpp

CMakeFiles/DSA_PROJECT.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSA_PROJECT.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgr/CLionProjects/DSA_Projects/main.cpp > CMakeFiles/DSA_PROJECT.dir/main.cpp.i

CMakeFiles/DSA_PROJECT.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSA_PROJECT.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgr/CLionProjects/DSA_Projects/main.cpp -o CMakeFiles/DSA_PROJECT.dir/main.cpp.s

CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.o: CMakeFiles/DSA_PROJECT.dir/flags.make
CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.o: ../source/texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.o -c /home/sgr/CLionProjects/DSA_Projects/source/texture.cpp

CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgr/CLionProjects/DSA_Projects/source/texture.cpp > CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.i

CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgr/CLionProjects/DSA_Projects/source/texture.cpp -o CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.s

CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.o: CMakeFiles/DSA_PROJECT.dir/flags.make
CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.o: ../source/Djikstra.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.o -c /home/sgr/CLionProjects/DSA_Projects/source/Djikstra.cpp

CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgr/CLionProjects/DSA_Projects/source/Djikstra.cpp > CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.i

CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgr/CLionProjects/DSA_Projects/source/Djikstra.cpp -o CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.s

CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.o: CMakeFiles/DSA_PROJECT.dir/flags.make
CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.o: ../source/Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.o -c /home/sgr/CLionProjects/DSA_Projects/source/Node.cpp

CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgr/CLionProjects/DSA_Projects/source/Node.cpp > CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.i

CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgr/CLionProjects/DSA_Projects/source/Node.cpp -o CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.s

CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.o: CMakeFiles/DSA_PROJECT.dir/flags.make
CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.o: ../source/Graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.o -c /home/sgr/CLionProjects/DSA_Projects/source/Graph.cpp

CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgr/CLionProjects/DSA_Projects/source/Graph.cpp > CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.i

CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgr/CLionProjects/DSA_Projects/source/Graph.cpp -o CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.s

CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.o: CMakeFiles/DSA_PROJECT.dir/flags.make
CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.o: ../source/Edge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.o -c /home/sgr/CLionProjects/DSA_Projects/source/Edge.cpp

CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgr/CLionProjects/DSA_Projects/source/Edge.cpp > CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.i

CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgr/CLionProjects/DSA_Projects/source/Edge.cpp -o CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.s

CMakeFiles/DSA_PROJECT.dir/source/button.cpp.o: CMakeFiles/DSA_PROJECT.dir/flags.make
CMakeFiles/DSA_PROJECT.dir/source/button.cpp.o: ../source/button.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/DSA_PROJECT.dir/source/button.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSA_PROJECT.dir/source/button.cpp.o -c /home/sgr/CLionProjects/DSA_Projects/source/button.cpp

CMakeFiles/DSA_PROJECT.dir/source/button.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSA_PROJECT.dir/source/button.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgr/CLionProjects/DSA_Projects/source/button.cpp > CMakeFiles/DSA_PROJECT.dir/source/button.cpp.i

CMakeFiles/DSA_PROJECT.dir/source/button.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSA_PROJECT.dir/source/button.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgr/CLionProjects/DSA_Projects/source/button.cpp -o CMakeFiles/DSA_PROJECT.dir/source/button.cpp.s

CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.o: CMakeFiles/DSA_PROJECT.dir/flags.make
CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.o: ../source/allbutton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.o -c /home/sgr/CLionProjects/DSA_Projects/source/allbutton.cpp

CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgr/CLionProjects/DSA_Projects/source/allbutton.cpp > CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.i

CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgr/CLionProjects/DSA_Projects/source/allbutton.cpp -o CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.s

CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.o: CMakeFiles/DSA_PROJECT.dir/flags.make
CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.o: ../allbutton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.o -c /home/sgr/CLionProjects/DSA_Projects/allbutton.cpp

CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgr/CLionProjects/DSA_Projects/allbutton.cpp > CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.i

CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgr/CLionProjects/DSA_Projects/allbutton.cpp -o CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.s

# Object files for target DSA_PROJECT
DSA_PROJECT_OBJECTS = \
"CMakeFiles/DSA_PROJECT.dir/main.cpp.o" \
"CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.o" \
"CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.o" \
"CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.o" \
"CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.o" \
"CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.o" \
"CMakeFiles/DSA_PROJECT.dir/source/button.cpp.o" \
"CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.o" \
"CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.o"

# External object files for target DSA_PROJECT
DSA_PROJECT_EXTERNAL_OBJECTS =

DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/main.cpp.o
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/source/texture.cpp.o
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/source/Djikstra.cpp.o
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/source/Node.cpp.o
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/source/Graph.cpp.o
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/source/Edge.cpp.o
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/source/button.cpp.o
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/source/allbutton.cpp.o
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/allbutton.cpp.o
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/build.make
DSA_PROJECT: CMakeFiles/DSA_PROJECT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable DSA_PROJECT"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DSA_PROJECT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DSA_PROJECT.dir/build: DSA_PROJECT

.PHONY : CMakeFiles/DSA_PROJECT.dir/build

CMakeFiles/DSA_PROJECT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DSA_PROJECT.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DSA_PROJECT.dir/clean

CMakeFiles/DSA_PROJECT.dir/depend:
	cd /home/sgr/CLionProjects/DSA_Projects/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sgr/CLionProjects/DSA_Projects /home/sgr/CLionProjects/DSA_Projects /home/sgr/CLionProjects/DSA_Projects/cmake-build-debug /home/sgr/CLionProjects/DSA_Projects/cmake-build-debug /home/sgr/CLionProjects/DSA_Projects/cmake-build-debug/CMakeFiles/DSA_PROJECT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DSA_PROJECT.dir/depend

