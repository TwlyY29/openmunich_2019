#include <Rcpp.h>
#include "fancyalgorithms/fancy_functions.hpp"

using namespace Rcpp;

RCPP_MODULE(fancy){

  function("fancy_increment" , &fancy_increment  , "documentation for fancy_increment ");

}
