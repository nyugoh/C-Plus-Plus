# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /opt/clion-2017.3.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.3.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joe/Ripos/Tuts/C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joe/Ripos/Tuts/C++/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C__Jo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C__Jo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C__Jo.dir/flags.make

CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o: CMakeFiles/C__Jo.dir/flags.make
CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o: ../Strings/C-Strings.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joe/Ripos/Tuts/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o -c /home/joe/Ripos/Tuts/C++/Strings/C-Strings.cpp

CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joe/Ripos/Tuts/C++/Strings/C-Strings.cpp > CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.i

CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joe/Ripos/Tuts/C++/Strings/C-Strings.cpp -o CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.s

CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o.requires:

.PHONY : CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o.requires

CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o.provides: CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o.requires
	$(MAKE) -f CMakeFiles/C__Jo.dir/build.make CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o.provides.build
.PHONY : CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o.provides

CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o.provides.build: CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o


# Object files for target C__Jo
C__Jo_OBJECTS = \
"CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o"

# External object files for target C__Jo
C__Jo_EXTERNAL_OBJECTS =

C__Jo: CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o
C__Jo: CMakeFiles/C__Jo.dir/build.make
C__Jo: CMakeFiles/C__Jo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joe/Ripos/Tuts/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C__Jo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C__Jo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C__Jo.dir/build: C__Jo

.PHONY : CMakeFiles/C__Jo.dir/build

CMakeFiles/C__Jo.dir/requires: CMakeFiles/C__Jo.dir/Strings/C-Strings.cpp.o.requires

.PHONY : CMakeFiles/C__Jo.dir/requires

CMakeFiles/C__Jo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C__Jo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C__Jo.dir/clean

CMakeFiles/C__Jo.dir/depend:
	cd /home/joe/Ripos/Tuts/C++/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joe/Ripos/Tuts/C++ /home/joe/Ripos/Tuts/C++ /home/joe/Ripos/Tuts/C++/cmake-build-debug /home/joe/Ripos/Tuts/C++/cmake-build-debug /home/joe/Ripos/Tuts/C++/cmake-build-debug/CMakeFiles/C__Jo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C__Jo.dir/depend

