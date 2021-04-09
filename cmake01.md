# CMake

CMake is a tool for build, test and package software. CMake is used to control the software compilation process using simple plataform and compiler independent configuration files, and generate native makefiles and workspaces that can be used in the compiler environment of your choice.

## Basic

### cmake_minimum_required

Set the minimum version of cmake for a project.

```cmake
cmake_minimum_required(VERSION $VERSION_CMAKE)
```

### project

Set the name of the project and version.

```cmake
project($PROJECT_NAME VERSION $PROJECT_VERSION)
```

## Important Command Signatures

### cmake [\<options>] -S \<path-to-source> -B \<path-to-build>

where -S is a source path to root directory of the cmake project to build and -B build path to directory which cmake will use as the root of build directory.

### cmake --build \<dir>

Project binary directory to be built. This is required(unless a present is specified) and must be first.

### cmake --build \<dir> --target ALL_BUILD --config \<option>

--target Buil instead of the default target. Multiple targets may be given, separated by spaces.

ALL_BUILD  is used for this purpose for the Xcode and Visual Studio generators.

--config For multi-configuration tools, choose configuration.

\<option> in windows is Debug and Release.
