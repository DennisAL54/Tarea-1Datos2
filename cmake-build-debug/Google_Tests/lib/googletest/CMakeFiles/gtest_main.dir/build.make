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
CMAKE_COMMAND = /opt/clion-2020.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2020.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug"

# Include any dependencies generated for this target.
include Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/depend.make

# Include the progress variables for this target.
include Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/flags.make

Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/flags.make
Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: ../Google_Tests/lib/googletest/src/gtest_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/Google_Tests/lib/googletest" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/Google_Tests/lib/googletest/src/gtest_main.cc"

Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/Google_Tests/lib/googletest" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/Google_Tests/lib/googletest/src/gtest_main.cc" > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/Google_Tests/lib/googletest" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/Google_Tests/lib/googletest/src/gtest_main.cc" -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

lib/libgtest_maind.a: Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
lib/libgtest_maind.a: Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/build.make
lib/libgtest_maind.a: Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libgtest_maind.a"
	cd "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/Google_Tests/lib/googletest" && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean_target.cmake
	cd "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/Google_Tests/lib/googletest" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/build: lib/libgtest_maind.a

.PHONY : Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/build

Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/clean:
	cd "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/Google_Tests/lib/googletest" && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/clean

Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/depend:
	cd "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2" "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/Google_Tests/lib/googletest" "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug" "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/Google_Tests/lib/googletest" "/home/dennis/Desktop/Tarea 1/Tarea-1Datos2/cmake-build-debug/Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : Google_Tests/lib/googletest/CMakeFiles/gtest_main.dir/depend

