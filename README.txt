## Specs (2022.03.10)
- version 2.4.0
- header-only library

https://github.com/libigl/libigl/tree/v2.4.0

All files here are licensed under MPL2. The non-MPL2 files were removed. Those were in the subdirectories in libigl/igl in the main repository.

We are using this library as header-only. The .cpp files are included by the .h files.

NOTE (George, 3/10/22):
We modified a number of files to suppress warnings, like signed/unsigned mismatch. This is necessary since we treat all warnings as errors.

List of the files that we modified from the IGL release (please keep this list updated):
    barycentric_coordinates.cpp
    boundary_facets.cpp
    boundary_loop.cpp
    circulation.cpp
    collapse_edge.cpp
    copyleft/tetgen/mesh_to_tetgenio.cpp
    copyleft/tetgen/tetgenio_to_tetmesh.cpp
    copyleft/tetgen/tetrahedralize.cpp
    diag.cpp
    doublearea.cpp
    euler_characteristic.cpp
    harmonic.cpp
    list_to_matrix.cpp
    map_vertices_to_circle.cpp
    MshLoader.cpp
    parallel_for.h
    readOBJ.cpp
    remove_unreferenced.cpp
    slice.cpp
    sort.cpp
    unique_rows.cpp
    vertex_triangle_adjacency.cpp
    writeOBJ.cpp

NOTE (Ellie, 2023.2.9)
We added using namespace Tetgenerate; in copyleft/tetgen/mesh_to_tetgenio.h to resolve confilcts with tetgen

NOTE (Ellie, 2023.2.23)
We modifed the files listed below by adding overloaded or modified functions
    mesh_with_skeleton.h
    mesh_with_skeleton.cpp
    sample_edges.h
    sample_edges.cpp
    readTGF.cpp