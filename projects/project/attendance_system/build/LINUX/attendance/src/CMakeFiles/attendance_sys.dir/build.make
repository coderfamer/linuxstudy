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
CMAKE_SOURCE_DIR = /home/quan/share/dissertation/project/attendance_system

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance

# Include any dependencies generated for this target.
include src/CMakeFiles/attendance_sys.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/attendance_sys.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/attendance_sys.dir/flags.make

src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o: src/CMakeFiles/attendance_sys.dir/flags.make
src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o: ../../../src/libs/manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/attendance_sys.dir/libs/manager.cpp.o -c /home/quan/share/dissertation/project/attendance_system/src/libs/manager.cpp

src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attendance_sys.dir/libs/manager.cpp.i"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quan/share/dissertation/project/attendance_system/src/libs/manager.cpp > CMakeFiles/attendance_sys.dir/libs/manager.cpp.i

src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attendance_sys.dir/libs/manager.cpp.s"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quan/share/dissertation/project/attendance_system/src/libs/manager.cpp -o CMakeFiles/attendance_sys.dir/libs/manager.cpp.s

src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o.requires:

.PHONY : src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o.requires

src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o.provides: src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/attendance_sys.dir/build.make src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o.provides.build
.PHONY : src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o.provides

src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o.provides.build: src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o


src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o: src/CMakeFiles/attendance_sys.dir/flags.make
src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o: ../../../src/libs/interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/attendance_sys.dir/libs/interface.cpp.o -c /home/quan/share/dissertation/project/attendance_system/src/libs/interface.cpp

src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attendance_sys.dir/libs/interface.cpp.i"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quan/share/dissertation/project/attendance_system/src/libs/interface.cpp > CMakeFiles/attendance_sys.dir/libs/interface.cpp.i

src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attendance_sys.dir/libs/interface.cpp.s"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quan/share/dissertation/project/attendance_system/src/libs/interface.cpp -o CMakeFiles/attendance_sys.dir/libs/interface.cpp.s

src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o.requires:

.PHONY : src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o.requires

src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o.provides: src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/attendance_sys.dir/build.make src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o.provides.build
.PHONY : src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o.provides

src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o.provides.build: src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o


src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o: src/CMakeFiles/attendance_sys.dir/flags.make
src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o: ../../../src/libs/disk.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/attendance_sys.dir/libs/disk.cpp.o -c /home/quan/share/dissertation/project/attendance_system/src/libs/disk.cpp

src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attendance_sys.dir/libs/disk.cpp.i"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quan/share/dissertation/project/attendance_system/src/libs/disk.cpp > CMakeFiles/attendance_sys.dir/libs/disk.cpp.i

src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attendance_sys.dir/libs/disk.cpp.s"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quan/share/dissertation/project/attendance_system/src/libs/disk.cpp -o CMakeFiles/attendance_sys.dir/libs/disk.cpp.s

src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o.requires:

.PHONY : src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o.requires

src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o.provides: src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/attendance_sys.dir/build.make src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o.provides.build
.PHONY : src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o.provides

src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o.provides.build: src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o


src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o: src/CMakeFiles/attendance_sys.dir/flags.make
src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o: ../../../src/libs/admin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/attendance_sys.dir/libs/admin.cpp.o -c /home/quan/share/dissertation/project/attendance_system/src/libs/admin.cpp

src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attendance_sys.dir/libs/admin.cpp.i"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quan/share/dissertation/project/attendance_system/src/libs/admin.cpp > CMakeFiles/attendance_sys.dir/libs/admin.cpp.i

src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attendance_sys.dir/libs/admin.cpp.s"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quan/share/dissertation/project/attendance_system/src/libs/admin.cpp -o CMakeFiles/attendance_sys.dir/libs/admin.cpp.s

src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o.requires:

.PHONY : src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o.requires

src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o.provides: src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/attendance_sys.dir/build.make src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o.provides.build
.PHONY : src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o.provides

src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o.provides.build: src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o


src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o: src/CMakeFiles/attendance_sys.dir/flags.make
src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o: ../../../src/libs/counsellor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o -c /home/quan/share/dissertation/project/attendance_system/src/libs/counsellor.cpp

src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.i"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quan/share/dissertation/project/attendance_system/src/libs/counsellor.cpp > CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.i

src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.s"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quan/share/dissertation/project/attendance_system/src/libs/counsellor.cpp -o CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.s

src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o.requires:

.PHONY : src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o.requires

src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o.provides: src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/attendance_sys.dir/build.make src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o.provides.build
.PHONY : src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o.provides

src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o.provides.build: src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o


src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o: src/CMakeFiles/attendance_sys.dir/flags.make
src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o: ../../../src/libs/teacher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o -c /home/quan/share/dissertation/project/attendance_system/src/libs/teacher.cpp

src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attendance_sys.dir/libs/teacher.cpp.i"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quan/share/dissertation/project/attendance_system/src/libs/teacher.cpp > CMakeFiles/attendance_sys.dir/libs/teacher.cpp.i

src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attendance_sys.dir/libs/teacher.cpp.s"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quan/share/dissertation/project/attendance_system/src/libs/teacher.cpp -o CMakeFiles/attendance_sys.dir/libs/teacher.cpp.s

src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o.requires:

.PHONY : src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o.requires

src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o.provides: src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/attendance_sys.dir/build.make src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o.provides.build
.PHONY : src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o.provides

src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o.provides.build: src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o


src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o: src/CMakeFiles/attendance_sys.dir/flags.make
src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o: ../../../src/libs/student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/attendance_sys.dir/libs/student.cpp.o -c /home/quan/share/dissertation/project/attendance_system/src/libs/student.cpp

src/CMakeFiles/attendance_sys.dir/libs/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attendance_sys.dir/libs/student.cpp.i"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quan/share/dissertation/project/attendance_system/src/libs/student.cpp > CMakeFiles/attendance_sys.dir/libs/student.cpp.i

src/CMakeFiles/attendance_sys.dir/libs/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attendance_sys.dir/libs/student.cpp.s"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quan/share/dissertation/project/attendance_system/src/libs/student.cpp -o CMakeFiles/attendance_sys.dir/libs/student.cpp.s

src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o.requires:

.PHONY : src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o.requires

src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o.provides: src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/attendance_sys.dir/build.make src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o.provides.build
.PHONY : src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o.provides

src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o.provides.build: src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o


src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o: src/CMakeFiles/attendance_sys.dir/flags.make
src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o: ../../../src/libs/public.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/attendance_sys.dir/libs/public.cpp.o -c /home/quan/share/dissertation/project/attendance_system/src/libs/public.cpp

src/CMakeFiles/attendance_sys.dir/libs/public.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attendance_sys.dir/libs/public.cpp.i"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quan/share/dissertation/project/attendance_system/src/libs/public.cpp > CMakeFiles/attendance_sys.dir/libs/public.cpp.i

src/CMakeFiles/attendance_sys.dir/libs/public.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attendance_sys.dir/libs/public.cpp.s"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quan/share/dissertation/project/attendance_system/src/libs/public.cpp -o CMakeFiles/attendance_sys.dir/libs/public.cpp.s

src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o.requires:

.PHONY : src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o.requires

src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o.provides: src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/attendance_sys.dir/build.make src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o.provides.build
.PHONY : src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o.provides

src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o.provides.build: src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o


src/CMakeFiles/attendance_sys.dir/main.cpp.o: src/CMakeFiles/attendance_sys.dir/flags.make
src/CMakeFiles/attendance_sys.dir/main.cpp.o: ../../../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/attendance_sys.dir/main.cpp.o"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/attendance_sys.dir/main.cpp.o -c /home/quan/share/dissertation/project/attendance_system/src/main.cpp

src/CMakeFiles/attendance_sys.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attendance_sys.dir/main.cpp.i"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quan/share/dissertation/project/attendance_system/src/main.cpp > CMakeFiles/attendance_sys.dir/main.cpp.i

src/CMakeFiles/attendance_sys.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attendance_sys.dir/main.cpp.s"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quan/share/dissertation/project/attendance_system/src/main.cpp -o CMakeFiles/attendance_sys.dir/main.cpp.s

src/CMakeFiles/attendance_sys.dir/main.cpp.o.requires:

.PHONY : src/CMakeFiles/attendance_sys.dir/main.cpp.o.requires

src/CMakeFiles/attendance_sys.dir/main.cpp.o.provides: src/CMakeFiles/attendance_sys.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/attendance_sys.dir/build.make src/CMakeFiles/attendance_sys.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/attendance_sys.dir/main.cpp.o.provides

src/CMakeFiles/attendance_sys.dir/main.cpp.o.provides.build: src/CMakeFiles/attendance_sys.dir/main.cpp.o


# Object files for target attendance_sys
attendance_sys_OBJECTS = \
"CMakeFiles/attendance_sys.dir/libs/manager.cpp.o" \
"CMakeFiles/attendance_sys.dir/libs/interface.cpp.o" \
"CMakeFiles/attendance_sys.dir/libs/disk.cpp.o" \
"CMakeFiles/attendance_sys.dir/libs/admin.cpp.o" \
"CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o" \
"CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o" \
"CMakeFiles/attendance_sys.dir/libs/student.cpp.o" \
"CMakeFiles/attendance_sys.dir/libs/public.cpp.o" \
"CMakeFiles/attendance_sys.dir/main.cpp.o"

# External object files for target attendance_sys
attendance_sys_EXTERNAL_OBJECTS =

bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/main.cpp.o
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/build.make
bin/attendance_sys: src/CMakeFiles/attendance_sys.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable ../bin/attendance_sys"
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/attendance_sys.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/attendance_sys.dir/build: bin/attendance_sys

.PHONY : src/CMakeFiles/attendance_sys.dir/build

src/CMakeFiles/attendance_sys.dir/requires: src/CMakeFiles/attendance_sys.dir/libs/manager.cpp.o.requires
src/CMakeFiles/attendance_sys.dir/requires: src/CMakeFiles/attendance_sys.dir/libs/interface.cpp.o.requires
src/CMakeFiles/attendance_sys.dir/requires: src/CMakeFiles/attendance_sys.dir/libs/disk.cpp.o.requires
src/CMakeFiles/attendance_sys.dir/requires: src/CMakeFiles/attendance_sys.dir/libs/admin.cpp.o.requires
src/CMakeFiles/attendance_sys.dir/requires: src/CMakeFiles/attendance_sys.dir/libs/counsellor.cpp.o.requires
src/CMakeFiles/attendance_sys.dir/requires: src/CMakeFiles/attendance_sys.dir/libs/teacher.cpp.o.requires
src/CMakeFiles/attendance_sys.dir/requires: src/CMakeFiles/attendance_sys.dir/libs/student.cpp.o.requires
src/CMakeFiles/attendance_sys.dir/requires: src/CMakeFiles/attendance_sys.dir/libs/public.cpp.o.requires
src/CMakeFiles/attendance_sys.dir/requires: src/CMakeFiles/attendance_sys.dir/main.cpp.o.requires

.PHONY : src/CMakeFiles/attendance_sys.dir/requires

src/CMakeFiles/attendance_sys.dir/clean:
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src && $(CMAKE_COMMAND) -P CMakeFiles/attendance_sys.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/attendance_sys.dir/clean

src/CMakeFiles/attendance_sys.dir/depend:
	cd /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/quan/share/dissertation/project/attendance_system /home/quan/share/dissertation/project/attendance_system/src /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src /home/quan/share/dissertation/project/attendance_system/build/LINUX/attendance/src/CMakeFiles/attendance_sys.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/attendance_sys.dir/depend
