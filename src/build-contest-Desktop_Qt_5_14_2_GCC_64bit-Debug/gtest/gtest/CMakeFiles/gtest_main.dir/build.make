# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/slam/Robot2020/src/contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug

# Include any dependencies generated for this target.
include gtest/gtest/CMakeFiles/gtest_main.dir/depend.make

# Include the progress variables for this target.
include gtest/gtest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include gtest/gtest/CMakeFiles/gtest_main.dir/flags.make

gtest/gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o: gtest/gtest/CMakeFiles/gtest_main.dir/flags.make
gtest/gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o: gtest/gtest/gtest_main_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gtest/gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o"
	cd /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest && /usr/bin/gcc  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o -c /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest/gtest_main_autogen/mocs_compilation.cpp

gtest/gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.i"
	cd /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest && /usr/bin/gcc $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest/gtest_main_autogen/mocs_compilation.cpp > CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.i

gtest/gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.s"
	cd /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest && /usr/bin/gcc $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest/gtest_main_autogen/mocs_compilation.cpp -o CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.s

gtest/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: gtest/gtest/CMakeFiles/gtest_main.dir/flags.make
gtest/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: /usr/src/gtest/src/gtest_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object gtest/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest && /usr/bin/gcc  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c /usr/src/gtest/src/gtest_main.cc

gtest/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest && /usr/bin/gcc $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/src/gtest/src/gtest_main.cc > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

gtest/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest && /usr/bin/gcc $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/src/gtest/src/gtest_main.cc -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

gtest/gtest/libgtest_main.so: gtest/gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o
gtest/gtest/libgtest_main.so: gtest/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
gtest/gtest/libgtest_main.so: gtest/gtest/CMakeFiles/gtest_main.dir/build.make
gtest/gtest/libgtest_main.so: gtest/gtest/libgtest.so
gtest/gtest/libgtest_main.so: gtest/gtest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libgtest_main.so"
	cd /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gtest/gtest/CMakeFiles/gtest_main.dir/build: gtest/gtest/libgtest_main.so

.PHONY : gtest/gtest/CMakeFiles/gtest_main.dir/build

gtest/gtest/CMakeFiles/gtest_main.dir/clean:
	cd /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : gtest/gtest/CMakeFiles/gtest_main.dir/clean

gtest/gtest/CMakeFiles/gtest_main.dir/depend:
	cd /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/slam/Robot2020/src/contest /usr/src/gtest /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest /home/slam/Robot2020/src/build-contest-Desktop_Qt_5_14_2_GCC_64bit-Debug/gtest/gtest/CMakeFiles/gtest_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gtest/gtest/CMakeFiles/gtest_main.dir/depend
