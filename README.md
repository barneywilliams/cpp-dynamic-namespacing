cpp-dynamic-namespacing
=======================

C++ Dynamic Namespacing with Static Linking Example

This is an example of using compile-time dynamic namespacing to allow multiple object files to link in different versions of a library and allow the correct versions to be used by each consumer within the same process at run time.

Ultimately, this makes it possible for consuming libraries to avoid API/ABI compatibility issues and share library code safely at the source level (e.g. subrepos). Subrepos could implement versioning via tags, embedded version info, or other build-time mechanisms.

While static linking may likely result in larger binary size, memory is cheap, and the benefits gained in configuration management, deployability, and overall stability are frequently much more important.

Building
--------
> make build
or
> make

Execute the Built Example
-------------------------
> make run

Full Clean Build and Run Example
--------------------------------
> make all
