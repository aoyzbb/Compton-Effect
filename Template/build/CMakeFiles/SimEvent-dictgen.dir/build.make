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
CMAKE_SOURCE_DIR = /home/ao/workstation/Compton-Effect/Template

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ao/workstation/Compton-Effect/Template/build

# Utility rule file for SimEvent-dictgen.

# Include the progress variables for this target.
include CMakeFiles/SimEvent-dictgen.dir/progress.make

CMakeFiles/SimEvent-dictgen: SimEvent.cxx


SimEvent.cxx: ../source/AnalysisManager/include/SimEvent.hh
SimEvent.cxx: ../source/AnalysisManager/xml/selection.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ao/workstation/Compton-Effect/Template/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SimEvent.cxx, SimEventDict.rootmap"
	/home/ao/download/root_v6.20.04.Linux-ubuntu18-x86_64-gcc7.5/root/bin/genreflex /home/ao/workstation/Compton-Effect/Template/source/AnalysisManager/include/SimEvent.hh -o SimEvent.cxx --rootmap=SimEventDict.rootmap --rootmap-lib=libSimEventDict --select=/home/ao/workstation/Compton-Effect/Template/source/AnalysisManager/xml/selection.xml --gccxmlpath=/bin -I/home/ao/workstation/Compton-Effect/Template -I/home/ao/download/geant4.10.06-install/include/Geant4 -I/home/ao/download/geant4.10.06-install/include/Geant4 -I/home/ao/workstation/Compton-Effect/Template/source/G4Actions/include -I/home/ao/workstation/Compton-Effect/Template/source/PhysicsList/include -I/home/ao/workstation/Compton-Effect/Template/source/AnalysisManager/include -I/home/ao/workstation/Compton-Effect/Template/source/DetectorConstruction/include -I/home/ao/workstation/Compton-Effect/Template/source/ParticleSource/include -DG4UI_USE_TCSH -DG4INTY_USE_QT -DG4UI_USE_QT -DG4VIS_USE_OPENGLQT -DG4INTY_USE_XT -DG4VIS_USE_OPENGLX -DG4VIS_USE_OPENGL

SimEventDict.rootmap: SimEvent.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate SimEventDict.rootmap

SimEvent-dictgen: CMakeFiles/SimEvent-dictgen
SimEvent-dictgen: SimEvent.cxx
SimEvent-dictgen: SimEventDict.rootmap
SimEvent-dictgen: CMakeFiles/SimEvent-dictgen.dir/build.make

.PHONY : SimEvent-dictgen

# Rule to build all files generated by this target.
CMakeFiles/SimEvent-dictgen.dir/build: SimEvent-dictgen

.PHONY : CMakeFiles/SimEvent-dictgen.dir/build

CMakeFiles/SimEvent-dictgen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SimEvent-dictgen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SimEvent-dictgen.dir/clean

CMakeFiles/SimEvent-dictgen.dir/depend:
	cd /home/ao/workstation/Compton-Effect/Template/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ao/workstation/Compton-Effect/Template /home/ao/workstation/Compton-Effect/Template /home/ao/workstation/Compton-Effect/Template/build /home/ao/workstation/Compton-Effect/Template/build /home/ao/workstation/Compton-Effect/Template/build/CMakeFiles/SimEvent-dictgen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SimEvent-dictgen.dir/depend

