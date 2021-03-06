// --------------------------------------------------------------------------
//
// Copyright
//   Markus Wittmann, 2016-2017
//   RRZE, University of Erlangen-Nuremberg, Germany
//   markus.wittmann -at- fau.de or hpc -at- rrze.fau.de
//
//   Viktor Haag, 2016
//   LSS, University of Erlangen-Nuremberg, Germany
//
//  This file is part of the Lattice Boltzmann Benchmark Kernels (LbmBenchKernels).
//
//  LbmBenchKernels is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  LbmBenchKernels is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with LbmBenchKernels.  If not, see <http://www.gnu.org/licenses/>.
//
// --------------------------------------------------------------------------
#ifndef __BENCH_KERNEL_D3Q19_LIST_PULL_SPLIT_NT__
#define __BENCH_KERNEL_D3Q19_LIST_PULL_SPLIT_NT__

#include "Kernel.h"

void D3Q19ListPullSplitNt1SInit_PullSoA(LatticeDesc * ld, KernelData ** kernelData, Parameters * params);
void D3Q19ListPullSplitNt2SInit_PullSoA(LatticeDesc * ld, KernelData ** kernelData, Parameters * params);
// void D3Q19ListPullSplitNtRia1SInit_PullSoA(LatticeDesc * ld, KernelData ** kernelData, Parameters * params);
// void D3Q19ListPullSplitNtRia2SInit_PullSoA(LatticeDesc * ld, KernelData ** kernelData, Parameters * params);

void D3Q19ListPullSplitNtDeinit_PullSoA(LatticeDesc * ld, KernelData ** kernelData);



#endif // __BENCH_KERNEL_D3Q19_LIST_PULL_SPLIT_NT__
