#include "fancyalgorithms/fancy_functions.hpp"
#include <boost/python.hpp>
namespace py = boost::python;


BOOST_PYTHON_MODULE(fancymodule)
{
  py::def("fancy_increment", fancy_increment);
  

}
