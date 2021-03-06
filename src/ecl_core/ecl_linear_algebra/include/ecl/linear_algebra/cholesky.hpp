/**
 * @file /ecl_linear_algebra/include/ecl/linear_algebra/cholesky.hpp
 *
 * @brief Convenience eigen module loader (preloads the plugin).
 *
 * @date 28/07/2010
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef ECL_LINEAR_ALGEBRA_CHOLESKY_HPP_
#define ECL_LINEAR_ALGEBRA_CHOLESKY_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ecl/linear_algebra/macros.hpp>
#include "formatters.hpp"

#ifndef EIGEN_MATRIXBASE_PLUGIN
  #define EIGEN_MATRIXBASE_PLUGIN <ecl/linear_algebra/eigen_plugin.hpp>
#endif

#if defined ECL_EIGEN_IS_INTERNAL_3_1_2
  #include <ecl/Eigen3.1.2/Cholesky>
#else
  #include <Eigen/Cholesky>
#endif

#endif /* ECL_LINEAR_ALGEBRA_CHOLESKY_HPP_ */
