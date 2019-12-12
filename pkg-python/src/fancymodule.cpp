#include "fancyalgorithms/fancy_functions.hpp"
#include <boost/python.hpp>
namespace py = boost::python;


BOOST_PYTHON_MODULE(fancymodule)
{
  py::def("fancy_increment", fancy_increment);
  
  py::class_<FancyObject>("FancyObject", py::init<>())
    .def(py::init<int,int>())
    .add_property("min", &FancyObject::get_min, &FancyObject::set_min)
    .add_property("max", &FancyObject::get_max, &FancyObject::set_max)
    .def("random_increment", &FancyObject::random_increment);

}
