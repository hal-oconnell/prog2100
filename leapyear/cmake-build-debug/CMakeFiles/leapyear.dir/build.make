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
CMAKE_COMMAND = /home/hal/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/hal/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hal/Projects/prog2100/leapyear

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hal/Projects/prog2100/leapyear/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/leapyear.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leapyear.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leapyear.dir/flags.make

CMakeFiles/leapyear.dir/main.cpp.o: CMakeFiles/leapyear.dir/flags.make
CMakeFiles/leapyear.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hal/Projects/prog2100/leapyear/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leapyear.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leapyear.dir/main.cpp.o -c /home/hal/Projects/prog2100/leapyear/main.cpp

CMakeFiles/leapyear.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leapyear.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hal/Projects/prog2100/leapyear/main.cpp > CMakeFiles/leapyear.dir/main.cpp.i

CMakeFiles/leapyear.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leapyear.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hal/Projects/prog2100/leapyear/main.cpp -o CMakeFiles/leapyear.dir/main.cpp.s

CMakeFiles/leapyear.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/leapyear.dir/main.cpp.o.requires

CMakeFiles/leapyear.dir/main.cpp.o.provides: CMakeFiles/leapyear.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/leapyear.dir/build.make CMakeFiles/leapyear.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/leapyear.dir/main.cpp.o.provides

CMakeFiles/leapyear.dir/main.cpp.o.provides.build: CMakeFiles/leapyear.dir/main.cpp.o


# Object files for target leapyear
leapyear_OBJECTS = \
"CMakeFiles/leapyear.dir/main.cpp.o"

# External object files for target leapyear
leapyear_EXTERNAL_OBJECTS =

leapyear: CMakeFiles/leapyear.dir/main.cpp.o
leapyear: CMakeFiles/leapyear.dir/build.make
leapyear: CMakeFiles/leapyear.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hal/Projects/prog2100/leapyear/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leapyear"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leapyear.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leapyear.dir/build: leapyear

.PHONY : CMakeFiles/leapyear.dir/build

CMakeFiles/leapyear.dir/requires: CMakeFiles/leapyear.dir/main.cpp.o.requires

.PHONY : CMakeFiles/leapyear.dir/requires

CMakeFiles/leapyear.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leapyear.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leapyear.dir/clean

CMakeFiles/leapyear.dir/depend:
	cd /home/hal/Projects/prog2100/leapyear/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hal/Projects/prog2100/leapyear /home/hal/Projects/prog2100/leapyear /home/hal/Projects/prog2100/leapyear/cmake-build-debug /home/hal/Projects/prog2100/leapyear/cmake-build-debug /home/hal/Projects/prog2100/leapyear/cmake-build-debug/CMakeFiles/leapyear.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leapyear.dir/depend

