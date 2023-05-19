# libigl

## Specs 
- version 2.4.0
- header-only library
- Original Link : https://github.com/libigl/libigl/tree/v2.4.0

All files here are licensed under MPL2. The non-MPL2 files were removed. Those were in the subdirectories in libigl/igl in the main repository.

We are using this library as header-only. The .cpp files are included by the .h files.

We modified a number of files to suppress warnings, like signed/unsigned mismatch. This is necessary since we treat all warnings as errors.

List of the files that we modified from the IGL release 
    MshLoader.cpp
    boundary_loop.cpp
    diag.cpp
    doublearea.cpp
    euler_characteristic.cpp
    harmonic.cpp
    list_to_matrix.cpp
    map_vertices_to_circle.cpp
    parallel_for.h
    sort.cpp
    unique_rows.cpp
    vertex_triangle_adjacency.cpp
