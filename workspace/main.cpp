#include <pybind11/pybind11.h>
#include <pybind11/stl.h>  // 用于自动转换 std::vector
#include <vector>
#include <omp.h>  // OpenMP 头文件
#include <iostream>
#include <omp.h>

void print_thread_id() {
    // 获取当前线程的 ID
    std::thread::id thread_id = std::this_thread::get_id();
    std::cout << "Thread ID: " << thread_id << std::endl;
}

// 单行求和函数
int sum_row(const std::vector<int>& row) {
    int sum = 0;
    for (int val : row) {
        sum += val;
    }
    return sum;
}

// 并行计算每行和的函数
std::vector<int> sum_rows(const std::vector<std::vector<int>>& matrix) {
    // 设置线程数为 4
    omp_set_num_threads(1);

    std::vector<int> sums(matrix.size());

    #pragma omp parallel for
    for (size_t i = 0; i < matrix.size(); ++i) {
        sums[i] = sum_row(matrix[i]);
        print_thread_id();
    }

    return sums;
}

int add(int i, int j) {
    return i + j;
}

PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin with OpenMP parallelization";

    m.def("sum_rows", &sum_rows, "Sum each row of a 2D array in parallel using OpenMP");

    m.doc() = "pybind11 example plugin"; // 可选的模块文档字符串

    m.def("add", &add, "A function that adds two numbers");
}
