cmake_minimum_required(VERSION 3.10)
project(pybind11_example)

# 手动指定pybind11的cmake路径
set(pybind11_DIR "/usr/local/lib/python3.8/dist-packages/pybind11/share/cmake/pybind11")

# 查找Pybind11
find_package(pybind11 REQUIRED)

# 查找 OpenMP
find_package(OpenMP REQUIRED)

# 添加可执行文件
pybind11_add_module(example main.cpp)

# 添加 OpenMP 支持
target_link_libraries(example PRIVATE OpenMP::OpenMP_CXX)

# g++ -O3 -Wall -shared -std=c++11 -fPIC `python3 -m pybind11 --includes` main.cpp -o example`python3-config --extension-suffix`