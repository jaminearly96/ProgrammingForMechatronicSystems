# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/week02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/build-week02-Desktop-Default

# Include any dependencies generated for this target.
include CMakeFiles/functions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/functions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/functions.dir/flags.make

CMakeFiles/functions.dir/functions.cpp.o: CMakeFiles/functions.dir/flags.make
CMakeFiles/functions.dir/functions.cpp.o: /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/week02/functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/build-week02-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/functions.dir/functions.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/functions.dir/functions.cpp.o -c /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/week02/functions.cpp

CMakeFiles/functions.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/functions.dir/functions.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/week02/functions.cpp > CMakeFiles/functions.dir/functions.cpp.i

CMakeFiles/functions.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/functions.dir/functions.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/week02/functions.cpp -o CMakeFiles/functions.dir/functions.cpp.s

CMakeFiles/functions.dir/functions.cpp.o.requires:

.PHONY : CMakeFiles/functions.dir/functions.cpp.o.requires

CMakeFiles/functions.dir/functions.cpp.o.provides: CMakeFiles/functions.dir/functions.cpp.o.requires
	$(MAKE) -f CMakeFiles/functions.dir/build.make CMakeFiles/functions.dir/functions.cpp.o.provides.build
.PHONY : CMakeFiles/functions.dir/functions.cpp.o.provides

CMakeFiles/functions.dir/functions.cpp.o.provides.build: CMakeFiles/functions.dir/functions.cpp.o


# Object files for target functions
functions_OBJECTS = \
"CMakeFiles/functions.dir/functions.cpp.o"

# External object files for target functions
functions_EXTERNAL_OBJECTS =

functions: CMakeFiles/functions.dir/functions.cpp.o
functions: CMakeFiles/functions.dir/build.make
functions: CMakeFiles/functions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/build-week02-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable functions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/functions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/functions.dir/build: functions

.PHONY : CMakeFiles/functions.dir/build

CMakeFiles/functions.dir/requires: CMakeFiles/functions.dir/functions.cpp.o.requires

.PHONY : CMakeFiles/functions.dir/requires

CMakeFiles/functions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/functions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/functions.dir/clean

CMakeFiles/functions.dir/depend:
	cd /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/build-week02-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/week02 /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/week02 /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/build-week02-Desktop-Default /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/build-week02-Desktop-Default /home/solo/Desktop/PMS/ProgrammingForMechatronicSystems/build-week02-Desktop-Default/CMakeFiles/functions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/functions.dir/depend

