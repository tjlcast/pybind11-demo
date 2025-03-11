#include "functions.h"

// 计算任务
void compute_task(int n) {
    while (n > 0) {
        n--;
    }
}

// 多线程计算
void multi_thread_compute(int n, int num_threads) {
    std::vector<std::thread> threads;
    int chunk_size = n / num_threads;

    // 创建线程
    for (int i = 0; i < num_threads; ++i) {
        threads.emplace_back(compute_task, chunk_size);
    }

    // 等待线程完成
    for (auto& thread : threads) {
        thread.join();
    }
}