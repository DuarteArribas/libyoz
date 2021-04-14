# libyoz.a

**libyoz.a** is a C static library, that provides several functions that expand on the regular C coding. This contains the source code for each of the sublibraries and their respective documentation.

* **Language**:
  * English
* **Latest version**: 1.1.0

## How to use?

* Include: Just import the header files, e.g.: _mem.h_
* Link libraries: Link each library to with the project.

The include files are in the include subdirectory of the _yoznacks_ directory and the libraries are in the archive subdirectory of the _yoznacks_ directory

---
## Documentation

The documentation can be found in the docs folder inside each sublibrary.

---
## Updating

To update these libraries, change the individual folders, copying the source and header files to the yoznacks folder. Then, run `make arc` to create the library.