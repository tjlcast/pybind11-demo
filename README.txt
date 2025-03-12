# 项目名称

## 项目简介
这个项目是一个使用C++编写的计算库，包含一些基本的计算功能和单元测试。

## 目录结构
```
.gitignore
docker/
    build.ps1
    Dockerfile
    run.ps1
workspace/
    build.sh
    CMakeLists.txt
    compute.cpp
    functions.h
    main.cpp
    person.cpp
    person.h
    sum.cpp
    test.py
    build/
        cmake_install.cmake
        CMakeCache.txt
        example.cpython-38-x86_64-linux-gnu.so
        Makefile
        test.py
        CMakeFiles/
            cmake.check_cache
            CMakeDirectoryInformation.cmake
            CMakeOutput.log
            Makefile.cmake
            Makefile2
            progress.marks
            TargetDirectories.txt
            3.16.3/
            CMakeTmp/
            ...
    test/
        test_omp
        test_omp.cpp
```

## 构建和运行

### 使用CMake构建
1. 进入 `workspace` 目录：
    ```sh
    cd workspace
    ```

2. 运行构建脚本：
    ```sh
    ./build.sh
    ```

### 使用Docker构建
1. 进入 `docker` 目录：
    ```sh
    cd docker
    ```

2. 运行构建脚本：
    ```sh
    ./build.ps1
    ```

### 运行程序
1. 构建完成后，运行生成的可执行文件：
    ```sh
    ./build/your_executable_name
    ```

## 测试
1. 进入 `test` 目录：
    ```sh
    cd workspace/test
    ```

2. 运行测试程序：
    ```sh
    ./test_omp
    ```

## 文件说明
- `compute.cpp`：包含主要的计算逻辑。
- `functions.h`：声明了一些辅助函数。
- `main.cpp`：程序入口。
- `person.cpp` 和 `person.h`：定义和实现了一个 `Person` 类。
- `sum.cpp`：实现了一个求和函数。
- `test.py`：Python测试脚本。
- `CMakeLists.txt`：CMake构建配置文件。
- `build.sh`：构建脚本。
- `docker/`：包含Docker相关的文件和脚本。

## 贡献
欢迎提交问题和贡献代码。请确保在提交之前运行所有测试并遵循项目的代码风格。

## 许可证
此项目使用MIT许可证。有关详细信息，请参阅LICENSE文件。