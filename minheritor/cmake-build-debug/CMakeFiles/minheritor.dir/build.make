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
CMAKE_SOURCE_DIR = "/home/prog2100/C++ Projects/minheritor"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/prog2100/C++ Projects/minheritor/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/minheritor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/minheritor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minheritor.dir/flags.make

CMakeFiles/minheritor.dir/main.cpp.o: CMakeFiles/minheritor.dir/flags.make
CMakeFiles/minheritor.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/prog2100/C++ Projects/minheritor/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/minheritor.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/minheritor.dir/main.cpp.o -c "/home/prog2100/C++ Projects/minheritor/main.cpp"

CMakeFiles/minheritor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minheritor.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/prog2100/C++ Projects/minheritor/main.cpp" > CMakeFiles/minheritor.dir/main.cpp.i

CMakeFiles/minheritor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minheritor.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/prog2100/C++ Projects/minheritor/main.cpp" -o CMakeFiles/minheritor.dir/main.cpp.s

CMakeFiles/minheritor.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/minheritor.dir/main.cpp.o.requires

CMakeFiles/minheritor.dir/main.cpp.o.provides: CMakeFiles/minheritor.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/minheritor.dir/build.make CMakeFiles/minheritor.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/minheritor.dir/main.cpp.o.provides

CMakeFiles/minheritor.dir/main.cpp.o.provides.build: CMakeFiles/minheritor.dir/main.cpp.o


# Object files for target minheritor
minheritor_OBJECTS = \
"CMakeFiles/minheritor.dir/main.cpp.o"

# External object files for target minheritor
minheritor_EXTERNAL_OBJECTS =

minheritor: CMakeFiles/minheritor.dir/main.cpp.o
minheritor: CMakeFiles/minheritor.dir/build.make
minheritor: CMakeFiles/minheritor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/prog2100/C++ Projects/minheritor/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable minheritor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minheritor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minheritor.dir/build: minheritor

.PHONY : CMakeFiles/minheritor.dir/build

CMakeFiles/minheritor.dir/requires: CMakeFiles/minheritor.dir/main.cpp.o.requires

.PHONY : CMakeFiles/minheritor.dir/requires

CMakeFiles/minheritor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/minheritor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/minheritor.dir/clean

CMakeFiles/minheritor.dir/depend:
	cd "/home/prog2100/C++ Projects/minheritor/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/prog2100/C++ Projects/minheritor" "/home/prog2100/C++ Projects/minheritor" "/home/prog2100/C++ Projects/minheritor/cmake-build-debug" "/home/prog2100/C++ Projects/minheritor/cmake-build-debug" "/home/prog2100/C++ Projects/minheritor/cmake-build-debug/CMakeFiles/minheritor.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/minheritor.dir/depend

