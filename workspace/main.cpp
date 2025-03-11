#include <pybind11/pybind11.h>
#include <pybind11/stl.h>  // 用于自动转换 std::vector
#include "functions.h"
#include "person.h"

namespace py = pybind11;

// 绑定到 Python
PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin with OpenMP parallelization";

    m.def("sum_rows", &sum_rows, "Sum each row of a 2D array in parallel using OpenMP");

    m.doc() = "pybind11 example plugin"; // 可选的模块文档字符串

    m.def("add", &add, "A function that adds two numbers");

    m.def("multi_thread_compute", &multi_thread_compute, "Perform multi-threaded computation in C++");


    // 绑定 Person 类
    py::class_<Person>(m, "Person")
        .def(py::init<const std::string&, int>()) // 绑定构造函数
        .def("set_name", &Person::set_name)       // 绑定成员函数
        .def("get_name", &Person::get_name)
        .def("set_age", &Person::set_age)
        .def("get_age", &Person::get_age)
        .def("greet", &Person::greet);
}
