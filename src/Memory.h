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
//   Michael Hussnaetter, 2017-2018
//   University of Erlangen-Nuremberg, Germany
//   michael.hussnaetter -at- fau.de
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
#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <stddef.h> // size_t

int MemAlloc(void ** ptr, size_t bytesToAlloc);
int MemAllocAligned(void ** ptr, size_t bytesToAlloc, size_t alignmentBytes);
int MemFree(void ** ptr);

int MemZero(void * ptr, size_t bytesToZero);

#ifdef HAVE_MEMKIND
int HbwAlloc(void ** ptr, size_t bytesToAlloc);
int HbwAllocAligned(void ** ptr, size_t bytesToAlloc, size_t alignmentBytes);
int HbwFree(void ** ptr);
#endif

#endif // __MEMORY_H__
