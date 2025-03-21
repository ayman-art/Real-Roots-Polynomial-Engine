# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\cmake-3.28.3-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = C:\cmake-3.28.3-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Projects\Real-Roots-Polynomial-Engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\Real-Roots-Polynomial-Engine\build

# Include any dependencies generated for this target.
include UnitTesting/CMakeFiles/ExtensiveTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include UnitTesting/CMakeFiles/ExtensiveTest.dir/compiler_depend.make

# Include the progress variables for this target.
include UnitTesting/CMakeFiles/ExtensiveTest.dir/progress.make

# Include the compile flags for this target's objects.
include UnitTesting/CMakeFiles/ExtensiveTest.dir/flags.make

UnitTesting/CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.obj: UnitTesting/CMakeFiles/ExtensiveTest.dir/flags.make
UnitTesting/CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.obj: UnitTesting/CMakeFiles/ExtensiveTest.dir/includes_CXX.rsp
UnitTesting/CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.obj: C:/Projects/Real-Roots-Polynomial-Engine/UnitTesting/extensiveTesting.cpp
UnitTesting/CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.obj: UnitTesting/CMakeFiles/ExtensiveTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Projects\Real-Roots-Polynomial-Engine\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object UnitTesting/CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.obj"
	cd /d C:\Projects\Real-Roots-Polynomial-Engine\build\UnitTesting && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT UnitTesting/CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.obj -MF CMakeFiles\ExtensiveTest.dir\extensiveTesting.cpp.obj.d -o CMakeFiles\ExtensiveTest.dir\extensiveTesting.cpp.obj -c C:\Projects\Real-Roots-Polynomial-Engine\UnitTesting\extensiveTesting.cpp

UnitTesting/CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.i"
	cd /d C:\Projects\Real-Roots-Polynomial-Engine\build\UnitTesting && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Projects\Real-Roots-Polynomial-Engine\UnitTesting\extensiveTesting.cpp > CMakeFiles\ExtensiveTest.dir\extensiveTesting.cpp.i

UnitTesting/CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.s"
	cd /d C:\Projects\Real-Roots-Polynomial-Engine\build\UnitTesting && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Projects\Real-Roots-Polynomial-Engine\UnitTesting\extensiveTesting.cpp -o CMakeFiles\ExtensiveTest.dir\extensiveTesting.cpp.s

# Object files for target ExtensiveTest
ExtensiveTest_OBJECTS = \
"CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.obj"

# External object files for target ExtensiveTest
ExtensiveTest_EXTERNAL_OBJECTS =

UnitTesting/ExtensiveTest.exe: UnitTesting/CMakeFiles/ExtensiveTest.dir/extensiveTesting.cpp.obj
UnitTesting/ExtensiveTest.exe: UnitTesting/CMakeFiles/ExtensiveTest.dir/build.make
UnitTesting/ExtensiveTest.exe: PolyEngine/libengine.a
UnitTesting/ExtensiveTest.exe: PolyEngine/libengine.a
UnitTesting/ExtensiveTest.exe: lib/libgtest_main.a
UnitTesting/ExtensiveTest.exe: lib/libgtest.a
UnitTesting/ExtensiveTest.exe: UnitTesting/CMakeFiles/ExtensiveTest.dir/linkLibs.rsp
UnitTesting/ExtensiveTest.exe: UnitTesting/CMakeFiles/ExtensiveTest.dir/objects1.rsp
UnitTesting/ExtensiveTest.exe: UnitTesting/CMakeFiles/ExtensiveTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Projects\Real-Roots-Polynomial-Engine\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ExtensiveTest.exe"
	cd /d C:\Projects\Real-Roots-Polynomial-Engine\build\UnitTesting && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ExtensiveTest.dir\link.txt --verbose=$(VERBOSE)
	cd /d C:\Projects\Real-Roots-Polynomial-Engine\build\UnitTesting && C:\cmake-3.28.3-windows-x86_64\bin\cmake.exe -D TEST_TARGET=ExtensiveTest -D TEST_EXECUTABLE=C:/Projects/Real-Roots-Polynomial-Engine/build/UnitTesting/ExtensiveTest.exe -D TEST_EXECUTOR= -D TEST_WORKING_DIR=C:/Projects/Real-Roots-Polynomial-Engine/build/UnitTesting -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=ExtensiveTest_TESTS -D CTEST_FILE=C:/Projects/Real-Roots-Polynomial-Engine/build/UnitTesting/ExtensiveTest[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P C:/cmake-3.28.3-windows-x86_64/share/cmake-3.28/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
UnitTesting/CMakeFiles/ExtensiveTest.dir/build: UnitTesting/ExtensiveTest.exe
.PHONY : UnitTesting/CMakeFiles/ExtensiveTest.dir/build

UnitTesting/CMakeFiles/ExtensiveTest.dir/clean:
	cd /d C:\Projects\Real-Roots-Polynomial-Engine\build\UnitTesting && $(CMAKE_COMMAND) -P CMakeFiles\ExtensiveTest.dir\cmake_clean.cmake
.PHONY : UnitTesting/CMakeFiles/ExtensiveTest.dir/clean

UnitTesting/CMakeFiles/ExtensiveTest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\Real-Roots-Polynomial-Engine C:\Projects\Real-Roots-Polynomial-Engine\UnitTesting C:\Projects\Real-Roots-Polynomial-Engine\build C:\Projects\Real-Roots-Polynomial-Engine\build\UnitTesting C:\Projects\Real-Roots-Polynomial-Engine\build\UnitTesting\CMakeFiles\ExtensiveTest.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : UnitTesting/CMakeFiles/ExtensiveTest.dir/depend

