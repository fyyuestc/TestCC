# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\TestCC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\TestCC\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TestCC.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TestCC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestCC.dir/flags.make

CMakeFiles/TestCC.dir/main.c.obj: CMakeFiles/TestCC.dir/flags.make
CMakeFiles/TestCC.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\TestCC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TestCC.dir/main.c.obj"
	E:\MinGW\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TestCC.dir\main.c.obj   -c E:\TestCC\main.c

CMakeFiles/TestCC.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TestCC.dir/main.c.i"
	E:\MinGW\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\TestCC\main.c > CMakeFiles\TestCC.dir\main.c.i

CMakeFiles/TestCC.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TestCC.dir/main.c.s"
	E:\MinGW\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\TestCC\main.c -o CMakeFiles\TestCC.dir\main.c.s

# Object files for target TestCC
TestCC_OBJECTS = \
"CMakeFiles/TestCC.dir/main.c.obj"

# External object files for target TestCC
TestCC_EXTERNAL_OBJECTS =

TestCC.exe: CMakeFiles/TestCC.dir/main.c.obj
TestCC.exe: CMakeFiles/TestCC.dir/build.make
TestCC.exe: CMakeFiles/TestCC.dir/linklibs.rsp
TestCC.exe: CMakeFiles/TestCC.dir/objects1.rsp
TestCC.exe: CMakeFiles/TestCC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\TestCC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TestCC.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TestCC.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestCC.dir/build: TestCC.exe

.PHONY : CMakeFiles/TestCC.dir/build

CMakeFiles/TestCC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TestCC.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TestCC.dir/clean

CMakeFiles/TestCC.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\TestCC E:\TestCC E:\TestCC\cmake-build-debug E:\TestCC\cmake-build-debug E:\TestCC\cmake-build-debug\CMakeFiles\TestCC.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestCC.dir/depend

