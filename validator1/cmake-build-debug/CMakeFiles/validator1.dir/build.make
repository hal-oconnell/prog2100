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
CMAKE_COMMAND = /home/prog2100/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/prog2100/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/prog2100/C++ Projects/validator1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/prog2100/C++ Projects/validator1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/validator1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/validator1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/validator1.dir/flags.make

CMakeFiles/validator1.dir/main.cpp.o: CMakeFiles/validator1.dir/flags.make
CMakeFiles/validator1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/prog2100/C++ Projects/validator1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/validator1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/validator1.dir/main.cpp.o -c "/home/prog2100/C++ Projects/validator1/main.cpp"

CMakeFiles/validator1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/validator1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/prog2100/C++ Projects/validator1/main.cpp" > CMakeFiles/validator1.dir/main.cpp.i

CMakeFiles/validator1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/validator1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/prog2100/C++ Projects/validator1/main.cpp" -o CMakeFiles/validator1.dir/main.cpp.s

CMakeFiles/validator1.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/validator1.dir/main.cpp.o.requires

CMakeFiles/validator1.dir/main.cpp.o.provides: CMakeFiles/validator1.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/validator1.dir/build.make CMakeFiles/validator1.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/validator1.dir/main.cpp.o.provides

CMakeFiles/validator1.dir/main.cpp.o.provides.build: CMakeFiles/validator1.dir/main.cpp.o


# Object files for target validator1
validator1_OBJECTS = \
"CMakeFiles/validator1.dir/main.cpp.o"

# External object files for target validator1
validator1_EXTERNAL_OBJECTS =

validator1: CMakeFiles/validator1.dir/main.cpp.o
validator1: CMakeFiles/validator1.dir/build.make
validator1: CMakeFiles/validator1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/prog2100/C++ Projects/validator1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable validator1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/validator1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/validator1.dir/build: validator1

.PHONY : CMakeFiles/validator1.dir/build

CMakeFiles/validator1.dir/requires: CMakeFiles/validator1.dir/main.cpp.o.requires

.PHONY : CMakeFiles/validator1.dir/requires

CMakeFiles/validator1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/validator1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/validator1.dir/clean

CMakeFiles/validator1.dir/depend:
	cd "/home/prog2100/C++ Projects/validator1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/prog2100/C++ Projects/validator1" "/home/prog2100/C++ Projects/validator1" "/home/prog2100/C++ Projects/validator1/cmake-build-debug" "/home/prog2100/C++ Projects/validator1/cmake-build-debug" "/home/prog2100/C++ Projects/validator1/cmake-build-debug/CMakeFiles/validator1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/validator1.dir/depend

