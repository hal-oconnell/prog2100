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
CMAKE_SOURCE_DIR = /home/hal/Projects/prog2100/overload

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hal/Projects/prog2100/overload/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/overload.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/overload.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/overload.dir/flags.make

CMakeFiles/overload.dir/main.cpp.o: CMakeFiles/overload.dir/flags.make
CMakeFiles/overload.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hal/Projects/prog2100/overload/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/overload.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/overload.dir/main.cpp.o -c /home/hal/Projects/prog2100/overload/main.cpp

CMakeFiles/overload.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/overload.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hal/Projects/prog2100/overload/main.cpp > CMakeFiles/overload.dir/main.cpp.i

CMakeFiles/overload.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/overload.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hal/Projects/prog2100/overload/main.cpp -o CMakeFiles/overload.dir/main.cpp.s

CMakeFiles/overload.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/overload.dir/main.cpp.o.requires

CMakeFiles/overload.dir/main.cpp.o.provides: CMakeFiles/overload.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/overload.dir/build.make CMakeFiles/overload.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/overload.dir/main.cpp.o.provides

CMakeFiles/overload.dir/main.cpp.o.provides.build: CMakeFiles/overload.dir/main.cpp.o


# Object files for target overload
overload_OBJECTS = \
"CMakeFiles/overload.dir/main.cpp.o"

# External object files for target overload
overload_EXTERNAL_OBJECTS =

overload: CMakeFiles/overload.dir/main.cpp.o
overload: CMakeFiles/overload.dir/build.make
overload: CMakeFiles/overload.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hal/Projects/prog2100/overload/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable overload"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/overload.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/overload.dir/build: overload

.PHONY : CMakeFiles/overload.dir/build

CMakeFiles/overload.dir/requires: CMakeFiles/overload.dir/main.cpp.o.requires

.PHONY : CMakeFiles/overload.dir/requires

CMakeFiles/overload.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/overload.dir/cmake_clean.cmake
.PHONY : CMakeFiles/overload.dir/clean

CMakeFiles/overload.dir/depend:
	cd /home/hal/Projects/prog2100/overload/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hal/Projects/prog2100/overload /home/hal/Projects/prog2100/overload /home/hal/Projects/prog2100/overload/cmake-build-debug /home/hal/Projects/prog2100/overload/cmake-build-debug /home/hal/Projects/prog2100/overload/cmake-build-debug/CMakeFiles/overload.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/overload.dir/depend

