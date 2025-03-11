#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <omp.h>  // OpenMP 头文件
#include <iostream>
#include <thread>


// 打印当前线程 ID
void print_thread_id();

// 单行求和函数
int sum_row(const std::vector<int>& row);

// 并行计算每行和的函数
std::vector<int> sum_rows(const std::vector<std::vector<int>>& matrix);

// 简单的加法函数
int add(int i, int j);

// 计算任务
void compute_task(int n);

// 多线程计算
void multi_thread_compute(int n, int num_threads);

#endif // FUNCTIONS_H