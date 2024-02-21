// This file is part of libigl, a simple c++ geometry processing library.
// 
// Copyright (C) 2013 Alec Jacobson <alecjacobson@gmail.com>
// 
// This Source Code Form is subject to the terms of the Mozilla Public License 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.
#include "sample_edges.h"
#include "igl/edge_lengths.h"

IGL_INLINE void igl::sample_edges(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & E,
  const int k,
  Eigen::MatrixXd & S)
{
  using namespace Eigen;
  // Resize output
  S.resize(V.rows() + k * E.rows(),V.cols());
  // Copy V at front of S
  S.block(0,0,V.rows(),V.cols()) = V;

  // loop over edges
  for(int i = 0;i<E.rows();i++)
  {
    VectorXd tip = V.row(E(i,0));
    VectorXd tail = V.row(E(i,1));
    for(int s=0;s<k;s++)
    {
      double f = double(s+1)/double(k+1);
      S.row(V.rows()+k*i+s) = f*tail + (1.0-f)*tip;
    }
  }
}

//Add overloaded Function 2023.02.08 by Ellie Kim
IGL_INLINE void igl::sample_edges(
	const Eigen::MatrixXd& V,
	const Eigen::MatrixXi& E,
	const double sample_length,
	Eigen::MatrixXd& S)
{
	using namespace Eigen;
	// Resize output

	std::vector<int> sample_num;
	sample_num.resize(E.rows());
	Eigen::MatrixXd length;
	igl::edge_lengths(V, E, length);
	//std::cout << length << std::endl;

	int allSampleNum = 0;
	for (int i = 0; i < E.rows(); i++)
	{
		if (length(i, 0) != 0)
			sample_num[i] = ceil(length(i, 0) / sample_length) - 1;
		else
			sample_num[i] = 0;
		//std::cout << i<<"length : "<<length(i,0)<<" sample num : "<<sample_num[i] << std::endl;
		allSampleNum += sample_num[i];
	}
	//std::cout << "allSampleNum : " << allSampleNum << std::endl;
	S.resize(V.rows() + allSampleNum, V.cols());
	// Copy V at front of S
	S.block(0, 0, V.rows(), V.cols()) = V;

	// loop over edges
	int currentStart = 0;
	for (int i = 0; i < E.rows(); i++)
	{
		VectorXd tip = V.row(E(i, 0));
		VectorXd tail = V.row(E(i, 1));
		for (int s = 0; s < sample_num[i]; s++)
		{
			double f = double(s + 1) / double(sample_num[i] + 1);
			S.row(V.rows() + currentStart + s) = f * tail + (1.0 - f) * tip;
		}
		currentStart += sample_num[i];
	}

}