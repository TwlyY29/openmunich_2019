#include <Rcpp.h>
#include "fancyalgorithms/fancy_functions.hpp"

using namespace Rcpp;

RCPP_MODULE(fancy){

  function("fancy_increment" , &fancy_increment  , "documentation for fancy_increment ");
  function("fancy_increment_container" , &fancy_increment_container  , "documentation for fancy_increment_container ");

  class_<FancyObject>("FancyObject")
    .constructor()
    .constructor<int,int>()

    .method("random_increment", &FancyObject::random_increment , "increment by random number")

    .property("min", &FancyObject::get_min, &FancyObject::set_min)
    .property("max", &FancyObject::get_max, &FancyObject::set_max)
    ;
}
