# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/dylan/canonical/apper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dylan/canonical/apper/obj-x86_64-linux-gnu

# Utility rule file for tsfiles-7217d78147e1ddb39810cb183b5992ba.

# Include any custom commands dependencies for this target.
include CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/progress.make

CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/dylan/canonical/apper/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ts..."
	/usr/bin/cmake -DPYTHON_EXECUTABLE=/usr/bin/python3 -D_ki18n_pmap_compile_script=/usr/lib/x86_64-linux-gnu/cmake/KF5I18n/ts-pmap-compile.py -DCOPY_TO=/home/dylan/canonical/apper/obj-x86_64-linux-gnu/locale -DPO_DIR=/home/dylan/canonical/apper/po -P /usr/lib/x86_64-linux-gnu/cmake/KF5I18n/build-tsfiles.cmake

tsfiles-7217d78147e1ddb39810cb183b5992ba: CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba
tsfiles-7217d78147e1ddb39810cb183b5992ba: CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/build.make
.PHONY : tsfiles-7217d78147e1ddb39810cb183b5992ba

# Rule to build all files generated by this target.
CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/build: tsfiles-7217d78147e1ddb39810cb183b5992ba
.PHONY : CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/build

CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/clean

CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/depend:
	cd /home/dylan/canonical/apper/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dylan/canonical/apper /home/dylan/canonical/apper /home/dylan/canonical/apper/obj-x86_64-linux-gnu /home/dylan/canonical/apper/obj-x86_64-linux-gnu /home/dylan/canonical/apper/obj-x86_64-linux-gnu/CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tsfiles-7217d78147e1ddb39810cb183b5992ba.dir/depend

