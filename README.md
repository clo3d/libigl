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
- barycentric_coordinates.cpp <br>
- boundary_facets.cpp <br>
- boundary_loop.cpp <br>
- circulation.cpp <br>
- collapse_edge.cpp <br>
- copyleft/tetgen/mesh_to_tetgenio.cpp<br>
- copyleft/tetgen/tetgenio_to_tetmesh.cpp<br>
- copyleft/tetgen/tetrahedralize.cpp<br>
- diag.cpp <br>
- doublearea.cpp <br>
- euler_characteristic.cpp <br>
- harmonic.cpp <br>
- list_to_matrix.cpp <br>
- map_vertices_to_circle.cpp <br>
- MshLoader.cpp <br>
- parallel_for.h <br>
- readOBJ.cpp <br>
- remove_unreferenced.cpp <br>
- slice.cpp <br>
- sort.cpp <br>
- unique_rows.cpp <br>
- vertex_triangle_adjacency.cpp <br>
- writeOBJ.cpp <br>

NOTE (Ellie, 2023.2.9)
We added `using namespace Tetgenerate;` in copyleft/tetgen/mesh_to_tetgenio.h to resolve confilcts with tetgen

NOTE (Ellie, 2023.2.23)
We modifed the files listed below by adding overloaded or modified functions
- mesh_with_skeleton.h
- mesh_with_skeleton.cpp
- sample_edges.h
- sample_edges.cpp
- readTGF.cpp