cmake_minimum_required(VERSION 3.10)
project(pybind11_example)

# 手动指定pybind11的cmake路径
set(pybind11_DIR "/usr/local/lib/python3.8/dist-packages/pybind11/share/cmake/pybind11")

# 查找Pybind11
find_package(pybind11 REQUIRED)

# 添加可执行文件
pybind11_add_module(example main.cpp)
