# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build

# Include any dependencies generated for this target.
include extensions/dict_Rf/CMakeFiles/dict_Rf.dir/depend.make

# Include the progress variables for this target.
include extensions/dict_Rf/CMakeFiles/dict_Rf.dir/progress.make

# Include the compile flags for this target's objects.
include extensions/dict_Rf/CMakeFiles/dict_Rf.dir/flags.make

extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o: extensions/dict_Rf/CMakeFiles/dict_Rf.dir/flags.make
extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o: ../extensions/dict_Rf/dict_Rf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Rf && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dict_Rf.dir/dict_Rf.c.o   -c /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/extensions/dict_Rf/dict_Rf.c

extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dict_Rf.dir/dict_Rf.c.i"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Rf && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/extensions/dict_Rf/dict_Rf.c > CMakeFiles/dict_Rf.dir/dict_Rf.c.i

extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dict_Rf.dir/dict_Rf.c.s"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Rf && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/extensions/dict_Rf/dict_Rf.c -o CMakeFiles/dict_Rf.dir/dict_Rf.c.s

extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o.requires:

.PHONY : extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o.requires

extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o.provides: extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o.requires
	$(MAKE) -f extensions/dict_Rf/CMakeFiles/dict_Rf.dir/build.make extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o.provides.build
.PHONY : extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o.provides

extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o.provides.build: extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o


# Object files for target dict_Rf
dict_Rf_OBJECTS = \
"CMakeFiles/dict_Rf.dir/dict_Rf.c.o"

# External object files for target dict_Rf
dict_Rf_EXTERNAL_OBJECTS =

extensions/dict_Rf.fdx: extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o
extensions/dict_Rf.fdx: extensions/dict_Rf/CMakeFiles/dict_Rf.dir/build.make
extensions/dict_Rf.fdx: extensions/dict_Rf/CMakeFiles/dict_Rf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared module ../dict_Rf.fdx"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Rf && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dict_Rf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
extensions/dict_Rf/CMakeFiles/dict_Rf.dir/build: extensions/dict_Rf.fdx

.PHONY : extensions/dict_Rf/CMakeFiles/dict_Rf.dir/build

extensions/dict_Rf/CMakeFiles/dict_Rf.dir/requires: extensions/dict_Rf/CMakeFiles/dict_Rf.dir/dict_Rf.c.o.requires

.PHONY : extensions/dict_Rf/CMakeFiles/dict_Rf.dir/requires

extensions/dict_Rf/CMakeFiles/dict_Rf.dir/clean:
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Rf && $(CMAKE_COMMAND) -P CMakeFiles/dict_Rf.dir/cmake_clean.cmake
.PHONY : extensions/dict_Rf/CMakeFiles/dict_Rf.dir/clean

extensions/dict_Rf/CMakeFiles/dict_Rf.dir/depend:
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/extensions/dict_Rf /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Rf /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Rf/CMakeFiles/dict_Rf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : extensions/dict_Rf/CMakeFiles/dict_Rf.dir/depend

