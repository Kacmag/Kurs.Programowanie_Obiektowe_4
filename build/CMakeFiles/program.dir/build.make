# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/build

# Include any dependencies generated for this target.
include CMakeFiles/program.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program.dir/flags.make

CMakeFiles/program.dir/src/vector.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/src/vector.cpp.o: ../src/vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/program.dir/src/vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/src/vector.cpp.o -c /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/src/vector.cpp

CMakeFiles/program.dir/src/vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/src/vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/src/vector.cpp > CMakeFiles/program.dir/src/vector.cpp.i

CMakeFiles/program.dir/src/vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/src/vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/src/vector.cpp -o CMakeFiles/program.dir/src/vector.cpp.s

CMakeFiles/program.dir/src/matrix.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/src/matrix.cpp.o: ../src/matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/program.dir/src/matrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/src/matrix.cpp.o -c /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/src/matrix.cpp

CMakeFiles/program.dir/src/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/src/matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/src/matrix.cpp > CMakeFiles/program.dir/src/matrix.cpp.i

CMakeFiles/program.dir/src/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/src/matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/src/matrix.cpp -o CMakeFiles/program.dir/src/matrix.cpp.s

program: CMakeFiles/program.dir/src/vector.cpp.o
program: CMakeFiles/program.dir/src/matrix.cpp.o
program: CMakeFiles/program.dir/build.make

.PHONY : program

# Rule to build all files generated by this target.
CMakeFiles/program.dir/build: program

.PHONY : CMakeFiles/program.dir/build

CMakeFiles/program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program.dir/clean

CMakeFiles/program.dir/depend:
	cd /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4 /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4 /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/build /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/build /home/ljaniec/Documents/Uczelnia/2021_2022/KPO/templates/kpo-zad4/build/CMakeFiles/program.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/program.dir/depend

