# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\RPGSpill.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\RPGSpill.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\RPGSpill.dir\flags.make

CMakeFiles\RPGSpill.dir\src\main.cpp.obj: CMakeFiles\RPGSpill.dir\flags.make
CMakeFiles\RPGSpill.dir\src\main.cpp.obj: ..\src\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RPGSpill.dir/src/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\RPGSpill.dir\src\main.cpp.obj /FdCMakeFiles\RPGSpill.dir\ /FS -c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\main.cpp
<<

CMakeFiles\RPGSpill.dir\src\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPGSpill.dir/src/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\RPGSpill.dir\src\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\main.cpp
<<

CMakeFiles\RPGSpill.dir\src\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPGSpill.dir/src/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\RPGSpill.dir\src\main.cpp.s /c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\main.cpp
<<

CMakeFiles\RPGSpill.dir\src\PlayerCharacter.cpp.obj: CMakeFiles\RPGSpill.dir\flags.make
CMakeFiles\RPGSpill.dir\src\PlayerCharacter.cpp.obj: ..\src\PlayerCharacter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RPGSpill.dir/src/PlayerCharacter.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\RPGSpill.dir\src\PlayerCharacter.cpp.obj /FdCMakeFiles\RPGSpill.dir\ /FS -c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\PlayerCharacter.cpp
<<

CMakeFiles\RPGSpill.dir\src\PlayerCharacter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPGSpill.dir/src/PlayerCharacter.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\RPGSpill.dir\src\PlayerCharacter.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\PlayerCharacter.cpp
<<

CMakeFiles\RPGSpill.dir\src\PlayerCharacter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPGSpill.dir/src/PlayerCharacter.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\RPGSpill.dir\src\PlayerCharacter.cpp.s /c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\PlayerCharacter.cpp
<<

CMakeFiles\RPGSpill.dir\src\Attack.cpp.obj: CMakeFiles\RPGSpill.dir\flags.make
CMakeFiles\RPGSpill.dir\src\Attack.cpp.obj: ..\src\Attack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RPGSpill.dir/src/Attack.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\RPGSpill.dir\src\Attack.cpp.obj /FdCMakeFiles\RPGSpill.dir\ /FS -c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\Attack.cpp
<<

CMakeFiles\RPGSpill.dir\src\Attack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPGSpill.dir/src/Attack.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\RPGSpill.dir\src\Attack.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\Attack.cpp
<<

CMakeFiles\RPGSpill.dir\src\Attack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPGSpill.dir/src/Attack.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\RPGSpill.dir\src\Attack.cpp.s /c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\Attack.cpp
<<

CMakeFiles\RPGSpill.dir\src\GameManager.cpp.obj: CMakeFiles\RPGSpill.dir\flags.make
CMakeFiles\RPGSpill.dir\src\GameManager.cpp.obj: ..\src\GameManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RPGSpill.dir/src/GameManager.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\RPGSpill.dir\src\GameManager.cpp.obj /FdCMakeFiles\RPGSpill.dir\ /FS -c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\GameManager.cpp
<<

CMakeFiles\RPGSpill.dir\src\GameManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPGSpill.dir/src/GameManager.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\RPGSpill.dir\src\GameManager.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\GameManager.cpp
<<

CMakeFiles\RPGSpill.dir\src\GameManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPGSpill.dir/src/GameManager.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\RPGSpill.dir\src\GameManager.cpp.s /c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\GameManager.cpp
<<

CMakeFiles\RPGSpill.dir\src\Druid.cpp.obj: CMakeFiles\RPGSpill.dir\flags.make
CMakeFiles\RPGSpill.dir\src\Druid.cpp.obj: ..\src\Druid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RPGSpill.dir/src/Druid.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\RPGSpill.dir\src\Druid.cpp.obj /FdCMakeFiles\RPGSpill.dir\ /FS -c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\Druid.cpp
<<

CMakeFiles\RPGSpill.dir\src\Druid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPGSpill.dir/src/Druid.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\RPGSpill.dir\src\Druid.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\Druid.cpp
<<

CMakeFiles\RPGSpill.dir\src\Druid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPGSpill.dir/src/Druid.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\RPGSpill.dir\src\Druid.cpp.s /c C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\src\Druid.cpp
<<

# Object files for target RPGSpill
RPGSpill_OBJECTS = \
"CMakeFiles\RPGSpill.dir\src\main.cpp.obj" \
"CMakeFiles\RPGSpill.dir\src\PlayerCharacter.cpp.obj" \
"CMakeFiles\RPGSpill.dir\src\Attack.cpp.obj" \
"CMakeFiles\RPGSpill.dir\src\GameManager.cpp.obj" \
"CMakeFiles\RPGSpill.dir\src\Druid.cpp.obj"

# External object files for target RPGSpill
RPGSpill_EXTERNAL_OBJECTS =

RPGSpill.exe: CMakeFiles\RPGSpill.dir\src\main.cpp.obj
RPGSpill.exe: CMakeFiles\RPGSpill.dir\src\PlayerCharacter.cpp.obj
RPGSpill.exe: CMakeFiles\RPGSpill.dir\src\Attack.cpp.obj
RPGSpill.exe: CMakeFiles\RPGSpill.dir\src\GameManager.cpp.obj
RPGSpill.exe: CMakeFiles\RPGSpill.dir\src\Druid.cpp.obj
RPGSpill.exe: CMakeFiles\RPGSpill.dir\build.make
RPGSpill.exe: CMakeFiles\RPGSpill.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable RPGSpill.exe"
	"C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\RPGSpill.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100162~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100162~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\RPGSpill.dir\objects1.rsp @<<
 /out:RPGSpill.exe /implib:RPGSpill.lib /pdb:C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug\RPGSpill.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\RPGSpill.dir\build: RPGSpill.exe

.PHONY : CMakeFiles\RPGSpill.dir\build

CMakeFiles\RPGSpill.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RPGSpill.dir\cmake_clean.cmake
.PHONY : CMakeFiles\RPGSpill.dir\clean

CMakeFiles\RPGSpill.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug C:\Users\simone\Documents\Kristiania\2021-0Spring\C++\RPGGame\cmake-build-debug\CMakeFiles\RPGSpill.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\RPGSpill.dir\depend

