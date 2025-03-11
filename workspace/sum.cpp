#include "functions.h"

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