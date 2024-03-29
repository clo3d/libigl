// This file is part of libigl, a simple c++ geometry processing library.
// 
// Copyright (C) 2013 Alec Jacobson <alecjacobson@gmail.com>
// 
// This Source Code Form is subject to the terms of the Mozilla Public License 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.
#ifndef IGL_SAMPLE_EDGES_H
#define IGL_SAMPLE_EDGES_H
#include "igl_inline.h"

#include <Eigen/Dense>

namespace igl
{
  /// Compute k extra points along each edge in E defined over
  /// vertices of V.
  ///
  /// @param[in] V  vertices over which edges are defined, # vertices by dim
  /// @param[in] E  edge list, # edges by 2
  /// @param[in] k  number of extra samples to be computed along edge not
  ///        including start and end points
  /// @param[out] S  sampled vertices, size less than # edges * (2+k) by dim always begins
  ///        with V so that E is also defined over S
  IGL_INLINE void sample_edges(
    const Eigen::MatrixXd & V,
    const Eigen::MatrixXi & E,
    const int k,
    Eigen::MatrixXd & S);

  //Add overloaded Function 2023.02.08 by Ellie Kim
  // Inputs:
  //  samples_length  #length between samples to be computed along edge
  IGL_INLINE void sample_edges(
      const Eigen::MatrixXd& V,
      const Eigen::MatrixXi& E,
      const double sample_length,
      Eigen::MatrixXd& S);
}
#ifndef IGL_STATIC_LIBRARY
#  include "sample_edges.cpp"
#endif

#endif
