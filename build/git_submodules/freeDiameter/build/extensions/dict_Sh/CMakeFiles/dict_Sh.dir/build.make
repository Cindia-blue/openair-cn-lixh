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
include extensions/dict_Sh/CMakeFiles/dict_Sh.dir/depend.make

# Include the progress variables for this target.
include extensions/dict_Sh/CMakeFiles/dict_Sh.dir/progress.make

# Include the compile flags for this target's objects.
include extensions/dict_Sh/CMakeFiles/dict_Sh.dir/flags.make

extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o: extensions/dict_Sh/CMakeFiles/dict_Sh.dir/flags.make
extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o: ../extensions/dict_Sh/dict_Sh.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Sh && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dict_Sh.dir/dict_Sh.c.o   -c /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/extensions/dict_Sh/dict_Sh.c

extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dict_Sh.dir/dict_Sh.c.i"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Sh && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/extensions/dict_Sh/dict_Sh.c > CMakeFiles/dict_Sh.dir/dict_Sh.c.i

extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dict_Sh.dir/dict_Sh.c.s"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Sh && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/extensions/dict_Sh/dict_Sh.c -o CMakeFiles/dict_Sh.dir/dict_Sh.c.s

extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o.requires:

.PHONY : extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o.requires

extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o.provides: extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o.requires
	$(MAKE) -f extensions/dict_Sh/CMakeFiles/dict_Sh.dir/build.make extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o.provides.build
.PHONY : extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o.provides

extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o.provides.build: extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o


# Object files for target dict_Sh
dict_Sh_OBJECTS = \
"CMakeFiles/dict_Sh.dir/dict_Sh.c.o"

# External object files for target dict_Sh
dict_Sh_EXTERNAL_OBJECTS =

extensions/dict_Sh.fdx: extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o
extensions/dict_Sh.fdx: extensions/dict_Sh/CMakeFiles/dict_Sh.dir/build.make
extensions/dict_Sh.fdx: extensions/dict_Sh/CMakeFiles/dict_Sh.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared module ../dict_Sh.fdx"
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Sh && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dict_Sh.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
extensions/dict_Sh/CMakeFiles/dict_Sh.dir/build: extensions/dict_Sh.fdx

.PHONY : extensions/dict_Sh/CMakeFiles/dict_Sh.dir/build

extensions/dict_Sh/CMakeFiles/dict_Sh.dir/requires: extensions/dict_Sh/CMakeFiles/dict_Sh.dir/dict_Sh.c.o.requires

.PHONY : extensions/dict_Sh/CMakeFiles/dict_Sh.dir/requires

extensions/dict_Sh/CMakeFiles/dict_Sh.dir/clean:
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Sh && $(CMAKE_COMMAND) -P CMakeFiles/dict_Sh.dir/cmake_clean.cmake
.PHONY : extensions/dict_Sh/CMakeFiles/dict_Sh.dir/clean

extensions/dict_Sh/CMakeFiles/dict_Sh.dir/depend:
	cd /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/extensions/dict_Sh /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Sh /home/lixh/v0.1.0/openair-cn/build/git_submodules/freeDiameter/build/extensions/dict_Sh/CMakeFiles/dict_Sh.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : extensions/dict_Sh/CMakeFiles/dict_Sh.dir/depend

