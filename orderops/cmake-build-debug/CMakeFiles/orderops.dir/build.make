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
CMAKE_SOURCE_DIR = "/home/prog2100/C++ Projects/orderops"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/prog2100/C++ Projects/orderops/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/orderops.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/orderops.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/orderops.dir/flags.make

CMakeFiles/orderops.dir/main.cpp.o: CMakeFiles/orderops.dir/flags.make
CMakeFiles/orderops.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/prog2100/C++ Projects/orderops/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/orderops.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/orderops.dir/main.cpp.o -c "/home/prog2100/C++ Projects/orderops/main.cpp"

CMakeFiles/orderops.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/orderops.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/prog2100/C++ Projects/orderops/main.cpp" > CMakeFiles/orderops.dir/main.cpp.i

CMakeFiles/orderops.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/orderops.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/prog2100/C++ Projects/orderops/main.cpp" -o CMakeFiles/orderops.dir/main.cpp.s

CMakeFiles/orderops.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/orderops.dir/main.cpp.o.requires

CMakeFiles/orderops.dir/main.cpp.o.provides: CMakeFiles/orderops.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/orderops.dir/build.make CMakeFiles/orderops.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/orderops.dir/main.cpp.o.provides

CMakeFiles/orderops.dir/main.cpp.o.provides.build: CMakeFiles/orderops.dir/main.cpp.o


# Object files for target orderops
orderops_OBJECTS = \
"CMakeFiles/orderops.dir/main.cpp.o"

# External object files for target orderops
orderops_EXTERNAL_OBJECTS =

orderops: CMakeFiles/orderops.dir/main.cpp.o
orderops: CMakeFiles/orderops.dir/build.make
orderops: CMakeFiles/orderops.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/prog2100/C++ Projects/orderops/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable orderops"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/orderops.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/orderops.dir/build: orderops

.PHONY : CMakeFiles/orderops.dir/build

CMakeFiles/orderops.dir/requires: CMakeFiles/orderops.dir/main.cpp.o.requires

.PHONY : CMakeFiles/orderops.dir/requires

CMakeFiles/orderops.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/orderops.dir/cmake_clean.cmake
.PHONY : CMakeFiles/orderops.dir/clean

CMakeFiles/orderops.dir/depend:
	cd "/home/prog2100/C++ Projects/orderops/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/prog2100/C++ Projects/orderops" "/home/prog2100/C++ Projects/orderops" "/home/prog2100/C++ Projects/orderops/cmake-build-debug" "/home/prog2100/C++ Projects/orderops/cmake-build-debug" "/home/prog2100/C++ Projects/orderops/cmake-build-debug/CMakeFiles/orderops.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/orderops.dir/depend
