# CMake

## Good structure for a porject

```cpp
name_project
└── src
└── lib
└── include
└── doc
```

* src: source for the application.
* lib: source for the application library \* .cpp \* .hpp.
* include: interface for the library \* .h.
* tests: maip for quick test, try to use cppunit.
* doc: doxygen or any kind documentation.

## include_directories(DIRECTORY_INCLUDE_FILE)

Add the given directories to those the compiler uses to search for include files. Relative paths are interpreted as relative to the current source directory.

## cmake -B .\out\build

If you have a **src** directory do not need to user flag -S just use flag -B and path for build the project.
