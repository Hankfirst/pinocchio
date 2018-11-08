//
// Copyright (c) 2018 CNRS INRIA
//
// This file is part of Pinocchio
// Pinocchio is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
//
// Pinocchio is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Lesser Public License for more details. You should have
// received a copy of the GNU Lesser General Public License along with
// Pinocchio If not, see
// <http://www.gnu.org/licenses/>.

#ifndef __pinocchio_fwd_hpp__
#define __pinocchio_fwd_hpp__

/// Forward declarion of main pinocchio namespace
namespace pinocchio {}

#include "pinocchio/macros.hpp"
#include "pinocchio/deprecation.hpp"
#include "pinocchio/warning.hpp"
#include "pinocchio/config.hpp"

#ifdef PINOCCHIO_WITH_CPPAD_SUPPORT
#include "pinocchio/math/cppad.hpp"
#else
#include <Eigen/Dense>
#endif

#include "pinocchio/eigen-macros.hpp"

namespace pinocchio
{
  ///
  /// \brief Common traits structure to fully define base classes for CRTP.
  ///
  template<class C> struct traits {};
  
  ///
  /// \brief Type of the cast of a class C templated by Scalar and Options, to a new NewScalar type.
  ///        This class should be specialized for each types.
  ///
  template<typename NewScalar, class C> struct CastType;

  /// \brief Argument position.
  ///        Used as template parameter to refer to an argument.
  enum ArgumentPosition
  {
    ARG0 = 0,
    ARG1 = 1,
    ARG2 = 2,
    ARG3 = 3,
    ARG4 = 4
  };
}

#endif // #ifndef __pinocchio_fwd_hpp__