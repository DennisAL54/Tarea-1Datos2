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
CMAKE_SOURCE_DIR = "/home/dennis/Desktop/Tarea 1/tarea datos 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/dennis/Desktop/Tarea 1/tarea datos 2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/tarea_datos_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tarea_datos_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tarea_datos_2.dir/flags.make

CMakeFiles/tarea_datos_2.dir/main.cpp.o: CMakeFiles/tarea_datos_2.dir/flags.make
CMakeFiles/tarea_datos_2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/dennis/Desktop/Tarea 1/tarea datos 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tarea_datos_2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tarea_datos_2.dir/main.cpp.o -c "/home/dennis/Desktop/Tarea 1/tarea datos 2/main.cpp"

CMakeFiles/tarea_datos_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tarea_datos_2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/dennis/Desktop/Tarea 1/tarea datos 2/main.cpp" > CMakeFiles/tarea_datos_2.dir/main.cpp.i

CMakeFiles/tarea_datos_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tarea_datos_2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/dennis/Desktop/Tarea 1/tarea datos 2/main.cpp" -o CMakeFiles/tarea_datos_2.dir/main.cpp.s

# Object files for target tarea_datos_2
tarea_datos_2_OBJECTS = \
"CMakeFiles/tarea_datos_2.dir/main.cpp.o"

# External object files for target tarea_datos_2
tarea_datos_2_EXTERNAL_OBJECTS =

tarea_datos_2: CMakeFiles/tarea_datos_2.dir/main.cpp.o
tarea_datos_2: CMakeFiles/tarea_datos_2.dir/build.make
tarea_datos_2: CMakeFiles/tarea_datos_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/dennis/Desktop/Tarea 1/tarea datos 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tarea_datos_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tarea_datos_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tarea_datos_2.dir/build: tarea_datos_2

.PHONY : CMakeFiles/tarea_datos_2.dir/build

CMakeFiles/tarea_datos_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tarea_datos_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tarea_datos_2.dir/clean

CMakeFiles/tarea_datos_2.dir/depend:
	cd "/home/dennis/Desktop/Tarea 1/tarea datos 2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/dennis/Desktop/Tarea 1/tarea datos 2" "/home/dennis/Desktop/Tarea 1/tarea datos 2" "/home/dennis/Desktop/Tarea 1/tarea datos 2/cmake-build-debug" "/home/dennis/Desktop/Tarea 1/tarea datos 2/cmake-build-debug" "/home/dennis/Desktop/Tarea 1/tarea datos 2/cmake-build-debug/CMakeFiles/tarea_datos_2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/tarea_datos_2.dir/depend

