# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/users/maria/Documents/paoo_tema1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/users/maria/Documents/paoo_tema1/_build

# Include any dependencies generated for this target.
include CMakeFiles/first_cpp_program.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/first_cpp_program.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/first_cpp_program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/first_cpp_program.dir/flags.make

CMakeFiles/first_cpp_program.dir/src/tema3.cpp.o: CMakeFiles/first_cpp_program.dir/flags.make
CMakeFiles/first_cpp_program.dir/src/tema3.cpp.o: ../src/tema3.cpp
CMakeFiles/first_cpp_program.dir/src/tema3.cpp.o: CMakeFiles/first_cpp_program.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/users/maria/Documents/paoo_tema1/_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/first_cpp_program.dir/src/tema3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/first_cpp_program.dir/src/tema3.cpp.o -MF CMakeFiles/first_cpp_program.dir/src/tema3.cpp.o.d -o CMakeFiles/first_cpp_program.dir/src/tema3.cpp.o -c /mnt/c/users/maria/Documents/paoo_tema1/src/tema3.cpp

CMakeFiles/first_cpp_program.dir/src/tema3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first_cpp_program.dir/src/tema3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/users/maria/Documents/paoo_tema1/src/tema3.cpp > CMakeFiles/first_cpp_program.dir/src/tema3.cpp.i

CMakeFiles/first_cpp_program.dir/src/tema3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first_cpp_program.dir/src/tema3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/users/maria/Documents/paoo_tema1/src/tema3.cpp -o CMakeFiles/first_cpp_program.dir/src/tema3.cpp.s

# Object files for target first_cpp_program
first_cpp_program_OBJECTS = \
"CMakeFiles/first_cpp_program.dir/src/tema3.cpp.o"

# External object files for target first_cpp_program
first_cpp_program_EXTERNAL_OBJECTS =

first_cpp_program: CMakeFiles/first_cpp_program.dir/src/tema3.cpp.o
first_cpp_program: CMakeFiles/first_cpp_program.dir/build.make
first_cpp_program: CMakeFiles/first_cpp_program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/users/maria/Documents/paoo_tema1/_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable first_cpp_program"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/first_cpp_program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/first_cpp_program.dir/build: first_cpp_program
.PHONY : CMakeFiles/first_cpp_program.dir/build

CMakeFiles/first_cpp_program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/first_cpp_program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/first_cpp_program.dir/clean

CMakeFiles/first_cpp_program.dir/depend:
	cd /mnt/c/users/maria/Documents/paoo_tema1/_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/users/maria/Documents/paoo_tema1 /mnt/c/users/maria/Documents/paoo_tema1 /mnt/c/users/maria/Documents/paoo_tema1/_build /mnt/c/users/maria/Documents/paoo_tema1/_build /mnt/c/users/maria/Documents/paoo_tema1/_build/CMakeFiles/first_cpp_program.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/first_cpp_program.dir/depend

