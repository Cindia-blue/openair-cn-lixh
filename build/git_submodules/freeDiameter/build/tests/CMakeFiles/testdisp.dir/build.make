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
include tests/CMakeFiles/testdisp.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testdisp.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testdisp.dir/flags.make

tests/CMakeFiles/testdisp.dir/testdisp.c.o: tests/CMakeFiles/testdisp.dir/flags.make
tests/CMakeFiles/testdisp.dir/testdisp.c.o: ../tests/testdisp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/testdisp.dir/testdisp.c.o"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/testdisp.dir/testdisp.c.o   -c /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/tests/testdisp.c

tests/CMakeFiles/testdisp.dir/testdisp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/testdisp.dir/testdisp.c.i"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/tests/testdisp.c > CMakeFiles/testdisp.dir/testdisp.c.i

tests/CMakeFiles/testdisp.dir/testdisp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/testdisp.dir/testdisp.c.s"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/tests/testdisp.c -o CMakeFiles/testdisp.dir/testdisp.c.s

tests/CMakeFiles/testdisp.dir/testdisp.c.o.requires:

.PHONY : tests/CMakeFiles/testdisp.dir/testdisp.c.o.requires

tests/CMakeFiles/testdisp.dir/testdisp.c.o.provides: tests/CMakeFiles/testdisp.dir/testdisp.c.o.requires
	$(MAKE) -f tests/CMakeFiles/testdisp.dir/build.make tests/CMakeFiles/testdisp.dir/testdisp.c.o.provides.build
.PHONY : tests/CMakeFiles/testdisp.dir/testdisp.c.o.provides

tests/CMakeFiles/testdisp.dir/testdisp.c.o.provides.build: tests/CMakeFiles/testdisp.dir/testdisp.c.o


# Object files for target testdisp
testdisp_OBJECTS = \
"CMakeFiles/testdisp.dir/testdisp.c.o"

# External object files for target testdisp
testdisp_EXTERNAL_OBJECTS =

tests/testdisp: tests/CMakeFiles/testdisp.dir/testdisp.c.o
tests/testdisp: tests/CMakeFiles/testdisp.dir/build.make
tests/testdisp: libfdcore/libfdcore.so.1.2.1
tests/testdisp: /usr/lib/x86_64-linux-gnu/libgnutls.so
tests/testdisp: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testdisp: libfdproto/libfdproto.so.1.2.1
tests/testdisp: tests/CMakeFiles/testdisp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable testdisp"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testdisp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testdisp.dir/build: tests/testdisp

.PHONY : tests/CMakeFiles/testdisp.dir/build

tests/CMakeFiles/testdisp.dir/requires: tests/CMakeFiles/testdisp.dir/testdisp.c.o.requires

.PHONY : tests/CMakeFiles/testdisp.dir/requires

tests/CMakeFiles/testdisp.dir/clean:
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testdisp.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testdisp.dir/clean

tests/CMakeFiles/testdisp.dir/depend:
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/tests /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/tests /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/tests/CMakeFiles/testdisp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testdisp.dir/depend

