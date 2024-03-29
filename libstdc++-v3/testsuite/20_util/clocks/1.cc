// { dg-options "-std=gnu++0x" }
// { dg-require-cstdint "" }

// Copyright (C) 2008, 2009 Free Software Foundation
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// 20.8.5 Clocks [time.clock]

// { dg-do run { target { ! or32-*-elf } } }
// { dg-do compile { target or32-*-elf } }

#include <chrono>

// 20.8.5.1 system_clock [time.clock.system]
int
main()
{
  using namespace std::chrono;

  system_clock::time_point t1 = system_clock::now();
  bool is_monotonic = system_clock::is_monotonic;
  is_monotonic = is_monotonic; // suppress unused warning
  std::time_t t2 = system_clock::to_time_t(t1);
  system_clock::time_point t3 = system_clock::from_time_t(t2);
  
  return 0;
}
