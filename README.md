# libigl

## Specs 
- Original Link : https://github.com/libigl/libigl/tree/v2.4.0
- header-only library
- version 2.4.0

All files here are licensed under MPL2. The non-MPL2 files were removed. Those were in the subdirectories in libigl/igl in the main repository.

We are using this library as header-only. The .cpp files are included by the .h files.

We modified a number of files to suppress warnings, like signed/unsigned mismatch. This is necessary since we treat all warnings as errors.

List of the files that we modified from the IGL release <br>
- MshLoader.cpp <br>
- boundary_loop.cpp <br>
- diag.cpp <br>
- doublearea.cpp <br>
- euler_characteristic.cpp <br>
- harmonic.cpp <br>
- list_to_matrix.cpp <br>
- map_vertices_to_circle.cpp <br>
- parallel_for.h <br>
- sort.cpp <br>
- unique_rows.cpp <br>
- vertex_triangle_adjacency.cpp <br>
